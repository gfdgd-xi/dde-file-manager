/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c DBusDisplay -p dbusdisplay1 org.deepin.dde.Display1.xml
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef DBUSDISPLAY1_H
#define DBUSDISPLAY1_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

struct DisplayRect {
    qint16 x;
    qint16 y;
    quint16 width;
    quint16 height;

    operator QRect() const
    {
        return QRect(x, y, width, height);
    }
};

Q_DECLARE_METATYPE(DisplayRect)

QDBusArgument &operator<<(QDBusArgument &argument, const DisplayRect &rect);
const QDBusArgument &operator>>(const QDBusArgument &argument, DisplayRect &rect);
QDebug operator<<(QDebug deg, const DisplayRect &rect);

/*
 * Proxy class for interface org.deepin.dde.Display1
 */
class DBusDisplay: public QDBusAbstractInterface
{
    Q_OBJECT
    Q_SLOT void __propertyChanged__(const QDBusMessage &msg)
    {
        QList<QVariant> arguments = msg.arguments();
        if (3 != arguments.count())
            return;
        QString interfaceName = msg.arguments().at(0).toString();
        if (interfaceName != "org.deepin.dde.Display1")
            return;
        QVariantMap changedProps = qdbus_cast<QVariantMap>(arguments.at(1).value<QDBusArgument>());
        QStringList keys = changedProps.keys();
        foreach (const QString &prop, keys) {
            const QMetaObject *self = metaObject();
            for (int i = self->propertyOffset(); i < self->propertyCount(); ++i) {
                QMetaProperty p = self->property(i);
                if (p.name() == prop) {
                    Q_EMIT p.notifySignal().invoke(this);
                }
            }
        }
    }
public:
    static inline const char *staticInterfaceName()
    { return "org.deepin.dde.Display1"; }
    static inline const char *staticServiceName()
    { return "org.deepin.dde.Display1";}
    static inline const char *staticObjectPath()
    { return "/org/deepin/dde/Display1";}
public:
    DBusDisplay(QObject *parent = nullptr);

    ~DBusDisplay();

    Q_PROPERTY(uchar DisplayMode READ displayMode NOTIFY DisplayModeChanged)
    inline uchar displayMode() const
    { return qvariant_cast< uchar >(property("DisplayMode")); }

    Q_PROPERTY(bool HasChanged READ hasChanged)
    inline bool hasChanged() const
    { return qvariant_cast< bool >(property("HasChanged")); }

    Q_PROPERTY(QList<QDBusObjectPath> Monitors READ monitors NOTIFY MonitorsChanged)
    inline QList<QDBusObjectPath> monitors() const
    { return qvariant_cast< QList<QDBusObjectPath> >(property("Monitors")); }

    Q_PROPERTY(QString Primary READ primary NOTIFY PrimaryChanged)
    inline QString primary() const
    { return qvariant_cast< QString >(property("Primary")); }

    Q_PROPERTY(DisplayRect PrimaryRect READ primaryRect NOTIFY PrimaryRectChanged)
    inline DisplayRect primaryRect() const
    { return qvariant_cast< DisplayRect >(property("PrimaryRect")); }

    Q_PROPERTY(ushort ScreenHeight READ screenHeight)
    inline ushort screenHeight() const
    { return qvariant_cast< ushort >(property("ScreenHeight")); }

    Q_PROPERTY(ushort ScreenWidth READ screenWidth)
    inline ushort screenWidth() const
    { return qvariant_cast< ushort >(property("ScreenWidth")); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> ApplyChanges()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("ApplyChanges"), argumentList);
    }

    inline QDBusPendingReply<> AssociateTouch(const QString &outputName, const QString &touchSerial)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(outputName) << QVariant::fromValue(touchSerial);
        return asyncCallWithArgumentList(QStringLiteral("AssociateTouch"), argumentList);
    }

    inline QDBusPendingReply<> AssociateTouchByUUID(const QString &outputName, const QString &touchUUID)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(outputName) << QVariant::fromValue(touchUUID);
        return asyncCallWithArgumentList(QStringLiteral("AssociateTouchByUUID"), argumentList);
    }

    inline QDBusPendingReply<bool> CanRotate()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("CanRotate"), argumentList);
    }

    inline QDBusPendingReply<bool> CanSetBrightness(const QString &outputName)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(outputName);
        return asyncCallWithArgumentList(QStringLiteral("CanSetBrightness"), argumentList);
    }

    inline QDBusPendingReply<> ChangeBrightness(bool raised)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(raised);
        return asyncCallWithArgumentList(QStringLiteral("ChangeBrightness"), argumentList);
    }

    inline QDBusPendingReply<> DeleteCustomMode(const QString &name)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(name);
        return asyncCallWithArgumentList(QStringLiteral("DeleteCustomMode"), argumentList);
    }

    inline QDBusPendingReply<QString, QDBusObjectPath> GetBuiltinMonitor()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("GetBuiltinMonitor"), argumentList);
    }
    inline QDBusReply<QString> GetBuiltinMonitor(QDBusObjectPath &outArg1)
    {
        QList<QVariant> argumentList;
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QStringLiteral("GetBuiltinMonitor"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 2) {
            outArg1 = qdbus_cast<QDBusObjectPath>(reply.arguments().at(1));
        }
        return reply;
    }

    inline QDBusPendingReply<uchar> GetRealDisplayMode()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("GetRealDisplayMode"), argumentList);
    }

    inline QDBusPendingReply<QStringList> ListOutputNames()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("ListOutputNames"), argumentList);
    }

    inline QDBusPendingReply<> ModifyConfigName(const QString &name, const QString &newName)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(name) << QVariant::fromValue(newName);
        return asyncCallWithArgumentList(QStringLiteral("ModifyConfigName"), argumentList);
    }

    inline QDBusPendingReply<> RefreshBrightness()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("RefreshBrightness"), argumentList);
    }

    inline QDBusPendingReply<> Reset()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("Reset"), argumentList);
    }

    inline QDBusPendingReply<> ResetChanges()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("ResetChanges"), argumentList);
    }

    inline QDBusPendingReply<> Save()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("Save"), argumentList);
    }

    inline QDBusPendingReply<> SetAndSaveBrightness(const QString &outputName, double value)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(outputName) << QVariant::fromValue(value);
        return asyncCallWithArgumentList(QStringLiteral("SetAndSaveBrightness"), argumentList);
    }

    inline QDBusPendingReply<> SetBrightness(const QString &outputName, double value)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(outputName) << QVariant::fromValue(value);
        return asyncCallWithArgumentList(QStringLiteral("SetBrightness"), argumentList);
    }

    inline QDBusPendingReply<> SetColorTemperature(int value)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(value);
        return asyncCallWithArgumentList(QStringLiteral("SetColorTemperature"), argumentList);
    }

    inline QDBusPendingReply<> SetMethodAdjustCCT(int adjustMethod)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(adjustMethod);
        return asyncCallWithArgumentList(QStringLiteral("SetMethodAdjustCCT"), argumentList);
    }

    inline QDBusPendingReply<> SetPrimary(const QString &outputName)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(outputName);
        return asyncCallWithArgumentList(QStringLiteral("SetPrimary"), argumentList);
    }

    inline QDBusPendingReply<> SwitchMode(uchar mode, const QString &name)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(mode) << QVariant::fromValue(name);
        return asyncCallWithArgumentList(QStringLiteral("SwitchMode"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void MonitorsChanged();
    void PrimaryChanged();
    void DisplayModeChanged();
    void PrimaryRectChanged();
};

#endif
