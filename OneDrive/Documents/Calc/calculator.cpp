#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

Calculator::~Calculator()
{
    delete ui;
}
void Calculator::ManageCalc(QString buttonText){
    if (OperationPressed== "")
    {
        Number1 = buttonText;
        ui->lineEdit->setText(Number1);
    }
    else {
        Number2 = buttonText;
        Number2Exist = true;
        ui -> lineEdit-> setText(ui->lineEdit-> text()+ Number2);
    }
}

void Calculator::on_pushButton2_clicked()
{
    ManageCalc(ui->pushButton2->text());
}


void Calculator::on_pushButton1_clicked()
{
    ManageCalc(ui->pushButton1->text());
}


void Calculator::on_pushButton3_clicked()
{
    ManageCalc(ui->pushButton3->text());
}


void Calculator::on_pushButtonAdd_clicked()
{
   if (OperationPressed== ""){
       OperationPressed = ui->pushButtonAdd->text();
       ui-> lineEdit->setText(ui->lineEdit->text()+ OperationPressed);
   }
   else{
       Number1 = "";
       Number2= "";
       OperationPressed= "";
       Number2Exist = false;
       ui ->lineEdit->setText("Error: you cannot use multiple operations.");

   }

   }


void Calculator::on_pushButton4_clicked()
{
    ManageCalc(ui->pushButton4->text());
}


void Calculator::on_pushButton5_clicked()
{
    ManageCalc(ui->pushButton5->text());
}


void Calculator::on_pushButton6_clicked()
{
    ManageCalc(ui->pushButton6->text());
}


void Calculator::on_pushButtonSub_clicked()
{
    if (OperationPressed== ""){
        OperationPressed = ui->pushButtonSub->text();
        ui-> lineEdit->setText(ui->lineEdit->text() + OperationPressed);
    }
    else{
        Number1 = "";
        Number2= "";
        OperationPressed= "";
        Number2Exist = false;
        ui ->lineEdit->setText("Error: you cannot use multiple operations.");

    }

}


void Calculator::on_pushButton7_clicked()
{
    ManageCalc(ui->pushButton7->text());
}


void Calculator::on_pushButton8_clicked()
{
    ManageCalc(ui->pushButton8->text());
}


void Calculator::on_pushButton9_clicked()
{
    ManageCalc(ui->pushButton9->text());
}


void Calculator::on_pushButtonMult_clicked()
{
    if (OperationPressed== ""){
        OperationPressed = ui->pushButtonMult->text();
        ui-> lineEdit->setText(ui->lineEdit->text()+ OperationPressed);
    }
    else{
        Number1 = "";
        Number2= "";
        OperationPressed= "";
        Number2Exist = false;
        ui ->lineEdit->setText("Error: you cannot use multiple operations.");

    }

}


void Calculator::on_pushButtonC_clicked()
{
 }


void Calculator::on_pushButton0_clicked()
{
    ManageCalc(ui->pushButton0->text());
}


void Calculator::on_pushButtonEqual_clicked()
{
    if (OperationPressed== ""){
        Number1 = "";
        Number2 = "";
        OperationPressed = "";
        Number2Exist = false;
        ui-> lineEdit->setText(" Error : No operation");
    }
   if (!Number2Exist){
       Number1 = "";
       Number2 = "";
       OperationPressed = "";
       Number2Exist = false;
       ui-> lineEdit->setText(" Error : No second number given");
   }

if (OperationPressed == "+")
{
    ui->lineEdit->setText(QString::number(Number1.toInt()+ Number2.toInt()));
}

else if (OperationPressed == "-")
{
    ui->lineEdit->setText(QString::number(Number1.toInt()- Number2.toInt()));

}

else if (OperationPressed == "*")
{
    ui->lineEdit->setText(QString::number(Number1.toInt()* Number2.toInt()));

}

else if (OperationPressed == "/")
{
    ui->lineEdit->setText(QString::number(Number1.toInt()/ Number2.toInt()));

}
}


void Calculator::on_pushButtonDiv_clicked()
{
    if (OperationPressed== ""){
        OperationPressed = ui->pushButtonDiv->text();
        ui-> lineEdit->setText(ui->lineEdit->text()+ OperationPressed);
    }
    else{
        Number1 = "";
        Number2= "";
        OperationPressed= "";
        Number2Exist = false;
        ui ->lineEdit->setText("Error: you cannot use multiple operations.");

    }

}
