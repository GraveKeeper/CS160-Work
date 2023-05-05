#include <iostream>
#include <cstring>
#include "CarType.h"
#define SEMI ';'

CarType::CarType(ifsteam inFile, char iname[])
{
	name = iname;
	inFile.ignore(5,SEMI);
	inFile >> mpg;
	inFile.ignore(5,SEMI);
	inFile >> cylinders;
	inFile.ignore(5,SEMI);
	inFile >> displacement;
	inFile.ignore(5,SEMI);
	inFile >> horsepower;
	inFile.ignore(5,SEMI);
	inFile >> weight;
	inFile.ignore(5,SEMI);
	inFile >> acceleration;
	inFile.ignore(5,SEMI);
	inFile >> model;
	inFile.ignore(5,SEMI);
	inFile.get(origin, 101, '\n');
	inFile.ignore(5,'\n');
}

CarType::CarType()
{
	cout << "Enter data for the new car " << endl;
	cout << "Name";
	cin >> name;
	cout << endl << "mpg";
	cin >> mpg;
	cout << "cylinders";
	cin >> cylinders;
	cout << "displacement";
	cin >> displacement;
	cout << "horsepower";
	cin >> horsepower;
	cout << "weight";
	cin >> weight;
	cout << "acceleration"
	cin >> acceleration;
	cout << "model";
	cin >> model;
	cout << "origin";
	cin >> origin;
}


char[] CarType::getName()
{
	return name;
}

double CarType::getMpg()
{
	return mpg;
}

int CarType::getCylinders()
{
	return cylinders:
}

double CarType::getDisplacement()
{
	return displacement;
}

double CarType::getHorsepower()
{
	return horsepower;
}

double CarType::getWeight()
{
	return weight;
}

double CarType::getAcceleration()
{
	return acceleration;
}

int CarType::getModel()
{
	return model;
}

char[] CarType::getOrigin()
{
	return origin;
}

void CarType::display()
{
	cout << "Name: " << name << endl;
	cout << "mpg: " << mpg << endl;
	cout << "cylinders: " << cylinders << endl;
	cout << "displacement: " << dsplacement << endl;
	cout << "horsepower: " << horsepower << endl;
	cout << "weight: " << weight << endl;
	cout << "acceleration: " << acceleration << endl;
	cout << "model: " << model << endl;
	cout << "origin: " << origin << endl;
}

