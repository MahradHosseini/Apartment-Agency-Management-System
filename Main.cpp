/* Mahrad Hosseini – 2528388
I read and accept the submission rules and the extra rules specified in each
question. This is my own work that is done by myself only */

#include"Agency.h"

int main() {

	Agency A1;
	A1.setName("Manchester Comfort Apartments");

	cout << "!!! Welcome to Agency Management System!!!" << endl;
	cout << "---------------------------------------------" << endl;
	cout << "Please select and operation" << endl;
	cout << "1. Add a new building to the agency" << endl;
	cout << "2. Add a new apartment (monthly or daily rental) to a building" << endl;
	cout << "3. List all buildings" << endl;
	cout << "4. List all apartments available for the agency" << endl;
	cout << "5. List all apartments that have the specified number of rooms" << endl;
	cout << "6. List all apartments which are bigger than the specified apartment size" << endl;
	cout << "7. List all apartments which are cheaper than the specified price in a specified number of days" << endl;
	cout << "8. List all apartments that are either daily or monthly rental" << endl;
	cout << "9. Calculate the price of a specific apartment in a specified number of days" << endl;
	cout << "0. Exit" << endl;

	int Select = 100;
	while (Select != 0) {
		cout << "---------------------------------------------" << endl;
		cout << "Your selection: " << endl;
		cin >> Select;

		switch (Select) {
		case 0: {
			cout << "Thanks for choosing Agency Management System!" << endl;
		}
			break;
		case 1: {
			char* Addr = new char[200];
			cout << "What is the address of your building: ";

			cin.ignore();
			cin.getline(Addr,200);
			
			A1.newBuilding(Addr); 
		}
			break;
		case 2: {
			A1.newApartment();
		}
			  break;
		case 3: {
			A1.printBuilding();
		}
			  break;
		case 4: {
			A1.printApartment();
		}
			  break;
		case 5: {
			cout << "Enter the specified room number: ";
			int Number;
			cin >> Number;
			A1.printRoom(Number);
		}
			  break;
		case 6: {
			cout << "Enter minimum size: ";
			int Size;
			cin >> Size;
			A1.printSize(Size);
		}
			  break;
		case 7: {
			cout << "Enter the price (GBP): ";
			int Price;
			cin >> Price;

			cout << "Enter the days: ";
			int Days;
			cin >> Days;
			A1.printPrice(Price,Days);
		}
			  break;
		case 8: {
			cout << "Enter Daily/Monthly Rental (0/1): ";
			int MorD;
			cin >> MorD;
			A1.printMorD(MorD);
		}
			  break;
		case 9: {
			A1.calculateRent();
		}
			  break;
		}
	}
	
	return 0;
}