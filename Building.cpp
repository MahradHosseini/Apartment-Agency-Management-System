/* Mahrad Hosseini – 2528388
I read and accept the submission rules and the extra rules specified in each
question. This is my own work that is done by myself only */

#include"Building.h"

//Constructors----
Building::Building() {
	NumofDApartments = 0;
	NumofMApartments = 0;
	BuildingID = 0;
	Address = new char[200];
	DApartments = new DailyRentalApartment[10];
	MApartments = new MonthlyRentalApartment[10];
}

Building::Building(int ND, int NM, int ID, char* Addr, DailyRentalApartment* D, MonthlyRentalApartment* M) {
	NumofDApartments = ND;
	NumofMApartments = NM;
	BuildingID = ID;
	Address = new char[200];
	strcpy(Address, Addr);
	DApartments = new DailyRentalApartment[10];
	DApartments = D;
	MApartments = new MonthlyRentalApartment[10];
	MApartments = M;
}

//Setters----
void Building::setAddress(char* Addr) {
	strcpy(Address, Addr);
}

void Building::setBuildingID(int ID) {
	BuildingID = ID;
}

//Others----
void Building::newApartment() {
	cout << "What is the type of the apartment?" << endl;
	cout << "1. Daily Rental Apartmnet" << endl;
	cout << "2. Monthly Rental Apartment" << endl;
	
	int Type;
	cout << "\nType: ";
	cin >> Type;

	int RoomNumber;
	cout << "Enter room number: ";
	cin >> RoomNumber;

	int NumberofRooms;
	cout << "Enter number of rooms: ";
	cin >> NumberofRooms;

	int Rent;
	cout << "Enter rent (GBP): ";
	cin >> Rent;

	int Size;
	cout << "Enter size (m2): ";
	cin >> Size;

	switch (Type) {
	case 1:
		int DecStyle;
		cout << "Decoration Style:\n1. Minimalist\n2. Modern\n3. Classic" << endl;
		cout << "Your selection: ";
		cin >> DecStyle;

		DApartments[NumofDApartments].setApartmentID(RoomNumber);
		DApartments[NumofDApartments].setNumberofRooms(NumberofRooms);
		DApartments[NumofDApartments].setPrice(Rent);
		DApartments[NumofDApartments].setSize(Size);

		switch (DecStyle) {
		case 1:
			DApartments[NumofDApartments].setDecStyle(ApartType::Minimalist);
			break;
		case 2:
			DApartments[NumofDApartments].setDecStyle(ApartType::Modern);
			break;
		case 3:
			DApartments[NumofDApartments].setDecStyle(ApartType::Classic);
			break;
		}
		NumofDApartments++;
		break;

	case 2:
		int Furnished;
		cout << "Furnished (Yes(1) / No (0)): ";
		cin >> Furnished;

		MApartments[NumofMApartments].setApartmentID(RoomNumber);
		MApartments[NumofMApartments].setNumberofRooms(NumberofRooms);
		MApartments[NumofMApartments].setPrice(Rent);
		MApartments[NumofMApartments].setSize(Size);

		switch (Furnished) {
		case 1:
			MApartments[NumofMApartments].setFurnished(true);
			break;
		case 0:
			MApartments[NumofMApartments].setFurnished(false);
			break;
		}
		NumofMApartments++;
		break;
	}
	cout << "Apartment successfully added!" << endl;
}

void Building::printBuilding() {
	cout << "ID: " << BuildingID << ", Address: " << Address << endl;
}

void Building::printRooms(int N) {
	cout << "Daily Rental Apartments:" << endl;
	int FoundD = 0;
		for (int i = 0; i < NumofDApartments; i++) {
			if (DApartments[i].getRoom() == N) {
				DApartments[i].printDaily();
				FoundD = 1;
			}
		}
		if (FoundD == 0) {
			cout << "Not Found" << endl;
		}
	

	cout << "Monthly Rental Apartments:" << endl;
	int FoundM = 0;
		for (int i = 0; i < NumofMApartments; i++) {
			if (MApartments[i].getRoom() == N) {
				MApartments[i].printMonthly();
				FoundM = 1;
			}
		}
		if (FoundM == 0) {
			cout << "Not Found" << endl;
		}
}

void Building::printSize(int S) {
	cout << "Daily Rental Apartments:" << endl;
	int FoundD = 0;
	for (int i = 0; i < NumofDApartments; i++) {
		if (DApartments[i].getSize() >= S) {
			DApartments[i].printDaily();
			FoundD = 1;
		}
	}
	if (FoundD == 0) {
		cout << "Not Found" << endl;
	}


	cout << "Monthly Rental Apartments:" << endl;
	int FoundM = 0;
	for (int i = 0; i < NumofMApartments; i++) {
		if (MApartments[i].getSize() >= S) {
			MApartments[i].printMonthly();
			FoundM = 1;
		}
	}
	if (FoundM == 0) {
		cout << "Not Found" << endl;
	}
}

void Building::printPrice(int P, int D) {
	int PriceForOneDay = P/D;
	int PriceForOneMonth = PriceForOneDay * 30;

	cout << "Daily Rental Apartments:" << endl;
	int FoundD = 0;
	for (int i = 0; i < NumofDApartments; i++) {
		if (DApartments[i].getPrice() <= PriceForOneDay) {
			DApartments[i].printDaily();
			FoundD = 1;
		}
	}
	if (FoundD == 0) {
		cout << "Not Found" << endl;
	}


	cout << "Monthly Rental Apartments:" << endl;
	int FoundM = 0;
	for (int i = 0; i < NumofMApartments; i++) {
		if (MApartments[i].getPrice() <= PriceForOneMonth) {
			MApartments[i].printMonthly();
			FoundM = 1;
		}
	}
	if (FoundM == 0) {
		cout << "Not Found" << endl;
	}
}

void Building::printMorD(int Select) {
	switch (Select) {
	case 0:
		if (NumofDApartments == 0) {
			cout << "Not Found" << endl;
		}
		else {
			for (int i = 0; i < NumofDApartments; i++) {
				DApartments[i].printDaily();
			}
		}
		break;

	case 1:
		if (NumofMApartments == 0) {
			cout << "Not Found" << endl;
		}
		else {
			for (int i = 0; i < NumofMApartments; i++) {
				MApartments[i].printMonthly();
			}
		}
		break;
	}
}

void Building::calculateRent() {
	Building::printMorD(0);
	Building::printMorD(1);

	int RoomNumber;
	cout << "Enter Room No: ";
	cin >> RoomNumber;

	int NumberofDays;
	cout << "Enter Numebr of Days: ";
	cin >> NumberofDays;

	for (int i = 0; i < NumofDApartments; i++) {
		if (DApartments[i].getID() == RoomNumber) {
			DApartments[i].dailyTotal(NumberofDays);
		}
	}

	for (int i = 0; i < NumofMApartments; i++) {
		if (MApartments[i].getID() == RoomNumber) {
			MApartments[i].monthlyTotal(NumberofDays);
		}
	}
}

void Building::printAllApartments() {

	cout << "Daily Rental Apartments:" << endl;
	for (int i = 0; i < NumofDApartments; i++) {
		DApartments[i].printDaily();
	}

	cout << "Monthly Rental Apartments:" << endl;
	for (int i = 0; i < NumofMApartments; i++) {
		MApartments[i].printMonthly();
	}
}

//Destructors----
Building::~Building() {
	delete[] Address;
	delete[] DApartments;
	delete[] MApartments;
}