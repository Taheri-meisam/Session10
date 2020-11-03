#include "SetGetClass.h"

int SetGetClass::numOfObjects = 0;
int SetGetClass::GetNumObjs()
{
	return numOfObjects;
}

void SetGetClass::set(std::string pass)
{
	Password = pass;
}

std::string SetGetClass::getPassword() 
{
	return Password;
}



std::string SetGetClass::getUsername() const
{
	return Username;
}

SetGetClass::SetGetClass()
{
	Username = "Admin";
	//this->Username = "Admin"; // this point to the current object
	++numOfObjects;
}

SetGetClass::SetGetClass(std::string user, std::string pass)
{
	++numOfObjects;
	Username = user;
	Password = pass;
}

//// more efficient way of doing the above constructor 
//SetGetClass::SetGetClass(std::string user, std::string pass) : Username{ user }, Password{ pass }
//{
//	
//}
SetGetClass::~SetGetClass()
{
	--numOfObjects;
}
