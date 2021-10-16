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
	cout << "Enter your instructor's name (first or last): " << endl;
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