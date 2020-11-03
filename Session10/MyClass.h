#pragma once
#include <iostream>
#include <string>

class MyClass
{
public:
	std::string name;
	int age;
	std::string placOfBirth;
	enum class Dogsize{small,medium,big};
	int HumanAgeCalc(MyClass::Dogsize);
};

