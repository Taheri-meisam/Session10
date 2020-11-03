// Session10.cpp 

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "MyClass.h"
#include "SetGetClass.h"


void CreatingOBJ();
void SetAndGet();
void displayActiveObjs();
/*
Declaring a class
// Deafult declarations are private
class ClassName{
	declarations;
};


// Now declarations are public
class ClassName{
public:
	declarations;
};


*/

class Player {
public:
	// attributes
	std::string name;
	int hp;
	int xp;
	int level;
	//
	bool isDead(); //methods // function prototypes 

};
Player P1; // similar to primitive types
Player* P2 = new Player(); // Creating and Object Dynamically on heap
std::vector<Player> Players; // creating a vector of objects 


int main()
{
	CreatingOBJ();
	SetAndGet();


}


void CreatingOBJ() {

	Player P3;
	//std::cout << P3.hp;
	Players.push_back(P3);
	Player PlayerArray[] = { P1,P3 };
	MyClass M1;

	// Dog Age class 
	M1.age = 10;
	M1.name = "Poodle";
	M1.placOfBirth = "France";
	std::cout << M1.name << " Human age :" << M1.HumanAgeCalc(MyClass::Dogsize::big) << std::endl;
	///
	/// Object Pointer 
	/// 

	MyClass* D1;
	D1 = nullptr;
	D1 = new MyClass();
	D1->age = 8;
	D1->name = "GermanSheperd";
	D1->placOfBirth = "Germany";
	std::cout << D1->name << " Human age :" << D1->HumanAgeCalc(MyClass::Dogsize::medium) << std::endl;


	//// Pointer to an object 
	//Player* P2 = new Player(); // Creating and Object Dynamically on heap
	//Followings are equal
	(*P2).hp = 100;
	P2->hp = 50;

}

void SetAndGet() {
	SetGetClass obj1;
	obj1.set("Adminpass");
	std::cout << "Username : " << obj1.getUsername() << std::endl;
	std::cout << "Password : " << obj1.getPassword() << std::endl;
	
	// creating objects in a scope 
	//when it ends the scope the deonstructor will be called
	{
		SetGetClass obj2("Admin2", "admin2Password");
		std::cout << "Username : " << obj2.getUsername() << std::endl;
		std::cout << "Password : " << obj2.getPassword() << std::endl;
		obj2.getPassword(); // this line is okay, object has not been destroyed yet
	}
	
	//obj2.getPassword(); // object has been destroyed , compiler error 
	SetGetClass Obj3, Obj4;
	{
		SetGetClass Obj5;
		displayActiveObjs();
	}
	displayActiveObjs(); // you can use this when you code a game, to show the active objects, player or enemies in your game

	SetGetClass* Obj6 = new SetGetClass();
	displayActiveObjs();
	delete Obj6;
	displayActiveObjs();
}

void displayActiveObjs() {
	std::cout << "Number of active objects: " << SetGetClass::GetNumObjs() << std::endl;
}

// You can define methods and variables out of the class .cpp file or .h file
bool Player::isDead()
{
	return false;
}
