#ifndef Cinema_h
#define Cinema_h
//----------------------------------------//

#include<iostream>
#include<conio.h>
#include<iomanip>
#include "antheaderPlusPlus.h"

class Cinema{
	private:
		int people1;
		int people2;
		int people3;
		int people4;
		int age;
		double Payment1;
		float Payment2;
		float Payment3;
		float Payment4;
		
	public:
		int TotalPeople() const;
		double TotalPay() const;
		void Morning();
		void Afternoon();
		void Evening();
		void Night();
		void Revenue();
		static void Menu();
		static void Menu1();
		static void ESC();
		
};

Cinema s;

//---------------------------------------------//

// Non-Static Method

double Cinema::TotalPay() const
{
	return Payment1 + Payment2 + Payment3 + Payment4;
}

int Cinema::TotalPeople() const
{
	return people1 + people2 + people3 + people4;
}

void Cinema::Morning()
{
	double total1, price = 25000, discount1, discount2, discount3, discount4;
	double total2;
	
	
	foreColor(6); gotoxy(40, 1); cout << "Welcome to Cinema! " << endl << endl;
	foreColor(6); gotoxy(40, 5);cout << "Input People : " ; cin >> people1; fflush(stdin); cin.clear();
	
	cout << fixed << setprecision(2);	
	
	if (people1 == 3)
	{
		DrawRectangle(30, 6, 63, 15, 11);
		DrawRectangle(32, 7, 59, 13, 4);
		DrawRectangle(34, 7, 55, 13, 10);
		foreColor(6); gotoxy(40, 9); cout << "<<<<<<< Welcome to Santiphap Cinema >>>>>>>";
		foreColor(6); gotoxy(50, 11); cout << "\4 Input age 1 : "; cin  >> age; fflush(stdin); cin.clear(); gotoxy(69, 11); cout << " Year";
		
		/////////////////////////////////
		
		if (age <= 5)
		{
			discount1 = 0;
			total1 += price * discount1;
		}
		
		else if (age <= 12)
		{
			discount2 = 0.50;
			total1 += price - (price * discount2);
		}
		
		else if (age <= 26)
		{
			discount3 = 0.10;
			total1 += price - (price * discount3);
		}
		else
		{
			discount4 = 0.25;
			total1 += price - (price * discount4);
		}
		
		//////////////////////////////////////
		foreColor(6); gotoxy(50, 13); cout << "\4 Input age 2 : "; cin >> age; fflush(stdin); cin.clear(); gotoxy(69, 13); cout << " Year";
		if (age <= 5)
		{
			discount1 = 0;
			total1 += price * discount1;
		}
		
		else if (age <= 12)
		{
			discount2 = 0.50;
			total1 += price - (price * discount2);
		}
		
		else if (age <= 26)
		{
			discount3 = 0.10;
			total1 += price - (price * discount3);
		}
		else
		{
			discount4 = 0.25;
			total1 += price - (price * discount4);
		}
		
		////////////////////////////
		foreColor(6); gotoxy(50, 15); cout << "\4 Input age 3 : "; cin >> age; fflush(stdin); cin.clear(); gotoxy(69, 15); cout << " Year";
		if (age <= 5)
		{
			discount1 = 0;
			total1 += price * discount1;
		}
		
		else if (age <= 12)
		{
			discount2 = 0.50;
			total1 += price - (price * discount2);
		}
		
		else if (age <= 26)
		{
			discount3 = 0.10;
			total1 += price - (price * discount3);
		}
		else
		{
			discount4 = 0.25;
			total1 += price - (price * discount4);
		}
		
		foreColor(7); gotoxy(50, 17); cout << "Total  : " << total1 << " R";
		foreColor(3); gotoxy(42, 19); cout << "=============== Thank You ===============";
	}
	else 
	{
		DrawRectangle(30, 6, 63, 13, 11);
		DrawRectangle(32, 7, 59, 11, 4);
		DrawRectangle(34, 7, 55, 11, 10);
		total2 = people1 * price;
		
		foreColor(6); gotoxy(40, 9);  cout << "<<<<<<< Welcome to Santiphap Cinema >>>>>>>";
		foreColor(6); gotoxy(45, 11); cout << "\4 Ticket Price      : 25 000 R";;
		foreColor(6); gotoxy(45, 13); cout << "\4 You buy           : " << people1;
		foreColor(7); gotoxy(45, 15); cout << "\4 Your Ticket Total : " << total2 << " R";
		foreColor(3); gotoxy(42, 17); cout << "=============== Thank You ===============";
	}
	
	Payment1 = total1 + total2;
}

