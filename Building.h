/* Mahrad Hosseini – 2528388
I read and accept the submission rules and the extra rules specified in each
question. This is my own work that is done by myself only */

#include"Daily Rental Apartment.h"
#include"Monthly Rental Apartment.h"

class Building {
private:
	int NumofDApartments;
	int NumofMApartments;
	int BuildingID;
	char* Address;
	DailyRentalApartment* DApartments;
	MonthlyRentalApartment* MApartments;

public:
	//Constructors----
	Building();
	Building(int, int, int, char*, DailyRentalApartment*, MonthlyRentalApartment*);

	//Setters----
	void setAddress(char*);
	void setBuildingID(int);

	//Others----
	void newApartment();
	void printBuilding();
	void printRooms(int);
	void printSize(int);
	void printPrice(int, int);
	void printMorD(int);
	void calculateRent();
	void printAllApartments();

	//Destructors----
	~Building();
};