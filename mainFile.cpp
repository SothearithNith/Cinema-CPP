#include<iostream>
#include "Cinema.h"
using namespace std;
//----------------------------------------//
void MENU();
void MENU1();
//----------------------------------------//

void MENU()
{
	SetConsoleTitle("<< (: Santiphap Cinema :) >>");
	int n;
	do
	{
		system("cls");
		s.Menu();
		foreColor(7); gotoxy(48, 14); cout << "Please chose option 1 -> 2 : "; cin >> n; fflush(stdin); cin.clear();
		system("cls"); 
		switch(n)
		{
			case 1:
				{
					system("cls");
					MENU1();
				}break;
			case 2:
				{
					system("cls");
					s.Revenue();
				}break;
			default:
				{
					foreColor(4); cout << "\n\n\t\t\t\t\t Invalid Option!!" << endl; 
					delay(200);
				}break;	
		}
		
	}while(true);
}

void MENU1()
{
	int n;
	do
	{
		system("cls");
		s.Menu1();
		foreColor(7); gotoxy(46, 20); cout << "Please chose option 1 -> 5 : "; cin >> n; fflush(stdin); cin.clear();
		
		switch(n)
		{
			case 1:
				{
					do
					{
						system("cls");
						
						foreColor(11); gotoxy(45, 3); cout << "<<<< \2 MORNING SHIGT \2 >>>>";
						s.Morning();
						
						cout << "\n\n\n\n\n\n\t\t\t    "; Cinema::ESC();
					}while(getch() != 27);
					
				}break;
			case 2:
				{
					do
					{
						system("cls");
						
						foreColor(11); gotoxy(45, 3); cout << "<<<< \2 AFTERNOON SHIGT \2 >>>>";
						s.Afternoon();
						
						cout << "\n\n\n\n\n\n\t\t\t    "; Cinema::ESC();
					}while(getch() != 27);
					
				}break;
			case 3:
				{
					do
					{
						system("cls");
						
						foreColor(11); gotoxy(45, 3); cout << "<<<< \2 EVENING SHIGT \2 >>>>";
						s.Evening();
						
						cout << "\n\n\n\n\n\n\t\t\t    "; Cinema::ESC();
					}while(getch() != 27);
					
				}break;
			case 4:
				{
					do
					{
						system("cls");
						
						foreColor(11); gotoxy(45, 3); cout << "<<<< \2 NIGHT SHIGT \2 >>>>";
						s.Night();
						
						cout << "\n\n\n\n\n\n\t\t\t    "; Cinema::ESC();
					}while(getch() != 27);
					
				}break;
			case 5:
				{
					system("cls");
					
					MENU();
				}break;
			default:
				{
					foreColor(4); cout << "\n\n\t\t\t\t\t Invalid Option!!" << endl; 
					delay(200);
				}break;
		}
		
	}while(true);
}

//----------------------------------------------------//

int main()
{
	do
	{
		
		MENU();
		
	}while(getch() !=27);
	
	
	foreColor(7);
	getch();
	return 0;
}