void Cinema::Afternoon()
{
	double total1, price = 25000, discount1, discount2, discount3, discount4;
	double total2;
	
	
	foreColor(6); gotoxy(40, 1); cout << "Welcome to Cinema! " << endl << endl;
	foreColor(6); gotoxy(40, 5);cout << "Input People : " ; cin >> people2; fflush(stdin); cin.clear();
	
	cout << fixed << setprecision(2);
	
	if (people2 == 3)
	{	
		DrawRectangle(30, 6, 63, 15, 11);
		DrawRectangle(32, 7, 59, 13, 4);
		DrawRectangle(34, 7, 55, 13, 10);
		foreColor(6); gotoxy(40, 9); cout << "<<<<<<< Welcome to Santiphap Cinema >>>>>>>";
		foreColor(6); gotoxy(50, 11); cout << "\4 Input age 1 : "; cin  >> age; fflush(stdin); cin.clear(); gotoxy(69, 11); cout << " Year";
		
		/////////////////////////////////
		
		if (age <= 5)
		{
			discount1 = 0;
			total1 += price * discount1;
		}
		
		else if (age <= 12)
		{
			discount2 = 0.50;
			total1 += price - (price * discount2);
		}
		
		else if (age <= 26)
		{
			discount3 = 0.10;
			total1 += price - (price * discount3);
		}
		else
		{
			discount4 = 0.25;
			total1 += price - (price * discount4);
		}
		
		//////////////////////////////////////
		foreColor(6); gotoxy(50, 13); cout << "\4 Input age 2 : "; cin >> age; fflush(stdin); cin.clear(); gotoxy(69, 13); cout << " Year";
		if (age <= 5)
		{
			discount1 = 0;
			total1 += price * discount1;
		}
		
		else if (age <= 12)
		{
			discount2 = 0.50;
			total1 += price - (price * discount2);
		}
		
		else if (age <= 26)
		{
			discount3 = 0.10;
			total1 += price - (price * discount3);
		}
		else
		{
			discount4 = 0.25;
			total1 += price - (price * discount4);
		}
		
		////////////////////////////
		foreColor(6); gotoxy(50, 15); cout << "\4 Input age 3 : "; cin >> age; fflush(stdin); cin.clear(); gotoxy(69, 15); cout << " Year";
		if (age <= 5)
		{
			discount1 = 0;
			total1 += people2 * discount1;
		}
		
		else if (age <= 12)
		{
			discount2 = 0.50;
			total1 += price - (price * discount2);
		}
		
		else if (age <= 26)
		{
			discount3 = 0.10;
			total1 += price - (price * discount3);
		}
		else
		{
			discount4 = 0.25;
			total1 += price - (price * discount4);
		}
		
		foreColor(7); gotoxy(50, 17); cout << "Total  : " << total1 << " R";
		foreColor(3); gotoxy(42, 19); cout << "=============== Thank You ===============";
	}
	else 
	{
		DrawRectangle(30, 6, 63, 13, 11);
		DrawRectangle(32, 7, 59, 11, 4);
		DrawRectangle(34, 7, 55, 11, 10);
		total2 = people2 * price;
		
		foreColor(6); gotoxy(40, 9);  cout << "<<<<<<< Welcome to Santiphap Cinema >>>>>>>";
		foreColor(6); gotoxy(45, 11); cout << "\4 Ticket Price      : 25 000 R";;
		foreColor(6); gotoxy(45, 13); cout << "\4 You buy           : " << people2;
		foreColor(7); gotoxy(45, 15); cout << "\4 Your Ticket Total : " << total2 << " R";
		foreColor(3); gotoxy(42, 17); cout << "=============== Thank You ===============";
	}
	
	Payment2 = total1 + total2;
}

