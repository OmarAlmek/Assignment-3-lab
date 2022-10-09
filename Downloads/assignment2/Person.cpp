#include "Person.h"
Person::Person() {
	Name = "";
	ID = "";
	Age = 0;
}
Person::Person(string name, string id, int age) {
	Name = name;
	ID = id;
	Age = age;
}
void Person::set_Name(string n) {
	Name = n;
}
void Person::set_Name() {
	string n;
	cout << "Enter name: \n";
	cin >> n;
	Name = n;
}
void Person::set_id(string id) {
	ID = id;
}
void Person::set_id() {
	string id;
	cout << "Enter ID for: \n" << Person::get_name() << ": ";
	cin >> id;
	ID = id;
}
void Person::set_age(int a) {
	Age = a;
}
void Person::set_age() {
	int a;
	cout << "Enter Age for: \n"<< Person::get_name() << ": ";
	cin >> a;
	Age = a;
}
string Person::get_name() {
	return Name;
}
string Person::get_ID() {
	return ID;
}
int Person::get_age() {
	return Age;
}