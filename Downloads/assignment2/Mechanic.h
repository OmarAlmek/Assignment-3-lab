#pragma once
#ifndef MECHANIC_H
#define MECHANIC_H
#include "Person.h"
#include <vector>
class Mechanic : public Person
{private:
    int counter;
    vector<Appointment>Book;
 
public:
    Mechanic();
    Mechanic(string name, string ID, int age);
    bool isAvailable(Appointment target);
    int get_counter();
    void set_Book(Appointment a);
   vector<Appointment> get_Book();
   Appointment get_Appointment_mec(int index);
   void print();

};
#endif // !MECHANIC_H
