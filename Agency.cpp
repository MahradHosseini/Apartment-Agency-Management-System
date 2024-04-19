/* Mahrad Hosseini – 2528388
I read and accept the submission rules and the extra rules specified in each
question. This is my own work that is done by myself only */

#include"Agency.h"

//Constructors----
Agency::Agency() {
	NumofBuildings = 0;
	Name = new char[50];
	Buildings = new Building[10];
}

Agency::Agency(int Num, char* N, Building* B) {
	NumofBuildings = Num;
	Name = new char[50];
	strcpy(Name, N);

	Buildings = new Building[10];
	Buildings = B;
}

//Setters----
void Agency::setName(const char* N) {
	Name = new char[50];
	strcpy(Name, N);
}

//Others----
void Agency::newBuilding(char* Addr) {
	Buildings[NumofBuildings].setAddress(Addr);
	Buildings[NumofBuildings].setBuildingID(NumofBuildings);
	cout << "The building is created with the id number " << NumofBuildings << "." << endl;
	NumofBuildings++;
}

void Agency::newApartment() {
	int ID;
	cout << "Which building you want to add apartment into ? " << endl;

	Agency::printBuilding();

	cout << "Building ID: ";
	cin >> ID;
	Buildings[ID].newApartment();
}

void Agency::printBuilding() {
	cout << "Available Buildings:" << endl;
	for (int i = 0; i < NumofBuildings; i++) {
		Buildings[i].printBuilding();
	}
}

void Agency::printApartment() {
	for (int i = 0; i < NumofBuildings; i++) {
		cout << "In Building" << ":" << endl;
		Buildings[i].printBuilding();
		Buildings[i].printAllApartments();
	}
}

void Agency::printRoom(int N) {
	for (int i = 0; i < NumofBuildings; i++) {
		cout << "In Building " << i << ":" << endl;
		Buildings[i].printRooms(N);
	}
}

void Agency::printSize(int S) {
	for (int i = 0; i < NumofBuildings; i++) {
		cout << "In Building " << i << ":" << endl;
		Buildings[i].printSize(S);
	}
}

void Agency::printPrice(int P, int D) {
	for (int i = 0; i < NumofBuildings; i++) {
		cout << "In Building " << i << ":" << endl;
		Buildings[i].printPrice(P,D);
	}
}

void Agency::printMorD(int Select) {
	for (int i = 0; i < NumofBuildings; i++) {
		cout << "In Building " << i << ":" << endl;
		Buildings[i].printMorD(Select);
	}
}

void Agency::calculateRent() {
	Agency::printBuilding();

	int SelectBuilding;
	cout << "Select Building: ";
	cin >> SelectBuilding;

	Buildings[SelectBuilding].calculateRent();
}

//Destructors----
Agency::~Agency() {
	delete[] Name;
	delete[] Buildings;
}