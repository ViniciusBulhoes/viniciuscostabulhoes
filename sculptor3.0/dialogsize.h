#ifndef DIALOGSIZE_H
#define DIALOGSIZE_H

#include <QDialog>
#include <QString>

namespace Ui {
class DialogSize;
}

class DialogSize : public QDialog
{
    Q_OBJECT

public:
    explicit DialogSize(QWidget *parent = nullptr);
    ~DialogSize();
    int pegaTamanhoX();
    int pegaTamanhoY();
    int pegaTamanhoZ();

private:
    Ui::DialogSize *ui;
};

#endif // DIALOGSIZE_H
