/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-application-wizard/dbus/org.deepin.dde.daemon.Launcher1.xml -a ./dde-application-wizard/toolGenerate/qdbusxml2cpp/org.deepin.dde.daemon.Launcher1Adaptor -i ./dde-application-wizard/toolGenerate/qdbusxml2cpp/org.deepin.dde.daemon.Launcher1.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef ORG_DEEPIN_DDE_DAEMON_LAUNCHER1ADAPTOR_H
#define ORG_DEEPIN_DDE_DAEMON_LAUNCHER1ADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-application-wizard/toolGenerate/qdbusxml2cpp/org.deepin.dde.daemon.Launcher1.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.deepin.dde.daemon.Launcher1
 */
class Launcher1Adaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.deepin.dde.daemon.Launcher1")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.deepin.dde.daemon.Launcher1\">\n"
"    <method name=\"RequestUninstall\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"desktop\"/>\n"
"      <arg direction=\"in\" type=\"b\" name=\"unused\"/>\n"
"    </method>\n"
"    <signal name=\"UninstallSuccess\">\n"
"      <arg type=\"s\" name=\"appID\"/>\n"
"    </signal>\n"
"    <signal name=\"UninstallFailed\">\n"
"      <arg type=\"s\" name=\"appId\"/>\n"
"      <arg type=\"s\" name=\"errMsg\"/>\n"
"    </signal>\n"
"  </interface>\n"
        "")
public:
    Launcher1Adaptor(QObject *parent);
    virtual ~Launcher1Adaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void RequestUninstall(const QString &desktop, bool unused);
Q_SIGNALS: // SIGNALS
    void UninstallFailed(const QString &appId, const QString &errMsg);
    void UninstallSuccess(const QString &appID);
};

#endif