// SerializationJSON.cpp: определяет точку входа для приложения.
//

#include "SerializationJSON.h"
#include <iostream>
#include "string"
#include "fstream"
#include "nlohmann/json.hpp"

using namespace std;

struct Record {
    string name;
    string famaly;
    int age;
    bool married;
};

int main() {
    Record record;
//    cin >> record.name >> record.famaly >> record.age >> record.married;
//    ofstream file("record.json");


//Записать в файл

    //способ 1

//    nlohmann::json dict;
//    dict["name"] = record.name;
//    dict["family"] = record.famaly;
//    dict["age"] = record.age;
//    dict["married"] = record.married;

    //способ 2

//    nlohmann::json dict = {
//            {"name", record.name},
//            {"family", record.famaly},
//            {"age", record.age},
//            {"married", record.married}
//    };

//    file << dict;

//Прочитать из файла

    ifstream file("record.json");
    nlohmann::json dict;
    file >> dict;
    record.name = dict["name"];
    record.famaly = dict["family"];
    record.age = dict["age"];
    record.married = dict["married"];
    cout << record.name << " " << record.famaly << " " << record.age << " " << record.married << endl;

    return 0;
}
