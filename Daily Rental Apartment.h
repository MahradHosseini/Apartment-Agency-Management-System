/* Mahrad Hosseini – 2528388
I read and accept the submission rules and the extra rules specified in each
question. This is my own work that is done by myself only */

#include "Apartment.h"
enum class ApartType { Default = 0, Minimalist, Modern, Classic };

class DailyRentalApartment : public Apartment {
private:
	ApartType DecorationStyle;
public:
	//Constructors----
	DailyRentalApartment();
	DailyRentalApartment(ApartType, int, int, int, int);

	//Setters----
	void setDecStyle(ApartType);

	//Others----
	void dailyTotal(int);
	void printDaily();
};