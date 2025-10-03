#ifndef TICKETREPOSITORY_H
#define TICKETREPOSITORY_H

#include "Ticket.h"


class TicketRepository {
public:
    void Save(const Ticket& ticket) {
        std::cout << "Билет для " << ticket.passengerName << " в " << ticket.destination << " успешно сохранён!\n";
    }
};

#endif