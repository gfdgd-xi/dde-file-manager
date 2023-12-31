// SPDX-FileCopyrightText: 2021 - 2023 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: GPL-3.0-or-later

#ifndef TASKCOMMANDER_H
#define TASKCOMMANDER_H

#include "dfmplugin_search_global.h"

#include <QObject>

DPSEARCH_BEGIN_NAMESPACE

class TaskCommanderPrivate;
class TaskCommander : public QObject
{
    Q_OBJECT
    friend class MainController;

private:
    explicit TaskCommander(QString taskId, const QUrl &url, const QString &keyword, QObject *parent = nullptr);
    QString taskID() const;
    QList<QUrl> getResults() const;
    bool start();
    void stop();
    void deleteSelf();
    void createSearcher(const QUrl &url, const QString &keyword);

signals:
    void matched(QString taskId);
    void finished(QString taskId);

private:
    TaskCommanderPrivate *d;
};

DPSEARCH_END_NAMESPACE

#endif   // TASKCOMMANDER_H
