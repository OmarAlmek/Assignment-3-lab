#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Calculator; }
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private slots:
    void on_pushButton2_clicked();

    void on_pushButton1_clicked();

    void on_pushButton3_clicked();

    void on_pushButtonAdd_clicked();

    void on_pushButton4_clicked();

    void on_pushButton5_clicked();

    void on_pushButton6_clicked();

    void on_pushButtonSub_clicked();

    void on_pushButton7_clicked();

    void on_pushButton8_clicked();

    void on_pushButton9_clicked();

    void on_pushButtonMult_clicked();

    void on_pushButtonC_clicked();

    void on_pushButton0_clicked();

    void on_pushButtonEqual_clicked();

    void on_pushButtonDiv_clicked();

    void ManageCalc(QString buttonText);

private:
    Ui::Calculator *ui;
    QString Number1= "";
    QString Number2= "";
    QString OperationPressed= "";
    bool Number2Exist = false;

};
#endif // CALCULATOR_H
