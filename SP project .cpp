#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int sml = 1;
char ch = sml;
int mx_buses = 0;
int mx_persons = 0;
int mx_users = 0;
int mx_tickets = 0;
int Mx_Tickets = 0;

string destinations[] = { "FromCairotoSharmelSheikh", "From:Cairo..to:Hurghada", "From:Cairo..to:Alexandria", "From:Cairo..to:MarsaMatrouh", "From:Cairo..to:North_Coast", "From:Cairo..to:Dahab", "From:Cairo..to:Fayoum" };
struct buses
{
	int BusNumber;
	int No_Of_Seats;
	int Available_No_Of_Seats;
	int No_Of_Trips;
	string TripsTime1[3];



}temp[35];


struct persons
{
	string name;
	int Age;
	int PhoneNumber;
	string Email;
	int No_Of_Buses_They_Booked;
	int No_Of_Seats_They_Chose;



}Users[50];



struct Tickets
{
	int ID;
	string Bus_Take_Of_Time;
	string Date_Of_Travelling;
	int BusNumber;
	char BusClass;
	string destination;
	string Price;
}ticket[50];

struct drivers
{
	int ID;
	float rate;
	
}driver[10];


void file_in();
void file_out();
void open();
void display();
void Show_Available_buses();
void ShowPrices();
void PaymentMethods();
void BookTickets();
void ShowTicketsInfo();
void Bus_Classes();
void driver_info();
void UsersInformation();
void CancelReservatin();



int main()
{
	file_in();
	open();
	file_out();

	/*
	string username = "admin";
	string password = "1234";
	bool correct = false;
	cout << "\t \t  Welcome to * Bus Reservation system *  \n\n";
	do{
	cout << "Enter Username: ";
	cin >> username;
	cout << "\n";
	cout << "Enter password:  ";
	cin >> password;
	if (username == "admin" && password == "1234")
	{
	cout << "\n\t\t * success...... * \n \n";
	correct = true;
	}
	else
	cout << "\n \n \t \t Wrong username or password try again........ \n \n";
	} while (correct == false);
	*/



}

void display()
{
	cout << "\t\t*************** \n \n";
	cout << "\t\t| Wecome  to Bus Reservation System      |\n";
	cout << "\t\t|                                        |\n";
	cout << "\t\t-----------------------------------------\n\n\n";

	cout << "  1. Show Available buses \t  5. Show Tickets Info \n\n ";
	cout << " 2. Show Prices          \t  6. Bus Classes \n\n ";
	cout << " 3. Payment Options      \t  7. Users Information \n\n ";
	cout << " 4. Book Tickets         \t  8. Cancel Reservation \n\n ";
	cout << " 9. Exit \n\n ";
}

void Show_Available_buses()
{
	system("cls");
	cout << "************************** \n \n";
	cout << "Bus numbers | No of seats |  Available No of Seats | No of trips | Trips time \n\n----------------------------------------------------------------------------\n\n";
	for (int i = 0; i < 10; i++)
	{
		cout << temp[i].BusNumber << ' ' << temp[i].No_Of_Seats << ' ' << temp[i].Available_No_Of_Seats << ' ' << temp[i].No_Of_Trips << ' ';
		for (int j = 0; j < 3; j++)
			cout << temp[i].TripsTime1[j] << ' ';

		cout << "\n\n";


	}
}

void PaymentMethods()
{
	system("cls");
	int choice;
	cout << " \t\t\t\t\tPayment Methods " << endl;
	cout << "1. By Visa" << endl;
	cout << "2. Cash" << endl;
	cout << "3. Vodafone cash" << endl;
	cout << "4. Etisalat cash" << endl;
	cout << "5. Paypal" << endl << endl;
	cout << "6. Exit" << endl;


	bool done = false; //for ask user completing
	do {
		cout << "Enter your choice :  " << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:

			break;
		case 2:

			break;

		case 3:

			break;

		case 4:

			break;
		case 5:
			break;
		case 6:
			open();
			break;


		default:
			cout << "invalid option :) please try again ....... \n";
			done = true;
			continue;

		}
	} while (done);



}


