#pragma once
#ifndef PERSON_H
#include <string>
#include <iostream>
using namespace std;
class Person
{ 
protected:
	string Name;
	string ID;
	int Age;
public:
	Person();
	Person(string, string, int);
	void set_Name(string n);
	void set_Name();
	void set_id(string id);
	void set_id();
	void set_age(int a);
	void set_age();
	string get_name();
	string get_ID();
	int get_age();
	virtual void print()=0;
	struct Appointment {
		int hours, mins;
	};
};
#endif //!PERSON_H