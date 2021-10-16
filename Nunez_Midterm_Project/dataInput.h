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