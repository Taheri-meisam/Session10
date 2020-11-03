#include "MyClass.h"

int MyClass::HumanAgeCalc(MyClass::Dogsize s)
{
	switch (s)

	{
	case MyClass::Dogsize::small:
		return age * 15;
		break;
	case MyClass::Dogsize::medium:
		return age * 16;
		break;
	case MyClass::Dogsize::big:
		return age * 17;
		break;
	default:
		break;
	}
	
}