void open()
{
	int choice;
	char Continue;

	do {


		system("cls");
		display();

		bool boo;
		string c;
		do
		{
			boo = true;
			cout << "Enter your choice : ";
			cin >> c;

			for (int i = 0; i < c.length(); i++)
			{
				if (!isdigit(c[i]))
				{
					boo = false;
					cout << "Wrong input " << endl;
					break;
				}
			}
		} while (!boo);
		choice = stoi(c);




		if (choice >= 10 && choice < 1)
		{
			cout << "\t invalid option :) please try again ......." << endl;
			system("cls");
		}

		switch (choice)
		{
		case 1:
			Show_Available_buses();
			break;
		case 2:
			ShowPrices();
			break;
		case 3:
			PaymentMethods();
			break;
		case 4:
			BookTickets();
			break;
		case 5:
			ShowTicketsInfo();
			break;
		case 6:
			Bus_Classes();
			break;
		case 7:

			break;
		case 8:
			CancelReservatin();
			break;
		case 9:
			break;
		case 10:
			break;



		default:
			cout << "\t invalid option " << ch << " please try again ......." << endl;
			Continue = 'y';

			continue;
		}
		cout << "   you want do another(n/y)?  :";

		cin >> Continue;

	} while (Continue == 'y');

}

void ShowPrices()
{
	system("cls");
	int destination;
	int Bus_Class;
	cout << "1.From Cairo to Sharm el_Sheikh\t Class A --> 400L.E    Class B --> 300L.E\n\n";
	cout << "2.From Cairo to Hurghada       \t Class A --> 350L.E    Class B --> 280L.E \n\n";
	cout << "3.From Cairo to Alexandria     \t Class A --> 200L.E    Class B --> 150L.E \n\n";
	cout << "4.From Cairo to Marsa Matrouh  \t Class A --> 300L.E    Class B --> 250L.E \n\n";
	cout << "5.From Cairo to North_Coast    \t Class A --> 450L.E    Class B --> 400L.E \n\n";
	cout << "6.From Cairo to Dahab          \t Class A --> 500L.E    Class B --> 400L.E \n\n";
	cout << "7.From Cairo to Fayoum         \t Class A --> 200L.E    Class B --> 180L.E \n\n";

}
void BookTickets()
{
	int Bus_Number, triptime, Destination, No_Of_Tickets, age, phonenumber;
	char Class;
	string date, name, Email;
	int i = 0;
	char again;

	do {
		cout << "choosing Bus: \n\n";
		Show_Available_buses();
		cout << "Enter bus number : ";
		cin >> Bus_Number;
		cout << "Enter number (from 1 to 3) to choose trip time : ";
		cin >> triptime;
		cout << "Please enter the number of tickets you want to book: ";
		cin >> No_Of_Tickets;
		temp[Bus_Number - 1].Available_No_Of_Seats -= No_Of_Tickets;
		cout << "Enter the data of travelling (d/m/y): ";
		cin >> date;
		ShowPrices();
		cout << "\n\n";
		cout << "Enter number to choose destination : ";
		cin >> Destination;
		cout << "Class A Or B ? ";
		cin >> Class;
		system("cls");
		cout << "\t\t ** User informtaion **** \n\n";
		cout << "Please Enter your name: ";
		cin >> Users[i].name;
		cout << "Enter age: ";
		cin >> Users[i].Age;
		cout << "Enter phone number: ";
		cin >> Users[i].PhoneNumber;
		cout << "Enter your Email address: ";
		cin >> Users[i].Email;
		cout << "\n\n";
		Users[i].No_Of_Buses_They_Booked = 0;
		Users[i].No_Of_Seats_They_Chose = 0;
		Users[i].No_Of_Seats_They_Chose += No_Of_Tickets;
		Users[i].No_Of_Buses_They_Booked += 1;
		cout << "Booking succeded \n\n";
		cout << "\t\t*************** \n \n";
		cout << "\t\t| Thank you for choosing our services" << ch << "\t|\n";
		cout << "\t\t|                                        |\n";
		cout << "\t\t-----------------------------------------\n\n\n";
		int T;
		for (T = 0; T < No_Of_Tickets; T++)
		{
			ticket[T].ID = temp[Bus_Number].Available_No_Of_Seats + 1 + T;
			ticket[T].Bus_Take_Of_Time = temp[Bus_Number - 1].TripsTime1[triptime - 1];
			ticket[T].Date_Of_Travelling = date;
			ticket[T].BusNumber = Bus_Number;
			ticket[T].BusClass = Class;
			ticket[T].destination = destinations[Destination - 1];
			if (Destination == 1 && Class == 'A')
				ticket[T].Price = "400L.E";
			else if (Destination == 1 && Class == 'B')
				ticket[T].Price = "300L.E";
			else if (Destination == 2 && Class == 'A')
				ticket[T].Price = "350L.E";
			else if (Destination == 2 && Class == 'B')
				ticket[T].Price = "200L.E";
			else if (Destination == 3 && Class == 'A')
				ticket[T].Price = "200L.E";
			else if (Destination == 3 && Class == 'B')
				ticket[T].Price = "150L.E";
			else if (Destination == 4 && Class == 'A')
				ticket[T].Price = "300L.E";
			else if (Destination == 4 && Class == 'B')
				ticket[T].Price = "250L.E";
			else if (Destination == 5 && Class == 'A')
				ticket[T].Price = "450L.E";
			else if (Destination == 5 && Class == 'B')
				ticket[T].Price = "400L.E";
			else if (Destination == 6 && Class == 'A')
				ticket[T].Price = "500L.E";
			else if (Destination == 6 && Class == 'B')
				ticket[T].Price = "400L.E";
			else if (Destination == 7 && Class == 'A')
				ticket[T].Price = "200L.E";
			else if (Destination == 7 && Class == 'B')
				ticket[T].Price = "180L.E";

		}
		mx_tickets = T;
		cout << "Do you want to book again ? (y/n) ";
		cin >> again;
		cout << "\n";
		if (again == 'Y' || again == 'y')
			i++;
		mx_users = i;
	} while (again == 'y' || again == 'Y');

}
void ShowTicketsInfo()
{
	system("cls");
	bool foundd = false;
	string namme;
	string emaiil;
	int phonee;

	do
	{
		cout << "\t\t*************\n";
		cout << "\t\t|\tTicket infromations\t   |\n";
		cout << "\t\t|____________|\n\n";



		cout << "Enter your name: ";
		cin >> namme;
		cout << "Enter your Email: ";
		cin >> emaiil;
		cout << "Enter your phone number: ";
		cin >> phonee;
		int i, founded_t;
		for (i = 0; i < Mx_Tickets; i++)
		{
			if (Users[i].name == namme || Users[i].Email == emaiil || Users[i].PhoneNumber == phonee)
				foundd = true;
			founded_t = i;
			break;
		}
		if (foundd)
		{
			cout << "\n\n***************************\n\n";
			cout << "ID: " << ticket[founded_t].ID << "\t\t" << "Bus Take of time: " << ticket[founded_t].Bus_Take_Of_Time << "\n\n" << "Date of travelling: " << ticket[founded_t].Date_Of_Travelling << "\t\t" << "Bus number: " << ticket[founded_t].BusNumber << "\t\t" << "Bus class: " << ticket[founded_t].BusClass << "\n\n" << "Your destination: " << ticket[founded_t].destination << "\t\t" << "Price: " << ticket[founded_t].Price << "\n\n";
			cout << "\n\n***************************\n\n";
		}
		else
			cout << "Invalid date try again..........\n\n";

	} while (foundd == false);

}

