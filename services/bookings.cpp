// Self-contained implementation to avoid missing header include issues.
#include "booking.hpp"
#include <ctime>

// Template implementation for Train
template <>
void BookingService<Train>::book(string entityId, User user, string name, string source, string destination) {
    Train train;
    train.trainId = entityId;
    train.name = name;
    train.source = source;
    train.destination = destination;
    train.time = time(nullptr);
    train.seats = {{user}};
    
    saveBooking(train);
}

template <>
void BookingService<Train>::cancelBooking(string entityId, string userId) {
    // Implementation for cancel booking
}

template <>
void BookingService<Train>::printBooking(string entityId, string userId) {
    // Implementation for print booking
}

template <>
void BookingService<Train>::saveBooking(Train entity) {
    FileIO<Train> file;
    file.saveToFile(entity);
}