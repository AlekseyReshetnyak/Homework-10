#include "Abstract.h"

Human::Human()
{
	surname = "";
	name = "";
	midname = "";
	age = 0;
}

Human::Human(std::string a, std::string b, std::string c, int d)
{
	surname = a;
	name = b;
	midname = c;
	age = d;
}

void Human::print()
{
	std::cout << "surname: " << surname << std::endl << "midname: " << midname << std::endl << "name: " << name << std::endl << "age: " << age;
}

Human::~Human()
{
}

Student::Student() : Human()
{
	on_lesson = false;
}

Student::Student(std::string a, std::string b, std::string c, int d, bool e) : Human(a, b, c, d)
{
	on_lesson = e;
}

void Student::print()
{
	std::cout << "surname: " << surname << std::endl << "midname: " << midname << std::endl << "name: " << name << std::endl << "age: " << age << std::endl << "on lesson? - " << on_lesson << std::endl;
}

Student::~Student()
{
}

Boss::Boss() : Human()
{
	number_of_workers = 0;
}

Boss::Boss(std::string a, std::string b, std::string c, int d, int e) : Human(a, b, c, d)
{
	number_of_workers = e;
}

void Boss::print()
{
	std::cout << "surname: " << surname << std::endl << "midname: " << midname << std::endl << "name: " << name << std::endl << "age: " << age << std::endl << "Skol'ko workerov? " << number_of_workers << std::endl;
}

Boss::~Boss()
{
}