void Cinema::Evening()
{
	double total1, price = 25000, discount1, discount2, discount3, discount4;
	double total2;
	
	
	foreColor(6); gotoxy(40, 1); cout << "Welcome to Cinema! " << endl << endl;
	foreColor(6); gotoxy(40, 5);cout << "Input People : " ; cin >> people3; fflush(stdin); cin.clear();
	
	cout << fixed << setprecision(2);
	
	if (people3 == 3)
	{	
		DrawRectangle(30, 6, 63, 15, 11);
		DrawRectangle(32, 7, 59, 13, 4);
		DrawRectangle(34, 7, 55, 13, 10);
		foreColor(6); gotoxy(40, 9); cout << "<<<<<<< Welcome to Santiphap Cinema >>>>>>>";
		foreColor(6); gotoxy(50, 11); cout << "\4 Input age 1 : "; cin  >> age; fflush(stdin); cin.clear(); gotoxy(69, 11); cout << " Year";
		
		/////////////////////////////////
		
		if (age <= 5)
		{
			discount1 = 0;
			total1 += price * discount1;
		}
		
		else if (age <= 12)
		{
			discount2 = 0.50;
			total1 += price - (price * discount2);
		}
		
		else if (age <= 26)
		{
			discount3 = 0.10;
			total1 += price - (price * discount3);
		}
		else
		{
			discount4 = 0.25;
			total1 += price - (price * discount4);
		}
		
		//////////////////////////////////////
		foreColor(6); gotoxy(50, 13); cout << "\4 Input age 2 : "; cin >> age; fflush(stdin); cin.clear(); gotoxy(69, 13); cout << " Year";
		if (age <= 5)
		{
			discount1 = 0;
			total1 += price * discount1;
		}
		
		else if (age <= 12)
		{
			discount2 = 0.50;
			total1 += price - (price * discount2);
		}
		
		else if (age <= 26)
		{
			discount3 = 0.10;
			total1 += price - (price * discount3);
		}
		else
		{
			discount4 = 0.25;
			total1 += price - (price * discount4);
		}
		
		////////////////////////////
		foreColor(6); gotoxy(50, 15); cout << "\4 Input age 3 : "; cin >> age; fflush(stdin); cin.clear(); gotoxy(69, 15); cout << " Year";
		if (age <= 5)
		{
			discount1 = 0;
			total1 += price * discount1;
		}
		
		else if (age <= 12)
		{
			discount2 = 0.50;
			total1 += price - (price * discount2);
		}
		
		else if (age <= 26)
		{
			discount3 = 0.10;
			total1 += price - (price * discount3);
		}
		else
		{
			discount4 = 0.25;
			total1 += people3 - (price * discount4);
		}
		
		foreColor(7); gotoxy(50, 17); cout << "Total  : " << total1 << " R";
		foreColor(3); gotoxy(42, 19); cout << "=============== Thank You ===============";
	}
	else 
	{
		DrawRectangle(30, 6, 63, 13, 11);
		DrawRectangle(32, 7, 59, 11, 4);
		DrawRectangle(34, 7, 55, 11, 10);
		total2 = people3 * price;
		
		foreColor(6); gotoxy(40, 9);  cout << "<<<<<<< Welcome to Santiphap Cinema >>>>>>>";
		foreColor(6); gotoxy(45, 11); cout << "\4 Ticket Price      : 25 000 R";;
		foreColor(6); gotoxy(45, 13); cout << "\4 You buy           : " << people3;
		foreColor(7); gotoxy(45, 15); cout << "\4 Your Ticket Total : " << total2 << " R";
		foreColor(3); gotoxy(42, 17); cout << "=============== Thank You ===============";
	}
	
	Payment3 = total1 + total2;
}

