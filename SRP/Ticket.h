#ifndef TICKET_H
#define TICKET_H

#include <string>
#include <iostream>


class Ticket {
public:
    std::string passengerName;
    std::string destination;
    double price;

    Ticket(const std::string& name, const std::string& dest, double price)
        : passengerName(name), destination(dest), price(price) {}
};

#endif