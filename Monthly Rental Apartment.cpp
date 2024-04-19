/* Mahrad Hosseini – 2528388
I read and accept the submission rules and the extra rules specified in each
question. This is my own work that is done by myself only */

#include"Monthly Rental Apartment.h"

//Constructors----
MonthlyRentalApartment::MonthlyRentalApartment() :Apartment::Apartment() {
	HasFurniture = 0;
}

MonthlyRentalApartment::MonthlyRentalApartment(bool F, int AID, int NoR, int P, int S) : Apartment::Apartment(AID, NoR, P, S) {
	HasFurniture = F;
}

//Setters----
void MonthlyRentalApartment::setFurnished(bool Furnished) {
	HasFurniture = Furnished;
}
//Others----
void MonthlyRentalApartment::monthlyTotal(int Days) {
	cout << "The rent for your stay is " << ((Apartment::getPrice()) / 30) * Days << " GBP!" << endl;
}

void MonthlyRentalApartment::printMonthly() {
	char* ans = new char[5];

	if (HasFurniture) {
		strcpy(ans, "Yes");
	}
	else {
		strcpy(ans, "No");
	}

	Apartment::printApartment();
	cout << "Furnished: " << ans << endl;

	delete[] ans;
}