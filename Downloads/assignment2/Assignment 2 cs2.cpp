#include "Customer.h"
#include "Mechanic.h"
#include "Person.h"
#include <iostream>
#include "Queue.h"
using namespace std;
int main()
{
	int const s = 10;
	Customer temp;
	Mechanic M1("Kholy", "90021569", 40), M2("Maryam", "90042032", 23);
	Customer C1("Omar", "ABC123", 20, "90021569"), C2("George", "DEF456", 21), C3("Marwa", "GHI789", 30, "90021312"), C4, C5;
	Customer customerarr[s] = { C1, C2, C3, C4, C5 };
	C1.set_appointment({ 10,30 });
	C2.set_appointment({ 6, 15 });
	C2.set_mechanicID("1024124");
	C3.set_appointment({ 9, 45 });
	C4.set_Name("Alaa");
	C4.set_age(45);
	C4.set_id("WOW404");
	C4.set_mechanicID(M1.get_ID());
	C4.set_appointment({ 11, 15 });
	//
	queue <Customer> cq;
	for (int i = 0; i < s - 1; i++) {
		for (int j = 0;j < s - i - 1;j++)
		{
			if (customerarr[j] > customerarr[j + 1])
			{
				temp = customerarr[j];
				customerarr[j] = customerarr[j + 1];
				customerarr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < s; i++) {
		cq.push(customerarr[i]);
	}	
	for (int i = 0;i < cq.size(); i++) {
		if (M1.isAvailable(customerarr[i].get_appointment())) {
			M1.set_Book(customerarr[i].get_appointment());
		}
		else if (M2.isAvailable(customerarr[i].get_appointment())) {
			M2.set_Book(customerarr[i].get_appointment());
		}
	}
	for (int i = 0; i < cq.size(); i++) {
		cq.show(i).print();
		cq.pop();
	}
}