#include "theming_to_tweak.h"
#include "ui_theming_to_tweak.h"

theming_to_tweak::theming_to_tweak(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::theming_to_tweak)
{
    ui->setupUi(this);
}

theming_to_tweak::~theming_to_tweak()
{
    delete ui;
}

QLineEdit* theming_to_tweak::nameEditor()
{
    return ui->lineEdit_Name;
}
