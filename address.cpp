#include "address.h"

Address::Address() : street(""), city(""), state(""), zip("") {}

void Address::init(const std::string& str, const std::string& c, const std::string& st, const std::string& z) {
    street = str;
    city = c;
    state = st;
    zip = z;
}

void Address::printAddress() const {
    std::cout << street << "\n" << city << " " << state << ", " << zip << std::endl;
}
