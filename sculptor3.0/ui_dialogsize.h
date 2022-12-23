/********************************************************************************
** Form generated from reading UI file 'dialogsize.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSIZE_H
#define UI_DIALOGSIZE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogSize
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditX;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditY;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEditZ;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogSize)
    {
        if (DialogSize->objectName().isEmpty())
            DialogSize->setObjectName("DialogSize");
        DialogSize->resize(400, 251);
        verticalLayout = new QVBoxLayout(DialogSize);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(DialogSize);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEditX = new QLineEdit(DialogSize);
        lineEditX->setObjectName("lineEditX");

        horizontalLayout->addWidget(lineEditX);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(DialogSize);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEditY = new QLineEdit(DialogSize);
        lineEditY->setObjectName("lineEditY");

        horizontalLayout_2->addWidget(lineEditY);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(DialogSize);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        lineEditZ = new QLineEdit(DialogSize);
        lineEditZ->setObjectName("lineEditZ");

        horizontalLayout_3->addWidget(lineEditZ);


        verticalLayout->addLayout(horizontalLayout_3);

        buttonBox = new QDialogButtonBox(DialogSize);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DialogSize);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogSize, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogSize, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogSize);
    } // setupUi

    void retranslateUi(QDialog *DialogSize)
    {
        DialogSize->setWindowTitle(QCoreApplication::translate("DialogSize", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogSize", "X Dimension", nullptr));
        label_2->setText(QCoreApplication::translate("DialogSize", "Y Dimension", nullptr));
        label_3->setText(QCoreApplication::translate("DialogSize", "Z Dimension", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSize: public Ui_DialogSize {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSIZE_H
