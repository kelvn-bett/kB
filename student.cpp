#include <iostream>
#include <string>
#include "student.h"



int main() {
	struct student stud;

	std::cout << "What is the student's name & ID?: ";
	std::cin >> stud.name >> stud.id;
	std::cout << "Grades: assignments midterm fin: ";
	std::cin >> stud.assig >> stud.midt >> stud.fin;
	std::cout << "Name: " << stud.name << std::endl
		<< "Student ID: " << stud.id << std::endl
		<< "Grade: "
		<< (stud.midt + stud.fin + stud.assig)
		<< std::endl;

	return 0;
}
