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




