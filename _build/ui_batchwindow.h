/********************************************************************************
** Form generated from reading UI file 'batchwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATCHWINDOW_H
#define UI_BATCHWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BatchWindow
{
public:
    QFrame *line;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QSpacerItem *horizontalSpacer_6;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *maskIcon;
    QHBoxLayout *horizontalLayout_2;
    QLabel *maskLabel;
    QCheckBox *maskCheck;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *filterIcon;
    QHBoxLayout *horizontalLayout;
    QLabel *filterLabel;
    QCheckBox *filterCheck;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QWidget *widget1;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout;
    QCheckBox *imagesCheck;
    QCheckBox *vectorsCheck;
    QCheckBox *threadingCheck;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_16;
    QLabel *label_17;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QToolButton *startButton;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *stopButton;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_3;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_5;
    QProgressBar *progressBar;

    void setupUi(QDialog *BatchWindow)
    {
        if (BatchWindow->objectName().isEmpty())
            BatchWindow->setObjectName(QString::fromUtf8("BatchWindow"));
        BatchWindow->setWindowModality(Qt::ApplicationModal);
        BatchWindow->resize(440, 350);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BatchWindow->sizePolicy().hasHeightForWidth());
        BatchWindow->setSizePolicy(sizePolicy);
        BatchWindow->setMinimumSize(QSize(440, 350));
        BatchWindow->setMaximumSize(QSize(440, 350));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/openpiv.png"), QSize(), QIcon::Normal, QIcon::Off);
        BatchWindow->setWindowIcon(icon);
        line = new QFrame(BatchWindow);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(180, 10, 20, 335));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        widget = new QWidget(BatchWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(19, 10, 164, 311));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout_5->addWidget(label);

        horizontalSpacer_6 = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_5);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/icons/import_image.png")));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setPointSize(12);
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/icons/arrow-down-double-3_small.png")));

        gridLayout->addWidget(label_4, 1, 1, 1, 1);

        maskIcon = new QLabel(widget);
        maskIcon->setObjectName(QString::fromUtf8("maskIcon"));
        maskIcon->setPixmap(QPixmap(QString::fromUtf8(":/icons/image_mask.png")));
        maskIcon->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(maskIcon, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        maskLabel = new QLabel(widget);
        maskLabel->setObjectName(QString::fromUtf8("maskLabel"));
        maskLabel->setMinimumSize(QSize(92, 0));
        maskLabel->setFont(font1);

        horizontalLayout_2->addWidget(maskLabel);

        maskCheck = new QCheckBox(widget);
        maskCheck->setObjectName(QString::fromUtf8("maskCheck"));
        maskCheck->setMaximumSize(QSize(1677215, 16777215));
        maskCheck->setFont(font1);

        horizontalLayout_2->addWidget(maskCheck);


        gridLayout->addLayout(horizontalLayout_2, 2, 1, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/icons/arrow-down-double-3_small.png")));

        gridLayout->addWidget(label_6, 3, 1, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/icons/correlate.png")));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        gridLayout->addWidget(label_8, 4, 1, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/icons/arrow-down-double-3_small.png")));

        gridLayout->addWidget(label_9, 5, 1, 1, 1);

        filterIcon = new QLabel(widget);
        filterIcon->setObjectName(QString::fromUtf8("filterIcon"));
        filterIcon->setPixmap(QPixmap(QString::fromUtf8(":/icons/filter.png")));
        filterIcon->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(filterIcon, 6, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        filterLabel = new QLabel(widget);
        filterLabel->setObjectName(QString::fromUtf8("filterLabel"));
        filterLabel->setMinimumSize(QSize(45, 0));
        filterLabel->setFont(font1);

        horizontalLayout->addWidget(filterLabel);

        filterCheck = new QCheckBox(widget);
        filterCheck->setObjectName(QString::fromUtf8("filterCheck"));
        filterCheck->setMinimumSize(QSize(15, 0));
        filterCheck->setMaximumSize(QSize(16777215, 16777215));
        filterCheck->setFont(font1);

        horizontalLayout->addWidget(filterCheck);


        gridLayout->addLayout(horizontalLayout, 6, 1, 1, 1);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/icons/arrow-down-double-3_small.png")));

        gridLayout->addWidget(label_12, 7, 1, 1, 1);

        label_13 = new QLabel(widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/icons/edit.png")));
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_13, 8, 0, 1, 1);

        label_14 = new QLabel(widget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font1);

        gridLayout->addWidget(label_14, 8, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        widget1 = new QWidget(BatchWindow);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(210, 11, 218, 321));
        gridLayout_4 = new QGridLayout(widget1);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_15 = new QLabel(widget1);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font);

        horizontalLayout_4->addWidget(label_15);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        gridLayout_4->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        imagesCheck = new QCheckBox(widget1);
        imagesCheck->setObjectName(QString::fromUtf8("imagesCheck"));
        imagesCheck->setFont(font1);

        verticalLayout->addWidget(imagesCheck);

        vectorsCheck = new QCheckBox(widget1);
        vectorsCheck->setObjectName(QString::fromUtf8("vectorsCheck"));
        vectorsCheck->setFont(font1);

        verticalLayout->addWidget(vectorsCheck);

        threadingCheck = new QCheckBox(widget1);
        threadingCheck->setObjectName(QString::fromUtf8("threadingCheck"));
        threadingCheck->setFont(font1);

        verticalLayout->addWidget(threadingCheck);


        gridLayout_4->addLayout(verticalLayout, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 0, 0, 1, 1);

        label_16 = new QLabel(widget1);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMinimumSize(QSize(190, 80));
        label_16->setMaximumSize(QSize(190, 80));
        QFont font2;
        font2.setPointSize(10);
        label_16->setFont(font2);
        label_16->setWordWrap(true);

        gridLayout_2->addWidget(label_16, 0, 1, 3, 1);

        label_17 = new QLabel(widget1);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setPixmap(QPixmap(QString::fromUtf8(":/icons/bookmark-2.png")));

        gridLayout_2->addWidget(label_17, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        startButton = new QToolButton(widget1);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/player_play.png"), QSize(), QIcon::Normal, QIcon::Off);
        startButton->setIcon(icon1);
        startButton->setIconSize(QSize(25, 25));
        startButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        startButton->setAutoRaise(true);

        horizontalLayout_3->addWidget(startButton);

        horizontalSpacer_3 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        stopButton = new QToolButton(widget1);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopButton->setIcon(icon2);
        stopButton->setIconSize(QSize(25, 25));
        stopButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        stopButton->setAutoRaise(true);

        horizontalLayout_3->addWidget(stopButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        gridLayout_4->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_11 = new QLabel(widget1);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        gridLayout_3->addWidget(label_11, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        progressBar = new QProgressBar(widget1);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMinimumSize(QSize(0, 30));
        progressBar->setValue(24);

        gridLayout_3->addWidget(progressBar, 1, 0, 1, 2);


        gridLayout_4->addLayout(gridLayout_3, 4, 0, 1, 1);


        retranslateUi(BatchWindow);

        QMetaObject::connectSlotsByName(BatchWindow);
    } // setupUi

    void retranslateUi(QDialog *BatchWindow)
    {
        BatchWindow->setWindowTitle(QApplication::translate("BatchWindow", "Batch Process", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("BatchWindow", "Process Queue", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("BatchWindow", "Import images", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        maskIcon->setText(QString());
        maskLabel->setText(QApplication::translate("BatchWindow", "Apply Mask", 0, QApplication::UnicodeUTF8));
        maskCheck->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QApplication::translate("BatchWindow", "Cross Correlate", 0, QApplication::UnicodeUTF8));
        label_9->setText(QString());
        filterIcon->setText(QString());
        filterLabel->setText(QApplication::translate("BatchWindow", "Filter", 0, QApplication::UnicodeUTF8));
        filterCheck->setText(QString());
        label_12->setText(QString());
        label_13->setText(QString());
        label_14->setText(QApplication::translate("BatchWindow", "Output data", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("BatchWindow", "Options", 0, QApplication::UnicodeUTF8));
        imagesCheck->setText(QApplication::translate("BatchWindow", "Display images", 0, QApplication::UnicodeUTF8));
        vectorsCheck->setText(QApplication::translate("BatchWindow", "Display vectors", 0, QApplication::UnicodeUTF8));
        threadingCheck->setText(QApplication::translate("BatchWindow", "Enable multi-threading", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("BatchWindow", "Note: Current settings will be used.  Make changes if necessary before proceeding.", 0, QApplication::UnicodeUTF8));
        label_17->setText(QString());
        startButton->setText(QApplication::translate("BatchWindow", "Start", 0, QApplication::UnicodeUTF8));
        stopButton->setText(QApplication::translate("BatchWindow", "Stop", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("BatchWindow", "Progress", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BatchWindow: public Ui_BatchWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATCHWINDOW_H
