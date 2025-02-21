#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>
#include <string>

class Address {
private:
    std::string street;
    std::string city;
    std::string state;
    std::string zip;

public:
    Address(); // Constructor
    void init(const std::string& str, const std::string& c, const std::string& st, const std::string& z);
    void printAddress() const;
};

#endif // ADDRESS_H
