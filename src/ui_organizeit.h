/********************************************************************************
** Form generated from reading UI file 'organizeit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORGANIZEIT_H
#define UI_ORGANIZEIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrganizeIt
{
public:
    QWidget *centralwidget;
    QLabel *themaintext;
    QPushButton *selectFolderButton;
    QPushButton *organizeItButton;
    QLabel *folderPathLabel;
    QLabel *selectedFolderLabel;

    void setupUi(QMainWindow *OrganizeIt)
    {
        if (OrganizeIt->objectName().isEmpty())
            OrganizeIt->setObjectName(QString::fromUtf8("OrganizeIt"));
        OrganizeIt->resize(504, 213);
        OrganizeIt->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 56, 70)"));
        centralwidget = new QWidget(OrganizeIt);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        themaintext = new QLabel(centralwidget);
        themaintext->setObjectName(QString::fromUtf8("themaintext"));
        themaintext->setGeometry(QRect(10, 40, 291, 21));
        themaintext->setStyleSheet(QString::fromUtf8("color: white;"));
        selectFolderButton = new QPushButton(centralwidget);
        selectFolderButton->setObjectName(QString::fromUtf8("selectFolderButton"));
        selectFolderButton->setGeometry(QRect(10, 70, 91, 41));
        selectFolderButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  border: 2px solid black;\n"
"  background-color: #f2f2f2;\n"
"  color: #333;\n"
"  border-radius: 8px;\n"
"  font-size: 12px;\n"
"  transition: background-color 0.3s ease, color 0.3s ease, border-color 0.3s ease;\n"
"\n"
"}"));
        organizeItButton = new QPushButton(centralwidget);
        organizeItButton->setObjectName(QString::fromUtf8("organizeItButton"));
        organizeItButton->setGeometry(QRect(340, 30, 141, 81));
        organizeItButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  padding: 10px 20px;\n"
"  border: 2px solid black;\n"
"  background-color: #dcdcdc;\n"
"  color: #333;\n"
"  border-radius: 8px;\n"
"  font-size: 16px;\n"
"  cursor: pointer;\n"
"  transition: background-color 0.3s ease, color 0.3s ease, border-color 0.3s ease;\n"
"}"));
        folderPathLabel = new QLabel(centralwidget);
        folderPathLabel->setObjectName(QString::fromUtf8("folderPathLabel"));
        folderPathLabel->setGeometry(QRect(120, 120, 371, 101));
        folderPathLabel->setStyleSheet(QString::fromUtf8("color: white;"));
        folderPathLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        selectedFolderLabel = new QLabel(centralwidget);
        selectedFolderLabel->setObjectName(QString::fromUtf8("selectedFolderLabel"));
        selectedFolderLabel->setGeometry(QRect(10, 120, 111, 16));
        selectedFolderLabel->setStyleSheet(QString::fromUtf8("color: white"));
        OrganizeIt->setCentralWidget(centralwidget);
        QWidget::setTabOrder(selectFolderButton, organizeItButton);

        retranslateUi(OrganizeIt);

        QMetaObject::connectSlotsByName(OrganizeIt);
    } // setupUi

    void retranslateUi(QMainWindow *OrganizeIt)
    {
        OrganizeIt->setWindowTitle(QCoreApplication::translate("OrganizeIt", "OrganizeIt", nullptr));
        themaintext->setText(QCoreApplication::translate("OrganizeIt", "Select the path that you want to organize", nullptr));
        selectFolderButton->setText(QCoreApplication::translate("OrganizeIt", "Select Folder", nullptr));
        organizeItButton->setText(QCoreApplication::translate("OrganizeIt", "ORGANIZE IT", nullptr));
        folderPathLabel->setText(QCoreApplication::translate("OrganizeIt", "none", nullptr));
        selectedFolderLabel->setText(QCoreApplication::translate("OrganizeIt", "Selected folder:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrganizeIt: public Ui_OrganizeIt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORGANIZEIT_H