void Bus_Classes()
{
	system("cls");
	char ch, more, info_driver;
	cout << "We have 2 classes ( A , B ) \n";

	do {
		cout << " Please enter the class you want information about : ";
		cin >> ch;
		switch (ch)
		{
		case 'a':
		case 'A':
			cout << " A class : \n" << "1. air conditioner \n" << "2. one trip ( Less time to reach )\n" << "3. The latest vehicle releases\n"
				<< "4. super comfortable\n"<< "5. High technology \n" << "6. best drivers --> ";
			cout << "do you want information about drivers ( y , n ) : ";
			cin >> info_driver;
			if (info_driver == 'y' || info_driver == 'Y')
			{
				driver_info();
			}
			break;
		case 'b':
		case 'B':
			cout << " B class : \n" << " 1. cheap \n" << " 2. many stations \n" << " 3. Equipped for long trips \n";
			break;
		}
		cout << " do you want another class \n (y , n ) ? : ";
		cin >> more;
	} while (more == 'y' || more == 'Y');

}

void driver_info()
{
	drivers driver[9];
	driver[0].ID = 202010;
	driver[1].ID = 202011;
	driver[2].ID = 202012;
	driver[3].ID = 202013;
	driver[4].ID = 202014;
	driver[5].ID = 202015;
	driver[6].ID = 202016;
	driver[7].ID = 202017;
	driver[8].ID = 202018;

	driver[0].rate = 5;
	driver[1].rate = 5;
	driver[2].rate = 4.9;
	driver[3].rate = 4.9;
	driver[4].rate = 4.9;
	driver[5].rate = 4.7;
	driver[6].rate = 4.6;
	driver[7].rate = 4.5;
	driver[8].rate = 4.5;

	for (int i = 0; i < 9; i++)
	{
		cout << "driver " << i + 1 << " ->  ID : " << driver[i].ID
			<< "  rate : " << driver[i].rate << endl;
	}
}


