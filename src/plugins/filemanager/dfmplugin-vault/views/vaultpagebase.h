// SPDX-FileCopyrightText: 2022 - 2023 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: GPL-3.0-or-later

#ifndef VAULTPAGEBASE_H
#define VAULTPAGEBASE_H

#include "dfmplugin_vault_global.h"

#include <DDialog>
namespace dfmplugin_vault {
class VaultPageBase : public DTK_WIDGET_NAMESPACE::DDialog
{
    Q_OBJECT
public:
    explicit VaultPageBase(QWidget *parent = nullptr);

protected:
    QWidget *wndptr { nullptr };   //! current window pointer.
};
}
#endif   //VAULTPAGEBASE_H
