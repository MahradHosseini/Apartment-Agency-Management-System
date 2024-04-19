/* Mahrad Hosseini – 2528388
I read and accept the submission rules and the extra rules specified in each
question. This is my own work that is done by myself only */

#include"Daily Rental Apartment.h"

//Constructors----
DailyRentalApartment::DailyRentalApartment() :Apartment::Apartment() {
	ApartType DecorationStyle = ApartType::Default;
}

DailyRentalApartment::DailyRentalApartment(ApartType AT, int AID, int NoR, int P, int S) : Apartment::Apartment(AID, NoR, P, S) {
	DecorationStyle = AT;
}

//Setters----
void DailyRentalApartment::setDecStyle(ApartType Type) {
	DecorationStyle = Type;
}

//Others----
void DailyRentalApartment::dailyTotal(int Days) {
	cout << "The rent for your stay is " << (Days * Apartment::getPrice()) << " GBP!" << endl;
}

void DailyRentalApartment::printDaily() {
	Apartment::printApartment();
	char* DecStyle = new char[15];

	switch (DecorationStyle) {
	case ApartType::Minimalist:
		strcpy(DecStyle, "Minimalist");
		break;
	case ApartType::Modern:
		strcpy(DecStyle, "Modern");
		break;
	case ApartType::Classic:
		strcpy(DecStyle, "Classic");
		break;
	}
	cout << "Decoration Style: "<< DecStyle << endl;

	delete[] DecStyle;
}