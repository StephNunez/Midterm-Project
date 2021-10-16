/*
stringPrompts.h
*/

#pragma once
#include <iostream>
#include <string>
#ifndef STRINGPROMPTS_H
#define STRINGPROMTPS_H

using namespace std; 

class stringPrompts
{
public:
	void instructorName(); 
		//Function that prompts user for instructor name. 
		//Postcondition: cout prompt for instructor name.

	void yourName();
		//Function that prompts user for their name and stores string in yName.
		//Postcondition: cout prompt for user name and cins input into the string yName.

	void foodItem();
		//Function that prompts user for one single food item. 
		//Postcondition: cout prompt and cin input into string food. 

	void number();
		//Function that prompts user to input a number between 100 and 200, then stores 
			//data in float num. 
		
	void adjective();
		//Function that prompts user to input an adjective and stores the data into string adj.
		//Postcondition: cout prompt and cin input into string adj. 

	void color(); 
		//Function that prompts user to input a color and stores the data into string clr; 
		//Postcondition: cout prompt and cin input into string clr.

	void animal(); 
		//Function that prompts user to input an animal and stores the data into string ani;  

	stringPrompts();
		//constructor 
};

#endif // !STRINGPROMPTS_H
