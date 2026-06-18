#pragma once
#include<iostream>
#include<string>
#include<time.h>

struct Vehicle {
    int train_number;
    std::string train_name;
    std::string source;
    std::string destination;
    std::string departure_time;
    std::string arrival_time;
    int total_seats;
    int available_seats;

    // Constructor
    Vehicle(int number, const std::string& name, const std::string& src, const std::string& dest,
            const std::string& dep_time, const std::string& arr_time, int seats)
        : train_number(number), train_name(name), source(src), destination(dest),
          departure_time(dep_time), arrival_time(arr_time), total_seats(seats), available_seats(seats) {}

        Vehicle() : train_number(0), train_name(""), source(""), destination(""), departure_time(""), arrival_time(""), total_seats(0), available_seats(0) {}

    // Function to display train details
    void display() const {
        std::cout << "Train Number: " << train_number << "\n"
                  << "Train Name: " << train_name << "\n"
                  << "Source: " << source << "\n"
                  << "Destination: " << destination << "\n"
                  << "Departure Time: " << departure_time << "\n"
                  << "Arrival Time: " << arrival_time << "\n"
                  << "Total Seats: " << total_seats << "\n"
                  << "Available Seats: " << available_seats << "\n";
    }

    // Function to book a seat
    bool bookSeat() {
        if (available_seats > 0) {
            --available_seats;
            return true; // Booking successful
        }
        return false; // No seats available
    }

    // Function to cancel a booking
    bool cancelBooking() {
        if (available_seats < total_seats) {
            ++available_seats;
            return true; // Cancellation successful
        }
        return false; // No bookings to cancel
    }
};