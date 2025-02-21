#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "address.h"
#include "date.h"

class Student {
private:
    std::string firstName;
    std::string lastName;
    Address address;
    Date birthDate;
    Date gradDate;
    int creditHours;

public:
    Student();  // Default constructor
    void init(const std::string& studentStr);
    void printStudent() const;
    std::string getLastFirst() const;
};

#endif // STUDENT_H

