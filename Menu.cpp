/*Program Name: Project 2
 * Author: Josh Ceciliani
 * Date: October 16, 2017 
 * Description: This program is the menu for the Zoo Tycoon game.
 * */
#include<iostream>

#include "Menu.hpp"
#include "Zoo.hpp"

#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;

int Menu::Menus()
{
	string choice;	
	cout << "1. Start Zoo Tycoon" << endl;
	cout << "2. Quit" << endl;
	getline(cin, choice); 


	if(choice == "1")
	{
		//Welcome the user to ZooTycoon
		cout << "Welcome to ZooTycoon. You have $100,000 in the bank! Spend it wisely and good luck! \n" << endl;	
		//Create bank int and give user $100,000
		int bank = 100000;
	
		//Allow user to choose from the 3 types of animals and the quantity of 1 or 2
		int t;	
		int p;
		int tur;
		Zoo *zoo = new Zoo();
	
		cout << "There are Tigers, Penguins and Turtles in the Zoo, oh my! Please choose if you want to start with either 1 or 2 of each animal." << endl;	

		cout << "Tiger - Cost: $10,000 | Num. of Babies: 1 | Food Cost: $50 | Payout: $2,000 " << endl; 
		cout << "Penguin - Cost: $1,000 | Num. of Babies: 5 | Food Cost: $10 | Payout: $100 " << endl;
		cout << "Turtle - Cost: $100   | Num. of Babies: 10 | Food Cost: $5 | Payout: $5 \n" << endl;
	
		//Use array created in Zoo to fill the animals
		cout << "How many Tigers would you like to add to your zoo? [1 or 2]" << endl;
		cin >> t;
		for(int i = 0; i < t; i++)
		{
			bank -=	zoo->addTiger();
		}	

		cout << "How many Penguins would you like to add to your zoo? [1 or 2]" << endl;
		cin >> p;
		for(int i = 0; i < p; i++)
		{
			bank -= zoo->addPenguin();
		}	

		cout << "How many Turtles would you like to add to your zoo? [1 or 2]" << endl;
		cin >> tur; 
		for(int i = 0; i < tur; i++)
		{
			bank -= zoo->addTurtle();
		}		


		cout << "Your balance after purchasing the animals is " << bank << ".\n" << endl; 	

		while(bank > 0)
		{
		


			//All animals increase in age by 1
			zoo->ageTiger();
			zoo->agePenguin();
			zoo->ageTurtle();		

			//Pay feeding cost for each animal / subtract it from the bank
			int food = zoo->feedTigers();	
			food += zoo->feedPenguins();
			food += zoo->feedTurtles();
			bank -= food;
			//Have a randomizeed eventi / have computer randomly choose 1-4 / if else statement it
			int choi =(rand()%4)+1;

			if(choi == 1)
			{
				//Pick a random animal to die
				zoo->animalDeath(); 

			}
	
			else if(choi == 2)
			{
				int money = (rand()%250)+250;
	
				//A boom in zoo attedance 250-500+ per tiger
				cout << "Tiger party!"<< "$" << money << " increase for each tiger today!" << endl; 
				
				money *= zoo->getTigerCount();

				bank += money;

			}

			else if(choi == 3)
			{
				//A baby is born / must have an adult to have babies
				cout << "A baby(s) is born, congrats!" << endl;
				int choice = (rand()%3)+1;
			
				if(choice == 1)
				{
					zoo->addBabyTiger();
					
					cout << "It's a new baby tiger!" << endl;


				}
				
				else if(choice == 2)
				{
					for(int i = 0; i < 5; i++)
					{
						zoo->addBabyPenguin();
					}
					
					cout << "It's 5 new baby penguins!" << endl;  	
				}

				else if(choice == 3)
				{
					for(int i = 0; i < 10; i++)
					{
						zoo->addBabyTurtle();
					}
						cout << "It's 10 new baby turtles!" << endl; 


				}
			}
			
			else if(choi == 4)
			{
				//No random event today!
				cout << "No random event today!" << endl;		

			}


			//Calculate payoff based on number of animals and how much they give per - add it to bank 
			int pay = zoo->tigerPayout();
			pay += zoo->penguinPayout();
			pay += zoo->turtlePayout();
			bank += pay; 				


			//Ask the player if they would like to buy an adult animal, if so, what type? Subtract from bank cost and add animal to the zoo.
			int choose;		
			 
			cout << "\nWould you like to buy an adult animal for your zoo? [1. Yes 2. No]" << endl;
			cin >> choose;
			cin.get();		
			if(choose == 1)
			{
				int ch;
				cout << "1. Tiger" << endl;
				cout << "2. Penguin" << endl;
				cout << "3. Turtle" << endl;
				cin >> ch;

				if(ch == 1)	
				{	
					cout << "Tiger added" << endl;		
					bank -= zoo->addTiger();	
				}		

				else if(ch == 2)
				{
					cout << "Penguin added" << endl;
					bank -= zoo->addPenguin();
				}

				else if (ch == 3)
				{
					cout << "Turtle added" << endl;
					bank -= zoo->addTurtle();	
				}
	


			}
		
			else if(choose == 2)
			{
			}	
			while(choose > 2 || choose < 1)
			{
				cout << "Invalid Input - Please enter 1 or 2" << endl;
				
				cout << "\nWould you like to buy an adult animal for your zoo? [1. Yes 2. No]" << endl;
				cin >> choose;
				cin.get();		
				if(choose == 1)
				{
					int ch;
					cout << "1. Tiger" << endl;
					cout << "2. Penguin" << endl;
					cout << "3. Turtle" << endl;
					cin >> ch;

					if(ch == 1)	
					{	
						cout << "Tiger added" << endl;		
						bank -= zoo->addTiger();	
					}		

					else if(ch == 2)
					{
						cout << "Penguin added" << endl;
						bank -= zoo->addPenguin();
					}

					else if (ch == 3)
					{
						cout << "Turtle added" << endl;
						bank -= zoo->addTurtle();	
					}
	


				}	
		
				else if(choose == 2)
				{
				}	

			}	
			
		
			//Display how many of each animal you have and you total bank amount
			cout << "You have " << zoo->getTigerCount() << " Tigers." << endl;
			cout << "You have " << zoo->getPenguinCount() << " Penguins." << endl;
			cout << "You have " << zoo->getTurtleCount() << " Turtles." << endl;

			cout << "You have $" << bank << " in your bank." << endl; 	

			//End of day - Prompt message to continue playing or quit. If user bank = 0, end the game  
			int c;			

			cout << "\nThis is the end of the day, do you want to continue playing or quit? 1.Continue 2. Quit" << endl;
			cin >> c;

			if(c == 1)
			{
			}

			else if(c == 2)
			{
				cout << "Thank you for playing!" << endl;
				//delete zoo object	
				zoo->clear();	
				delete zoo;
	
				return 0;
			}
			while(c > 2 || c < 1)
			{
				cout << "Invalid Input - Please enter either 1 or 2" << endl; 

				
				cout << "\nThis is the end of the day, do you want to continue playing or quit? 1.Continue 2. Quit" << endl;
				cin >> c;

				if(c == 1)
				{
				}

				else if(c == 2)
				{
					cout << "Thank you for playing!" << endl;
					//delete zoo object		
					delete zoo;
	
					return 0;
				}


			} 	
		}





	}
	//Quits the program without doing anything 
	else if(choice == "2")
	{
		return 0;	

	}
	//Input Validation for anything other than 1 or 2
	else
	{
	cout << "Invalid - Please choose either 1 or 2" << endl; 
	}


}




