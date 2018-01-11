/* Program Name: Project 2
 * Author: Josh Ceciliani
 * Date: October 16, 2017 
 * Description: This program creates the cage for the animals, adds animals to the cage, counts the number of animals and ages the animals. 
 * */

#include<iostream>
#include "Zoo.hpp"
#include <cstdlib>

using namespace std;

Zoo::Zoo()
{
tigers = new Tiger*[50];
penguins = new Penguin*[50];
turtles = new Turtle*[50];	

}

Zoo::~Zoo()
{
	delete [] tigers;
	delete [] penguins; 	
	delete [] turtles;
}
//Add animals -----------------------------------------
int Zoo::addTiger()
{
	int c = 0;
	Tiger *tiger = new Tiger();
	tigers[tigerCage] = tiger;
	tigerCage++;
	c = tiger->getCost();
	tigerCount++;	


	return c;
}

int Zoo::addPenguin()
{
	int c = 0;
	Penguin *penguin = new Penguin();
	penguins[penguinCage] = penguin;		
	penguinCage++;
	c = penguin->getCost();
	penguinCount++;

	return c;

}

int Zoo::addTurtle()
{
	int c = 0;
	Turtle *turtle = new Turtle();
	turtles[turtleCage] = turtle;
	turtleCage++;
	c = turtle->getCost();
	turtleCount++;

	return c;	

} 

//Add Baby Animals ------------------------------------

int Zoo::addBabyTiger()
{
	Tiger *tiger = new Tiger();
	tigers[tigerCage] = tiger;
	tigerCage++;
	tigerCount++;	

}

int Zoo::addBabyPenguin()
{
	Penguin *penguin = new Penguin();
	penguins[penguinCage] = penguin;		
	penguinCage++;
	penguinCount++;


}

int Zoo::addBabyTurtle()
{
	Turtle *turtle = new Turtle();
	turtles[turtleCage] = turtle;
	turtleCage++;
	turtleCount++;


} 

//Age Animals -------------------------------------------
void Zoo::ageTiger()
{


	for(int i = 0; i < tigerCage; i++)
	{
		tigers[i]->getAge();

	}	 


}

void Zoo::agePenguin()
{

	for(int i = 0; i < penguinCage; i++)
	{
		penguins[i]->getAge();
	}


}

void Zoo::ageTurtle()
{

	for(int i = 0; i < turtleCage; i++)
	{
		turtles[i]->getAge();
	}


}	



//Feed Animals--------------------------------------------
int Zoo::feedTigers()
{
	int tigerFoodCost = 0;

	for(int i = 0; i < tigerCage; i++)
	{
		tigerFoodCost += tigers[i]->getFoodCost();
	}	

	return tigerFoodCost;

}	

int Zoo::feedPenguins()
{
	int penguinFoodCost = 0;

	for(int i = 0; i < penguinCage; i++)
	{
		penguinFoodCost += penguins[i]->getFoodCost(); 

	}	

	return penguinFoodCost;
}

int Zoo::feedTurtles()
{
	int turtleFoodCost = 0;
	
	for(int i = 0; i < turtleCage; i++)
	{
		turtleFoodCost += turtles[i]->getFoodCost();
	}

	return turtleFoodCost;

}
//Animal Payouts -----------------------------------------
int Zoo::tigerPayout()
{
	int total = 0;

	for(int i = 0; i < tigerCage; i++)
	{
		total += tigers[i]->getPayOff();
	}

	return total;	
}

int Zoo::penguinPayout()
{
	int total = 0;
	
	for(int i = 0; i < penguinCage; i++)
	{
		total += penguins[i]->getPayOff();

	}

	return total;

}

int Zoo::turtlePayout()
{
	int total = 0;

	for(int i = 0; i < turtleCage; i++)
	{
		total += turtles[i]->getPayOff();

	}

	return total;


}
//Animal Death --------------------------------
int Zoo::animalDeath()
{
	int choice = (rand()%3)+1; 	
	if(choice == 1)
	{
		delete tigers[tigerCage];	
		cout << "A tiger has died." << endl;
		tigerCount--;
	}
	if(choice == 2)
	{
		delete penguins[penguinCage];
		cout << "A penguin has died." << endl;
		penguinCount--;	

	}
	if (choice == 3)
	{
		delete turtles[turtleCage];
		cout << "A turtle has died." << endl;
		turtleCount--;

	} 

}


void Zoo::clear()
{
	for(int i = 0; i < tigerCage; i++)
	{
		delete tigers[i];
	}

	for(int i = 0; i < penguinCage; i++)
	{
		delete penguins[i];
	}

	for(int i = 0; i < turtleCage; i++)
	{
		delete turtles[i];
	}


}
