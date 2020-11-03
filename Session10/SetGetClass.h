#pragma once
#include <iostream>
#include <string>
#include <vector>
class SetGetClass
{
private:
	static int numOfObjects; // belong to the class not any objects 
	std::string Username;
	std::string Password;
public:
	void set(std::string);
	std::string getUsername () const;
	std::string getPassword();
	static int GetNumObjs();
	//constructor // if you don't write a constructor compiler generates one for you
	SetGetClass();

	// constructor overloading 
	SetGetClass(std::string, std::string);
	//deconstructor 
	~SetGetClass();
};

