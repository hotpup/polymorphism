#ifndef TURTLE_H
#define TURTLE_H

/**
 * Turtle class, Turtle is a Pet
 */

#include "pet.h"

class Turtle : public Pet
{
public:
    void say() const override;
};

/**
 * Creating TurtleFactory to make Cat objects
 * CatFactory object will register itself later and get stored in Pet class
 */
class TurtleFactory : public PetFactory
{
public:
    TurtleFactory();
    Pet *create() const override;
};

#endif // CAT_H
