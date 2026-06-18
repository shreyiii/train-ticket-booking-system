# 🚆 Train Ticket Booking System

A complete **End-to-End Train Ticket Booking System** developed in **C++** using **Object-Oriented Programming (OOP)** principles, **Templates**, **STL**, and **JSON-based file persistence**. The project simulates a real-world railway reservation system, allowing users to register, search trains, book tickets, and manage passenger information through a console-based interface.

---

## 📌 Features

* User Registration and Management
* Train Information Management
* Train Search Functionality
* Ticket Booking System
* Passenger Information Handling
* Seat Reservation Management
* Persistent Data Storage using JSON
* Modular Service-Based Architecture
* File I/O Operations
* Error Handling and Input Validation

---

## 🏗️ Project Architecture

```text
Train-Ticket-Booking-System/
│
├── entities/
│   ├── user.hpp
│   ├── vehicle.hpp
│   └── train.hpp
│
├── services/
│   ├── bookings.hpp
│   ├── bookings.cpp
│   ├── fileIO.hpp
│   ├── fileIO.cpp
│   └── trainservice.hpp
│
├── external/
│   └── json.hpp
│
├── main.cpp
├── db.json
└── README.md
```

---

## 💡 Concepts Used

### Object-Oriented Programming (OOP)

* Classes and Objects
* Encapsulation
* Inheritance
* Polymorphism
* Abstraction

### Modern C++

* Templates
* STL Containers

  * Vector
  * String
* File Handling
* Exception Handling
* Generic Programming

### Data Persistence

* JSON Serialization
* JSON Deserialization
* File-Based Database Storage

---

## 🛠️ Technologies Used

* C++17
* STL (Standard Template Library)
* nlohmann/json Library
* File Handling
* JSON Data Storage

---

## 🚀 How It Works

1. User enters personal details.
2. System registers the user.
3. Available train information is loaded from JSON storage.
4. User selects a train.
5. Seat allocation is performed.
6. Booking details are saved permanently.
7. Passenger records can be retrieved later from storage.

---

## 📂 Sample Train Record

```json
{
  "trainId": "14045",
  "name": "Humsafar Express",
  "source": "Lucknow",
  "destination": "Delhi",
  "time": "10:00"
}
```

---

## ⚙️ Prerequisites

Before running the project, make sure you have:

* C++17 Compatible Compiler
* MinGW / GCC
* Git
* VS Code (Recommended)

Verify installation:

```bash
g++ --version
git --version
```

---

## 🔧 Installation & Setup

### Clone the Repository

```bash
git clone https://github.com/shreyiii/train-ticket-booking-system.git
```

### Navigate to Project Directory

```bash
cd train-ticket-booking-system
```

### Compile the Project

```bash
g++ -std=c++17 main.cpp services/bookings.cpp services/fileIO.cpp -I. -o train_booking
```

### Run the Application

#### Windows

```bash
train_booking.exe
```

#### Linux / macOS

```bash
./train_booking
```

---

## 📸 Sample Execution

```text
Enter User ID: 21169
Enter Name: Anshika
Enter Aadhar Card Number: 891792383127

Enter the option:
1. Book Train

Enter Train ID: 14045
Enter Train Name: Humsafar
Enter Source Station: Lucknow
Enter Destination Station: Delhi

Train booked successfully!
```

---

## 🎯 Learning Outcomes

Through this project, the following concepts were implemented and strengthened:

* Object-Oriented Design
* Generic Programming using Templates
* File Management in C++
* JSON Parsing and Serialization
* STL Data Structures
* Modular Software Development
* End-to-End Application Development

---

## 📈 Future Enhancements

* Seat Availability Tracking
* Ticket Cancellation
* PNR Generation
* Train Search by Source & Destination
* Admin Dashboard
* Authentication System
* Database Integration (MySQL/PostgreSQL)
* GUI Version using Qt

---

## 👨‍💻 Author

**Shrey Srivastava**

B.Tech CSE Student | C++  | Problem Solver

GitHub: https://github.com/shreyiii

---

## ⭐ Support

If you found this project useful, consider giving it a ⭐ on GitHub.
