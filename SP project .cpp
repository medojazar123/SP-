#include <iostream>
#include <string>
#include <fstream>
using namespace std;
char Continue;
struct buses
{
	int BusNumber;
	int No_Of_Seats;
	int Available_No_Of_Seats;
	int No_Of_Trips;
	string TripsTime1;
	string TripsTime2;
	string TripsTime3;

	
}Bus[15];


struct persons
{
	string name;
	int Age;
	string PhoneNumber;
	string Email;
	int No_Of_Buses_They_Booked;
	int No_Of_Seats_They_Chose;



};

struct Tickets
{
	int ID;
	string Bus_Take_Of_Time;
	int BusNumber;
	string BusClass;
	string destination;
};


void Show_Available_buses();
void Check_The_Bus_Status();
void Check_Bus_Schedule();
void BookTickets();
void CancelReservatino();
void ShowTicketsInfo();
void Bus_Classes();
void ShowPrices();
void UsersInformation();
void PaymentMethods();
int main()
{
	int choice;
	/*
	
	string username = "admin";
	string password = "1234";
	bool correct = false;
	cout << "\t \t  Welcome to ** Bus Reservation system **  \n\n";
	do{
		cout << "Enter Username: ";
		cin >> username;
		cout << "\n";
		cout << "Enter password:  ";
		cin >> password;
		if (username == "admin" && password == "1234")
		{
			cout << "\n\t\t ** success...... ** \n \n";
			correct = true;
		}
		else
			cout << "\n \n \t \t Wrong username or password try again........ \n \n";

	} while (correct == false);
	*/
	do
	{
		cout << "\t\t***************************************** \n \n";
		cout << "\t\t| Wecome  to Bus Reservation System      |\n";
		cout << "\t\t|                                        |\n";
		cout << "\t\t-----------------------------------------\n\n\n";

		cout << "  1. Show Available buses \t  6. Show Tickets Info \n\n ";
		cout << " 2. Check The Bus Status \t  7. Bus Classes \n\n ";
		cout << " 3. Check Bus Schedule   \t  8. Show Prices \n\n ";
		cout << " 4. Book Tickets         \t  9. Users Information \n\n ";
		cout << " 5. Cancel Reservation   \t  10. Payment Options \n\n ";

		cout << "Please Enter number to do an operaion: ";
		cin >> choice;
		if (choice == 1)
			Show_Available_buses();
		cout << "Press Y to continue: ";
		cin >> Continue;
	} while (Continue == 'Y' || Continue == 'y');
	cout << "The programe is closeed \n";
	system("pause");

}
void Show_Available_buses()
{
	ifstream another_file("Buses.txt");
	buses temp[15];
	int i = 0;
	while (another_file.good())
	{
		another_file >> temp[i].BusNumber >> temp[i].No_Of_Seats >> temp[i].Available_No_Of_Seats >> temp[i].No_Of_Trips >> temp[i].TripsTime1 >> temp[i].TripsTime2 >> temp[i].TripsTime3;
		i++;
	}
	another_file.close();

	cout << "****************************************************************************** \n \n";
	cout << "Bus numbers | No of seats |  Available No of Seats | No of trips | Trips time \n\n----------------------------------------------------------------------------\n\n";
	for (int i = 0; i < 14; i++)
	{

		cout << temp[i].BusNumber << ' ' << temp[i].No_Of_Seats << ' ' << temp[i].Available_No_Of_Seats << ' ' << temp[i].No_Of_Trips << ' ' << temp[i].TripsTime1 << ' ' << temp[i].TripsTime2 << ' ' << temp[i].TripsTime3 << ' ' << "\n\n";

	}
};
