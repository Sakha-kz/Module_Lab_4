#ifndef TICKETCALCULATOR_H
#define TICKETCALCULATOR_H

#include "Ticket.h"

class TicketCalculator {
public:
    double CalculatePrice(const Ticket& ticket) const {
        return ticket.price;
    }
};

#endif