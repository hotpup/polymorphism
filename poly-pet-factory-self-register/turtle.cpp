
#include "turtle.h"
#include <iostream>

using namespace std;

void Turtle::say() const { cout << "uahhhHHHHHHH" << endl; }

TurtleFactory::TurtleFactory() { Pet::registerType("Turtle", this); }

Pet *TurtleFactory::create() const { return new Turtle(); }

// creating the object registers the type at run time
TurtleFactory anonymous_TurtleFactory;
