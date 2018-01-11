/*Program Name: Project 2
 * Author: Josh Ceciliani
 * Date: October 16, 2017 
 * Description: This program is the base class Animal and the derived classes Tiger, Penguin and Turtle through inheritance. It contains all of the variables and get functions for all of the animals in the game.   
 * */
#include<iostream>
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal
{
	protected:
		int age;
		int cost;	
		int numOfBabies;
		int foodCost;
		int payOff;
	public:
		Animal();
		~Animal();
		int getFoodCost();
		int getPayOff();	
		int getCost();
		int getAge();

};
#endif

class Tiger : public Animal
{

	private:
		int age;
		int cost;	
		int numOfBabies;
		int foodCost;
		int payOff;
	public:
		Tiger();		
		~Tiger();
		int getFoodCost() {return foodCost;}
		int getPayOff() {return payOff;} 
		int getCost() {return cost;}
		int getAge() {return age;}
};


class Penguin : public Animal
{
	
	private:
		int age;
		int cost;	
		int numOfBabies;
		int foodCost;
		int payOff;

	public:
		Penguin();		
		~Penguin();
		int getFoodCost() {return foodCost;}
		int getPayOff() {return payOff;}
		int getCost() {return cost;}
		int getAge() {return age;}
};

class Turtle : public Animal
{

	private:
		int age;
		int cost;	
		int numOfBabies;
		int foodCost;
		int payOff;

	public:
		Turtle();		
		~Turtle();
		int getFoodCost() {return foodCost;}
		int getPayOff() {return payOff;}
		int getCost() {return cost;}
		int getAge() {return age;}	

};
