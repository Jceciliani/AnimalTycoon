/*Program Name: Project 2
 * Author: Josh Ceciliani
 * Date: October 16, 2017 
 * Description: This program is the base class Animal and the derived classes Tiger, Penguin and Turtle through inheritance. It contains all of the variables and get functions for all of the animals in the game.   
 * */
#include "Animal.hpp"
#include <iostream>

using namespace std;

Animal::Animal()
{
	age = 1;
	cost = 1000; 
	numOfBabies = 1; 
	foodCost = 10;
	payOff = 100;	
	

}

Animal::~Animal()
{
}

//Tiger class
Tiger::Tiger()
{
	age = 1;
	cost = 10000;
	numOfBabies = 1;
	foodCost = 50;
	payOff = 2000;	
	

}

Tiger::~Tiger()
{
}

//Penguin class
Penguin::Penguin()
{
	age = 1;
	cost = 1000;
	numOfBabies = 5;
	foodCost = 10;
	payOff = 100;	


}

Penguin::~Penguin()
{
}

//Turtle Class
Turtle::Turtle()
{
	age = 1;
	cost = 100;
	numOfBabies = 10;
	foodCost = 5;
	payOff = 5;	


}

Turtle::~Turtle()
{
}
