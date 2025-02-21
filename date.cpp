#include "date.h"
#include <sstream>

Date::Date() : month(1), day(1), year(2000) {}

void Date::init(const std::string& dateStr) {
    char delimiter = '/';
    std::stringstream ss(dateStr);
    std::string temp;

    getline(ss, temp, delimiter);
    month = std::stoi(temp);

    getline(ss, temp, delimiter);
    day = std::stoi(temp);

    getline(ss, temp, delimiter);
    year = std::stoi(temp);
}

void Date::printDate() const {
    const std::string months[12] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    std::cout << months[month - 1] << " " << day << ", " << year << std::endl;
}
