#include "Mechanic.h"

Mechanic::Mechanic(string name, string id, int age) {
	Name = name;
	ID = id;
	Age = age;
	Book.resize(100);
}
bool Mechanic::isAvailable(Appointment target) {
	for (int i = 0; i < counter; i++) {

		if ((this->get_Appointment_mec(i).hours != target.hours) && (this->get_Appointment_mec(i).mins != target.mins)) {
			cout << "Mechanic "<< Person::get_name()<<" is Available ! \n";
			return true;
		}
		
	}
	return false;
}
void Mechanic::set_Book(Appointment mechbook) {
	for (int i = 0; i < counter; i++) {
		Appointment temp;
		temp.hours = mechbook.hours;
		temp.mins = mechbook.mins;
		Book[i] = temp;
		
	}
	counter++;
}
vector <Person::Appointment> Mechanic::get_Book() {
	vector <Person::Appointment> booking_copy = Book;
	return booking_copy;
}
int Mechanic::get_counter(){
	return counter;
}
Person::Appointment Mechanic::get_Appointment_mec(int i) {
	return Book[i]; 
}
void Mechanic::print() {
	cout << "\n Name: " << Mechanic::get_name() << "\n ID: " << Mechanic::get_ID() << "\n Age: " << Mechanic::get_age();
}
