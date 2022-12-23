#include "dialogsize.h"
#include "ui_dialogsize.h"

DialogSize::DialogSize(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogSize)
{
    ui->setupUi(this);
}

DialogSize::~DialogSize()
{
    delete ui;
}

int DialogSize::pegaTamanhoX()
{
    QString linex;
    linex = ui->lineEditX->text();
    return linex.toInt();
}

int DialogSize::pegaTamanhoY()
{
    QString liney;
    liney = ui->lineEditY->text();
    return liney.toInt();
}

int DialogSize::pegaTamanhoZ()
{
    QString linez;
    linez = ui->lineEditZ->text();
    return linez.toInt();
}
