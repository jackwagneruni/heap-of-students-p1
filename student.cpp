#include "student.h"
#include <iostream>
#include <sstream>

Student::Student() : creditHours(0) {}

void Student::init(const std::string& studentStr) {
    std::istringstream ss(studentStr);

    // Parsing first and last name
    std::getline(ss, firstName, ',');
    std::getline(ss, lastName, ',');

    // Parsing address
    std::string street, city, state, zip;
    std::getline(ss, street, ',');
    std::getline(ss, city, ',');
    std::getline(ss, state, ',');
    std::getline(ss, zip, ',');
    address.init(street, city, state, zip);  // Pass the split components to Address::init

    // Parsing dates
    std::string birthDateStr, gradDateStr;
    std::getline(ss, birthDateStr, ',');
    std::getline(ss, gradDateStr, ',');
    birthDate.init(birthDateStr);  // Initialize birth date
    gradDate.init(gradDateStr);    // Initialize graduation date

    // Parsing credit hours
    ss >> creditHours;
}

void Student::printStudent() const {
    // Print student's full name
    std::cout << firstName << " " << lastName << std::endl;

    // Print address
    address.printAddress();

    // Print birth date, graduation date, and credit hours
    std::cout << "DOB: ";
    birthDate.printDate();
    std::cout << "Grad: ";
    gradDate.printDate();
    std::cout << "Credits: " << creditHours << std::endl;
}

std::string Student::getLastFirst() const {
    return lastName + ", " + firstName;
}