void UsersInformation()
{

}
void CancelReservatin()
{
	system("cls");
	int buSNumber, NoOfTickets, Phone;
	string Name, email;
	int i = 0;
	bool found = false;
	do
	{
		Show_Available_buses();
		cout << "Enter bus number that you want to cancel it's reseravtion: ";
		cin >> buSNumber;
		cout << "Enter the number of tickets you want to cancel: ";
		cin >> NoOfTickets;
		cout << "Enter your name: ";
		cin >> Name;
		cout << "Enter your phone number: ";
		cin >> Phone;
		cout << "Enter your email address: ";
		cin >> email;

		if (Name == Users[i].name && Phone == Users[i].PhoneNumber && email == Users[i].Email)
		{
			found = true;
			temp[i].Available_No_Of_Seats += NoOfTickets;
			Users[i].No_Of_Seats_They_Chose -= NoOfTickets;
			if (Users[i].No_Of_Seats_They_Chose == 0)
				Users[i].No_Of_Buses_They_Booked = 0;
			cout << "\n\t\tReservation has been canceled successfully.......... \n\n";


		}
		else
			cout << "Invalid data please try again..... \n";
		i++;
	} while (found == false);


}

void file_in()
{

	ifstream another_file("Buses.txt");
	int i = 0;
	while (another_file.good())
	{
		another_file >> temp[i].BusNumber >> temp[i].No_Of_Seats >> temp[i].Available_No_Of_Seats >> temp[i].No_Of_Trips;
		for (int j = 0; j < 3; j++)
			another_file >> temp[i].TripsTime1[j];
		i++;
	}
	mx_buses = i;
	another_file.close();

	ifstream persons_file("Persons.txt");
	int j = 0;
	while (persons_file.good())
	{
		persons_file >> Users[j].name >> Users[j].Age >> Users[j].PhoneNumber >> Users[j].Email >> Users[j].No_Of_Buses_They_Booked >> Users[j].No_Of_Seats_They_Chose;
		i++;
	}
	mx_persons = j;
	persons_file.close();

	ifstream Tickets_file("Tickets.txt");
	int h = 0;
	while (Tickets_file.good())
	{
		Tickets_file >> ticket[h].ID >> ticket[h].Bus_Take_Of_Time >> ticket[h].Date_Of_Travelling >> ticket[h].BusNumber >> ticket[h].BusClass >> ticket[h].destination >> ticket[h].Price;
		h++;
	}
	Mx_Tickets = h;

	Tickets_file.close();
}

void file_out()
{
	ofstream another_file("Buses.txt");
	if (another_file.is_open())
	{
		for (int i = 0; i < mx_buses + 1; i++)
		{
			if (temp[i].Available_No_Of_Seats == 0)
				continue;

			another_file << temp[i].BusNumber << ' ' << temp[i].No_Of_Seats << ' ' << temp[i].Available_No_Of_Seats << ' ' << temp[i].No_Of_Trips << ' ';
			for (int j = 0; j < 3; j++)
				another_file << temp[i].TripsTime1[j] << ' ';

			another_file << "\n";


		}
	}
	another_file.close();

	ofstream Persons_file("Persons.txt", ios::app);
	if (Persons_file.is_open())
	{
		for (int j = 0; j < mx_users + 1; j++)
		{
			Persons_file << "\n" << Users[j].name << ' ' << Users[j].Age << ' ' << Users[j].PhoneNumber << ' ' << Users[j].Email << ' ' << Users[j].No_Of_Buses_They_Booked << ' ' << Users[j].No_Of_Seats_They_Chose;
		}
	}
	Persons_file.close();

	ofstream Tickets_file("Tickets.txt", ios::app);

	if (Tickets_file.is_open())
	{

		for (int h = 0; h < mx_tickets; h++)
		{

			Tickets_file << "\n" << ticket[h].ID << ' ' << ticket[h].Bus_Take_Of_Time << ' ' << ticket[h].Date_Of_Travelling << ' ' << ticket[h].BusNumber << ' ' << ticket[h].BusClass << ' ' << ticket[h].destination << ' ' << ticket[h].Price;
		}
	}

	Tickets_file.close();

}
