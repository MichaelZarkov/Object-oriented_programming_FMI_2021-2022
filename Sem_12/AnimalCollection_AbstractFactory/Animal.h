#pragma once
#include <iostream>
#include <string>

class Animal
{
public:
	virtual void sayHello() const = 0;

	virtual Animal* clone()  const = 0;

	virtual ~Animal() = default;
};

class AnimalCreator
{
public:
    AnimalCreator(const char* animalName);
    virtual ~AnimalCreator() = default;
    const char* getAnimalName() const;

    virtual Animal* createAnimal(std::istream& is) const = 0;

protected:
    std::string animalName;
};