void Cinema::Night()
{
	double total1, price = 25000, discount1, discount2, discount3, discount4;
	double total2;
	
	
	foreColor(6); gotoxy(40, 1); cout << "Welcome to Cinema! " << endl << endl;
	foreColor(6); gotoxy(40, 5);cout << "Input People : " ; cin >> people4; fflush(stdin); cin.clear();
	
	cout << fixed << setprecision(2);
	
	if (people4 == 3)
	{	
		DrawRectangle(30, 6, 63, 15, 11);
		DrawRectangle(32, 7, 59, 13, 4);
		DrawRectangle(34, 7, 55, 13, 10);
		foreColor(6); gotoxy(40, 9); cout << "<<<<<<< Welcome to Santiphap Cinema >>>>>>>";
		foreColor(6); gotoxy(50, 11); cout << "\4 Input age 1 : "; cin  >> age; fflush(stdin); cin.clear(); gotoxy(69, 11); cout << " Year";
		
		/////////////////////////////////
		
		if (age <= 5)
		{
			discount1 = 0;
			total1 += price * discount1;
		}
		
		else if (age <= 12)
		{
			discount2 = 0.50;
			total1 += price - (price * discount2);
		}
		
		else if (age <= 26)
		{
			discount3 = 0.10;
			total1 += price - (price * discount3);
		}
		else
		{
			discount4 = 0.25;
			total1 += price - (price * discount4);
		}
		
		//////////////////////////////////////
		foreColor(6); gotoxy(50, 13); cout << "\4 Input age 2 : "; cin >> age; fflush(stdin); cin.clear(); gotoxy(69, 13); cout << " Year";
		if (age <= 5)
		{
			discount1 = 0;
			total1 += price * discount1;
		}
		
		else if (age <= 12)
		{
			discount2 = 0.50;
			total1 += price - (price * discount2);
		}
		
		else if (age <= 26)
		{
			discount3 = 0.10;
			total1 += price - (price * discount3);
		}
		else
		{
			discount4 = 0.25;
			total1 += price - (price * discount4);
		}
		
		////////////////////////////
		foreColor(6); gotoxy(50, 15); cout << "\4 Input age 3 : "; cin >> age; fflush(stdin); cin.clear(); gotoxy(69, 15); cout << " Year";
		if (age <= 5)
		{
			discount1 = 0;
			total1 += price * discount1;
		}
		
		else if (age <= 12)
		{
			discount2 = 0.50;
			total1 += price - (price * discount2);
		}
		
		else if (age <= 26)
		{
			discount3 = 0.10;
			total1 += price - (price * discount3);
		}
		else
		{
			discount4 = 0.25;
			total1 += price - (price * discount4);
		}
		
		foreColor(7); gotoxy(50, 17); cout << "Total  : " << total1 << " R";
		foreColor(3); gotoxy(42, 19); cout << "=============== Thank You ===============";
	}
	else 
	{
		DrawRectangle(30, 6, 63, 13, 11);
		DrawRectangle(32, 7, 59, 11, 4);
		DrawRectangle(34, 7, 55, 11, 10);
		total2 = people4 * price;
		
		foreColor(6); gotoxy(40, 9);  cout << "<<<<<<< Welcome to Santiphap Cinema >>>>>>>";
		foreColor(6); gotoxy(45, 11); cout << "\4 Ticket Price      : 25 000 R";;
		foreColor(6); gotoxy(45, 13); cout << "\4 You buy           : " << people4;
		foreColor(7); gotoxy(45, 15); cout << "\4 Your Ticket Total : " << total2 << " R";
		foreColor(3); gotoxy(42, 17); cout << "=============== Thank You ===============";
	}
	
	Payment4 = total1 + total2;
}

