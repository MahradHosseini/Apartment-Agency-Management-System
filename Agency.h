/* Mahrad Hosseini – 2528388
I read and accept the submission rules and the extra rules specified in each
question. This is my own work that is done by myself only */

#include"Building.h"

class Agency {
private:
	int NumofBuildings;
	char* Name;
	Building* Buildings;

public:
	//Constructors----
	Agency();
	Agency(int, char*, Building*);

	//Setters----
	void setName(const char*);

	//Others----
	void newBuilding(char*);
	void newApartment();
	void printBuilding();
	void printApartment();
	void printRoom(int);
	void printSize(int);
	void printPrice(int,int);
	void printMorD(int);
	void calculateRent();

	//Destructors---
	~Agency();
};