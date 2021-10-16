# Midterm-Project
Question 6

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

----------------------------------------------------------------------------------------------------------------------------
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

-------------------------------------------------------------------------------------------------------------------------
/*
stringPrompts.cpp
*/

#pragma once 
#include <iostream>
#include <string>
#include "stringPrompts.h"
#include "dataInput.h"

using namespace std;

void stringPrompts::instructorName()
{
	cout << "Enter your instructor's name (first and last): " << endl;
}

void stringPrompts::yourName()
{
	cout << "Enter your name: " << endl; 
}

void stringPrompts::foodItem()
{
	cout << "Enter a single food item: " << endl;
}

void stringPrompts::number()
{
	cout << "Enter an number between 100 and 200: " << endl; 
}

void stringPrompts::adjective()
{
	cout << "Enter an adjective: " << endl;
}

void stringPrompts::color()
{
	cout << "Enter a color: " << endl;
}

void stringPrompts::animal()
{
	cout << "Enter an animal: " << endl;
}

stringPrompts::stringPrompts()
{

}

---------------------------------------------------------------------------------------------------------------

/*
dataInput.h
*/

#pragma once
#include <iostream>
#include <string>
#ifndef DATAINPUT_H
#define DATAINPUT_H

class dataInput
{
public:
	void setInstName();
		//Function to set instructor name.
		//Postcondition: cin instructor name. 

	string getInstName(); 
		//Function to get instructor name.
		//Postcondition: Instructor name is printed. 

	void setYName();
		//Funcition to set user's name. 
		//Postcondition: cin user's name.

	string getYName();
		//Function to get user's name.
		//Postcondition: User's name is printed. 
	
	void setFood();
		//Function to set a single food item.
		//Postcondition: cin user's name. 

	string getFood();
		//Function to get food item. 
		//Postcondition: Food item is printed. 

	void setStrNum();
		//Function to set a number between 100 and 200.
			//Outputs "Try again." If a number is not between 100 and 200. 
			//If number is between 100 and 200, store data as a string using to_string().
		//Postcondition: cout prompts and cin input into int num;
			//if (100 < num && 200 > num) cout "Try again."
			//else strNum = to_string(num); 

	string getStrNum();
		//Function to get number between 100 and 200 as a string. 
		//Postcondition: The number is printed as a string. 

	void setAdj();
		//Function to set adjective.
		//Postcondition: cin adjective. 

	string getAdj();
		//Function to get the adjective. 
		//Postcondition: The adjective is printed. 

	void setColor();
		//Function to set color.
		//Postcondition: cin color. 

	string getColor();
		//Function to get color. 
		//Postcondition: Color is printed. 

	void setAnimal();
		//Function to set animal. 
		//Postcondition: cin animal. 

	string getAnimal();
		//Function to get animal.
		//Postcondition: The animal is printed. 

	dataInput() 
	{
		num = 0; 
	}//constructor

private:
	string instName;   //variable to store instructor's name. 
	string yName;      //variable to store user's name. 
	string food;       //variable to store a single food item. 
	float num;		   //variable to store number
	string strNum;     //variable to store number as a string
	string adj;        //variable to store an adjective as a string. 
	string clr;        //variable to store the color as a string. 
	string ani;		   //variable to store the animal as a string. 
};

#endif // !DATAINPUT_

--------------------------------------------------------------------------------------------------------------------------
/*
dataInput.cpp
*/

#include <iostream>
#include <string>
#include <sstream> 
#include <iomanip>
#include "stringPrompts.h"
#include "dataInput.h"

using namespace std; 

void dataInput::setInstName()
{
	getline(cin, instName);
	cout << endl;
}

string dataInput::getInstName()
{
	cout << instName; 
	return instName; 
}

void dataInput::setYName()
{
	getline(cin, yName);
	cout << endl;
}

string dataInput::getYName()
{
	cout << yName;
	return yName;
}

void dataInput::setFood()
{
	getline(cin, food);
	cout << endl;
}

string dataInput::getFood()
{
	cout << food;
	return food; 
}

void dataInput::setStrNum()
{
	 
	cin >> num; 
	stringstream stream;
	stream << fixed << setprecision(2) << num;

	for (double x = 0; x < num; x++)
	{
		if (num < 100 || num > 200)
		{
			cout << "Try again: ";
			cin >> num;
			cout << endl;
		}
		else
			strNum = stream.str();

	}//for
	cout << endl; 
}

string dataInput::getStrNum()
{
	cout << strNum;
	return strNum;
}

void dataInput::setAdj()
{
	cin >> adj;
	cout << endl;
}

string dataInput::getAdj()
{
	cout << adj;
	return adj; 
}

void dataInput::setColor()
{
	cin >> clr;
	cout << endl;
}

string dataInput::getColor()
{
	cout << clr;
	return clr;
}

void dataInput::setAnimal()
{
	cin >> ani;  
	cout << endl;
}

string dataInput::getAnimal()
{
	cout << ani;
	return ani; 
}






