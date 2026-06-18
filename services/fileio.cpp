#include "fileio.hpp"

using namespace std;

// Minimal, compile-safe implementations that serialize to simple text files.
// Vehicle records go to "vehicle_db.txt" and Train records go to "train_db.txt".

template<>
void FileIO<Vehicle>::saveToFile(Vehicle entity) {
    ofstream out("vehicle_db.txt", ios::app);
    if (!out.is_open()) return;
    out << entity.train_number << "," << entity.train_name << "," << entity.source << "," << entity.destination << "," << entity.departure_time << "," << entity.arrival_time << "," << entity.total_seats << "," << entity.available_seats << "\n";
    out.close();
}

template<>
vector<Vehicle> FileIO<Vehicle>::readFromFile() {
    vector<Vehicle> vehicles;
    ifstream in("vehicle_db.txt");
    if (!in.is_open()) return vehicles;
    string line;
    while (getline(in, line)) {
        // very simple CSV parsing
        vector<string> parts;
        size_t pos = 0;
        while (true) {
            size_t comma = line.find(',', pos);
            if (comma == string::npos) { parts.push_back(line.substr(pos)); break; }
            parts.push_back(line.substr(pos, comma - pos));
            pos = comma + 1;
        }
        if (parts.size() >= 8) {
            int number = stoi(parts[0]);
            string name = parts[1];
            string src = parts[2];
            string dest = parts[3];
            string dep = parts[4];
            string arr = parts[5];
            int seats = stoi(parts[6]);
            Vehicle v(number, name, src, dest, dep, arr, seats);
            v.available_seats = stoi(parts[7]);
            vehicles.push_back(v);
        }
    }
    in.close();
    return vehicles;
}

// ================= TRAIN =================

template<>
void FileIO<Train>::saveToFile(Train entity) {
    ofstream out("train_db.txt", ios::app);
    if (!out.is_open()) return;
    out << entity.trainId << "," << entity.name << "," << entity.source << "," << entity.destination << "," << entity.time << "\n";
    // seats are not serialized in this minimal implementation
    out.close();
}

template<>
vector<Train> FileIO<Train>::readFromFile() {
    vector<Train> trains;
    ifstream in("train_db.txt");
    if (!in.is_open()) return trains;
    string line;
    while (getline(in, line)) {
        vector<string> parts;
        size_t pos = 0;
        while (true) {
            size_t comma = line.find(',', pos);
            if (comma == string::npos) { parts.push_back(line.substr(pos)); break; }
            parts.push_back(line.substr(pos, comma - pos));
            pos = comma + 1;
        }
        if (parts.size() >= 5) {
            Train t;
            t.trainId = parts[0];
            t.name = parts[1];
            t.source = parts[2];
            t.destination = parts[3];
            // time stored as string here; leave as 0
            t.time = 0;
            trains.push_back(t);
        }
    }
    in.close();
    return trains;
}

// Explicit template instantiations
template class FileIO<Vehicle>;
template class FileIO<Train>;