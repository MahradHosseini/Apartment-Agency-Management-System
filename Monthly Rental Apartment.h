/* Mahrad Hosseini – 2528388
I read and accept the submission rules and the extra rules specified in each
question. This is my own work that is done by myself only */

#include "Apartment.h"

class MonthlyRentalApartment : public Apartment {
private:
	bool HasFurniture;

public:
	//Constructors----
	MonthlyRentalApartment();
	MonthlyRentalApartment(bool, int, int, int, int);

	//Setters----
	void setFurnished(bool);
	//Others----
	void monthlyTotal(int);
	void printMonthly();
};