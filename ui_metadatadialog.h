/********************************************************************************
** Form generated from reading UI file 'metadatadialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METADATADIALOG_H
#define UI_METADATADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_MetadataDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *btnCerrar;
    QSpacerItem *horizontalSpacer;
    QListWidget *listWidget;

    void setupUi(QDialog *MetadataDialog)
    {
        if (MetadataDialog->objectName().isEmpty())
            MetadataDialog->setObjectName(QStringLiteral("MetadataDialog"));
        MetadataDialog->resize(400, 300);
        gridLayout_2 = new QGridLayout(MetadataDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btnCerrar = new QPushButton(MetadataDialog);
        btnCerrar->setObjectName(QStringLiteral("btnCerrar"));

        gridLayout->addWidget(btnCerrar, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        listWidget = new QListWidget(MetadataDialog);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout->addWidget(listWidget, 0, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(MetadataDialog);
        QObject::connect(btnCerrar, SIGNAL(pressed()), MetadataDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(MetadataDialog);
    } // setupUi

    void retranslateUi(QDialog *MetadataDialog)
    {
        MetadataDialog->setWindowTitle(QApplication::translate("MetadataDialog", "Metadatos", 0));
#ifndef QT_NO_TOOLTIP
        btnCerrar->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        btnCerrar->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        btnCerrar->setText(QApplication::translate("MetadataDialog", "Cerrar", 0));
    } // retranslateUi

};

namespace Ui {
    class MetadataDialog: public Ui_MetadataDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METADATADIALOG_H
