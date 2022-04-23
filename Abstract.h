#pragma once

#include <iostream>

class Human
{
protected:
	std::string surname;
	std::string name;
	std::string midname;
	int age;
public:
	Human();
	Human(std::string, std::string, std::string, int);
	virtual void print() = 0;
	virtual ~Human();
};

class Student : public Human
{
protected:
	bool on_lesson;
public:
	Student();
	Student(std::string, std::string, std::string, int, bool);
	void print();
	~Student();
};

class Boss : public Human
{
protected:
	int number_of_workers;
public:
	Boss();
	Boss(std::string, std::string, std::string, int, int);
	void print();
	~Boss();
};