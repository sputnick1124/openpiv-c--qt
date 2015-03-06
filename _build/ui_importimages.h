/********************************************************************************
** Form generated from reading UI file 'importimages.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTIMAGES_H
#define UI_IMPORTIMAGES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "importimagelist.h"

QT_BEGIN_NAMESPACE

class Ui_ImportImages
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *topLabel;
    QLineEdit *dirEdit;
    ImportImageList *imageListWidget;
    QWidget *layoutWidget;
    QHBoxLayout *buttonLayout;
    QPushButton *importButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *ImportImages)
    {
        if (ImportImages->objectName().isEmpty())
            ImportImages->setObjectName(QString::fromUtf8("ImportImages"));
        ImportImages->resize(400, 428);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/openpiv.png"), QSize(), QIcon::Normal, QIcon::Off);
        ImportImages->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(ImportImages);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        topLabel = new QLabel(ImportImages);
        topLabel->setObjectName(QString::fromUtf8("topLabel"));

        verticalLayout->addWidget(topLabel);

        dirEdit = new QLineEdit(ImportImages);
        dirEdit->setObjectName(QString::fromUtf8("dirEdit"));
        dirEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dirEdit->setReadOnly(true);

        verticalLayout->addWidget(dirEdit);

        imageListWidget = new ImportImageList(ImportImages);
        imageListWidget->setObjectName(QString::fromUtf8("imageListWidget"));

        verticalLayout->addWidget(imageListWidget);

        layoutWidget = new QWidget(ImportImages);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        buttonLayout = new QHBoxLayout(layoutWidget);
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));
        buttonLayout->setSizeConstraint(QLayout::SetFixedSize);
        importButton = new QPushButton(layoutWidget);
        importButton->setObjectName(QString::fromUtf8("importButton"));

        buttonLayout->addWidget(importButton);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        buttonLayout->addWidget(cancelButton);


        verticalLayout->addWidget(layoutWidget);


        retranslateUi(ImportImages);

        QMetaObject::connectSlotsByName(ImportImages);
    } // setupUi

    void retranslateUi(QDialog *ImportImages)
    {
        ImportImages->setWindowTitle(QApplication::translate("ImportImages", "Image Import", 0, QApplication::UnicodeUTF8));
        topLabel->setText(QApplication::translate("ImportImages", "Recognized images in:", 0, QApplication::UnicodeUTF8));
        importButton->setText(QApplication::translate("ImportImages", "Import", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("ImportImages", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ImportImages: public Ui_ImportImages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTIMAGES_H
