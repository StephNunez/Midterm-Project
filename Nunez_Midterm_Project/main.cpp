/*
Created by Stephanie Nunez
CSIS 223
Professor DeLay
Midterm Project
Question 6

main.cpp
*/

#include <iostream>
#include <string>
#include "stringPrompts.h"
#include "dataInput.h"

using namespace std; 
 
int main()
{	
	stringPrompts madLib; 
	dataInput Info; 
	
	cout << "Welcome to CSIS MadLib!" << endl << "Let's begin." << endl << endl;

	madLib.instructorName(); 
		Info.setInstName();
	madLib.yourName();
		Info.setYName();
	madLib.foodItem();
		Info.setFood();
	madLib.number();
		Info.setStrNum();
	madLib.adjective();
		Info.setAdj();
	madLib.color();
		Info.setColor();
	madLib.animal();
		Info.setAnimal();
	cout << endl;


	cout << "Dear Instructor ";
		Info.getInstName();
	cout << endl << endl;

	cout << "I am sorry that I am unable to turn in my homework now." << endl
		<< "First, I ate a rotten ";
		Info.getFood();
	cout << " which made me turn ";
		Info.getColor();
	cout << " and extremely ill." << endl;

	cout << "I came down with a fever of ";
		Info.getStrNum();
	cout << "." << endl;

	cout << "Next, my ";
		Info.getAdj();
	cout << " pet ";
		Info.getAnimal();
	cout << " must have smelled the remains of the ";
		Info.getFood();
	cout << " on my homework because he ate it." << endl
		<< "I am currently rewriting my homework and hope you will accept it late." << endl << endl
		<< "Sincerely," << endl;
		Info.getYName();
	cout << endl;


	return 0; 
}//main