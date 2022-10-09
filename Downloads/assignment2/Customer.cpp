#include "Customer.h"
Customer::Customer() {
	MechanicID = "";
	opp.hours = 0;
	opp.mins = 0;
}
Customer::Customer(string mechid) {
	MechanicID = mechid;
}
Customer::Customer(string mechid, Appointment appointment) {
	MechanicID = mechid;
	opp.hours = appointment.hours;
	opp.mins = appointment.mins;
}
Customer::Customer(string name, string personalid, int age) {
	Name = name;
	ID = personalid;
	Age = age;
}
Customer::Customer(string name, string personalid, int age, string mechid)
{
	Name = name;
	ID = personalid;
	Age = age;
	MechanicID = mechid;
}
void Customer::set_mechanicID() {
	string newid;
	cout << "Enter Assigned mechanic ID: \n" << "for " << get_name() << endl;;
	cin >> newid;
	MechanicID = newid;
}
void Customer::set_mechanicID(string newid) {
	MechanicID = newid;
}
string Customer::get_mechanicID() {
	return MechanicID;
}
bool Customer::operator< (const Customer& obj) {
	if (opp.hours < obj.opp.hours || (opp.hours == obj.opp.hours && opp.mins < obj.opp.mins)) {
		return true;
	}
	else return false;
}
bool Customer::operator> (const Customer& obj){
	if (opp.hours > obj.opp.hours || (opp.hours == obj.opp.hours && opp.mins > obj.opp.mins)){
		return true;
	}
	else return false;
}
bool Customer::operator==(const Customer& obj) {
	if (opp.hours == obj.opp.hours && opp.mins == obj.opp.mins) {
		return true;
	}
	else return false;
}
void Customer::print() {
	cout << "\n Name: " << Customer::get_name() << "\n ID: " << Customer::get_ID() << "\n Age: " << Customer::get_age();
	cout << "\n Appointment time is:" <<Customer::get_appointment().hours << ":" << Customer::get_appointment().mins;
}
Person::Appointment Customer::get_appointment() {
	return opp;
}
void Customer::set_appointment(Person::Appointment ap) {
	if (ap.hours < 24 || ap.hours >= 0 || ap.mins < 60 || ap.mins >= 0){
	opp.hours = ap.hours;
	opp.mins = ap.mins;
}
	else cout << "incorrect time input\n";
}
void Customer::set_appointment() {
	Appointment ap;
	cout << "Enter appointment hour for " << Customer::get_name() << ": ";
	cin >> ap.hours;
	opp.hours = ap.hours;
	cout << "Enter appointment minutes for " << Customer::get_name() << ": ";
	cin >> ap.mins;
	opp.mins = ap.mins;

	while (!(ap.hours < 24 || ap.hours >= 0 || ap.mins < 60 || ap.mins >= 0))
		cout << "incorrect time input, enter again\n";	cout << "Enter appointment hour for " << Customer::get_name() << ": ";
	cin >> ap.hours;
	opp.hours = ap.hours;
	cout << "Enter appointment minutes for " << Customer::get_name() << ": ";
	cin >> ap.mins;
	opp.mins = ap.mins;
}