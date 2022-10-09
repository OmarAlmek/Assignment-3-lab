#pragma once
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "Person.h"
class Customer :
    public Person
{
private:
    string MechanicID;
    Appointment opp;
public:
    Customer();
    Customer(string mechid);
    Customer(string mechid, Appointment appointment);
    Customer(string name, string personalid, int age);
    Customer(string name, string personalid, int age, string mechid);
    void set_mechanicID();
    void set_mechanicID(string newid);
    string get_mechanicID();
    void set_appointment(Person::Appointment ap);
    void set_appointment();
    Person::Appointment get_appointment();
    bool operator < (const Customer& obj); // if (num > x.num) return 1 else return 0;
    bool operator > (const Customer& obj);
    bool operator == (const Customer& obj);
    void print();
};
#endif // !CUSTOMER_
