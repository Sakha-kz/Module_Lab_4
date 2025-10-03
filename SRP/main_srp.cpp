#include <iostream>
#include "Ticket.h"
#include "TicketCalculator.h"
#include "TicketRepository.h"

int main() {
    std::string name, destination;
    double basePrice;

    std::cout << "Введите имя пассажира: ";
    std::getline(std::cin, name);

    std::cout << "Введите пункт назначения: ";
    std::getline(std::cin, destination);

    std::cout << "Введите базовую цену: ";
    std::cin >> basePrice;

    Ticket ticket(name, destination, basePrice);
    TicketCalculator calculator;
    TicketRepository repository;

    double totalPrice = calculator.CalculatePrice(ticket);
    std::cout << "Итоговая цена билета: " << totalPrice << " тенге\n";

    repository.Save(ticket);

    return 0;
}