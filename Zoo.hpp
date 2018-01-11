/* Program Name: Project 2
 * Author: Josh Ceciliani
 * Date: October 16, 2017 
 * Description: This program creates the cage for the animals, adds animals to the cage, counts the number of animals and ages the animals. 
 * */

#include "Animal.hpp"

#ifndef ZOO_HPP
#define ZOO_HPP

class Zoo
{
	private:
		Tiger **tigers;
		Penguin **penguins;
		Turtle **turtles;
		//Animal Cage Sizes 
		int tigerCage;
		int penguinCage;
		int turtleCage;
		//Total Animal Counts
		int tigerCount;
		int penguinCount;
		int turtleCount;	
	public:
		Zoo();
		~Zoo();
		//Add Animals	
		int addTiger();
		int addPenguin();
		int addTurtle();
		//Add Baby Animals
		int addBabyTiger();	
		int addBabyPenguin();
		int addBabyTurtle();
		//Animal Ages
		void ageTiger();
		void agePenguin();
		void ageTurtle();
		//Feed Animals
		int feedTigers();
		int feedPenguins();
		int feedTurtles();
		//Animal Payouts
		int tigerPayout();
		int penguinPayout();
		int turtlePayout();
		//Getters for counts
		int getTigerCount() {return tigerCount;}
		int getPenguinCount() {return penguinCount;}
		int getTurtleCount() {return turtleCount;}	
		//Animal Death	
		int animalDeath();
		//clear objects	
		void clear();
};
#endif

