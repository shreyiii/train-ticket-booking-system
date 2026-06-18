#ifndef JSON_HPP
#define JSON_HPP

static const char train_data_json[] = R"json({
    "trains": [
        {
            "train_number": 12345,
            "train_name": "Express Train",
            "source": "City A",
            "destination": "City B",
            "departure_time": "2024-06-01 10:00",
            "arrival_time": "2024-06-01 14:00",
            "total_seats": 100,
            "available_seats": 100
        }
    ]
})json";

#endif 
