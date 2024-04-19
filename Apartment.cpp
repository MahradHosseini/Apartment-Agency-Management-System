/* Mahrad Hosseini – 2528388
I read and accept the submission rules and the extra rules specified in each
question. This is my own work that is done by myself only */

#include"Apartment.h"

//Constructors----
Apartment::Apartment() {
	ApartmentID = 0;
	NumberofRooms = 0;
	Price = 0;
	Size = 0;
}

Apartment::Apartment(int AID, int NoR, int P, int S) {
	ApartmentID = AID;
	NumberofRooms = NoR;
	Price = P;
	Size = S;
}

//Setters----
void Apartment::setNumberofRooms(int N) {
	NumberofRooms = N;
}

void Apartment::setPrice(int P) {
	Price = P;
}

void Apartment::setSize(int S) {
	Size = S;
}

void Apartment::setApartmentID(int AID) {
	ApartmentID = AID;
}

//Getters----
int Apartment::getPrice() {
	return Price;
}

int Apartment::getRoom() {
	return NumberofRooms;
}

int Apartment::getSize() {
	return Size;
}

int Apartment::getID() {
	return ApartmentID;
}

//Others----
void Apartment::printApartment() {
	cout << "Room No:" << ApartmentID << ", " << "Number of Rooms:" << NumberofRooms << ", " << "Rent: " << Price << ",\n" << "Size: " << Size << ", ";
}

//Destructors----
Apartment::~Apartment() {

}
