/********************************************************************************
** Form generated from reading UI file 'recthread.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECTHREAD_H
#define UI_RECTHREAD_H

#include <QtCore/QThread>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_RecThread
{
public:

    void setupUi(QThread *RecThread)
    {
        if (RecThread->objectName().isEmpty())
            RecThread->setObjectName(QStringLiteral("RecThread"));
        RecThread->resize(400, 300);

        retranslateUi(RecThread);

        QMetaObject::connectSlotsByName(RecThread);
    } // setupUi

    void retranslateUi(QThread *RecThread)
    {
        RecThread->setWindowTitle(QApplication::translate("RecThread", "RecThread", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RecThread: public Ui_RecThread {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECTHREAD_H