//----------------------------------------//
// Static Method

void Cinema::ESC()
{
	cout << "<<<<< \2 Please "; Sleep(200);
	cout << "[ESC] "; Sleep(200); 
	cout << "to exit "; Sleep(200); 
	cout << "and any "; Sleep(200);
	cout << "to use "; Sleep(200);
	cout << "program "; Sleep(200);
	cout << "again \2 >>>>>"; Sleep(200);
}

void Cinema::Menu()
{
	DrawRectangle(30, 5, 63, 11, 11);
	DrawRectangle(32, 6, 59, 9, 4);
	DrawRectangle(34, 6, 55, 9, 10);
	foreColor(7); gotoxy(40, 8);  cout << "<<<<<<< Welcome to Santiphap Cinema >>>>>>>";
	foreColor(6); gotoxy(50, 10); cout << "[1] \4 Payment for customer";
	foreColor(6); gotoxy(50, 12); cout << "[2] \4 Revenue for everyday";
}

void Cinema::Menu1()
{
	DrawRectangle(30, 5, 63, 17, 11);
	DrawRectangle(32, 6, 59, 15, 4);
	DrawRectangle(34, 6, 55, 15, 10);
	foreColor(7); gotoxy(45, 8);  cout << "<<<<<<< Payment for customer >>>>>>>";
	foreColor(6); gotoxy(50, 10); cout << "[1] \4 Morning Shift";
	foreColor(6); gotoxy(50, 12); cout << "[2] \4 Afternoon Shift";
	foreColor(6); gotoxy(50, 14); cout << "[3] \4 Evening Shift";
	foreColor(6); gotoxy(50, 16); cout << "[4] \4 Night Shift";
	foreColor(6); gotoxy(50, 18); cout << "[5] \4 Back ....";
}

void Cinema::Revenue()
{
	do
	{
		DrawRectangle(18, 1, 84, 25, 8);
		DrawRectangle(20, 1, 80, 25, 11);
		DrawRectangle(22, 2, 76, 23, 7);
		DrawRectangle(24, 2, 72, 23, 4);
		cout << fixed << setprecision(2);
		foreColor(7); gotoxy(43, 4);  cout << "<<<< \2 Revenue for everyday \2 >>>>" << endl;
		foreColor(8); gotoxy(38, 6);  cout << "\4 Tickets Sold on Shift Morning   : " << this->people1 << " Tickets";
		foreColor(8); gotoxy(38, 8);  cout << "\4 Revenue on Shift Morning        : " << this->Payment1 << " R";
		foreColor(8); gotoxy(38, 10); cout << "\4 Tickets Sold on Shift Afternoon : " << this->people2 << " Tickets";
		foreColor(8); gotoxy(38, 12); cout << "\4 Revenue on Shift Afternoon      : " << this->Payment2 << " R";
		foreColor(8); gotoxy(38, 14); cout << "\4 Tickets Sold on Shift Evening   : " << this->people3 << " Tickets";
		foreColor(8); gotoxy(38, 16); cout << "\4 Revenue on Shift Evening        : " << this->Payment3 << " R";;
		foreColor(8); gotoxy(38, 18); cout << "\4 Tickets Sold on Shift Night     : " << this->people4 << " Tickets";;
		foreColor(8); gotoxy(38, 20); cout << "\4 Revenue on Shift Night          : " << this->Payment4 << " R";;
		foreColor(8); gotoxy(38, 22); cout << "\4 Tickets Sold on Today           : " << s.TotalPeople() << " Tickets";
		foreColor(8); gotoxy(38, 24); cout << "\4 Revenue for Today               : " << s.TotalPay() << " R";
		
		foreColor(11); cout << "\n\n\n\n\t\t\t   "; this->ESC();
	}while(getch() != 27);
	
}

#endif