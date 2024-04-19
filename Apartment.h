/* Mahrad Hosseini – 2528388
I read and accept the submission rules and the extra rules specified in each
question. This is my own work that is done by myself only */
#ifndef APARTMENT_H
#define APARTMENT_H
#include<iostream>
#include<string.h>

using std::cout;
using std::cin;
using std::endl;

class Apartment {
private:
	int ApartmentID;
	int NumberofRooms;
	int Price;
	int Size;

public:
	//Constructors----
	Apartment();
	Apartment(int, int, int, int);

	//Setters----
	void setApartmentID(int);
	void setNumberofRooms(int);
	void setPrice(int);
	void setSize(int);


	//Getters----
	int getPrice();
	int getRoom();
	int getSize();
	int getID();

	//Others----
	void printApartment();

	//Destructors----
	~Apartment();
};

#endif