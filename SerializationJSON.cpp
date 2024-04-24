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

struct Movie{
    string country;
    string date;
    string studio;
    string screenwriter;
    string director;
    string producer;

};

int main() {
    Record record;
    Movie movie;
//    cin >> record.name >> record.famaly >> record.age >> record.married;
//    ofstream file("record.json");
    ofstream file("movie.json");


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

    nlohmann::json _movie = {
            {"coutry", movie.country = "СССР"},
            {"date", movie.date = "1976"},
            {"studio", movie.studio = "Киностудия им. А.С. Довженко"},
            {"screenwriter", movie.screenwriter = "Евгений Оноприенко"},
            {"director", movie.director = "Леонид Быков"},
            {"producer", movie.producer = "Леонид Быков"}
    };

    nlohmann::json movie_json = {
            {"country", movie.country},
            {"date", movie.date},
            {"studio", movie.studio},
            {"screenwriter", movie.screenwriter},
            {"director", movie.director},
            {"producer", movie.producer}
    };

//    file << dict;

//Прочитать из файла

//    ifstream file("record.json");
//    nlohmann::json dict;
//    file >> dict;
//    record.name = dict["name"];
//    record.famaly = dict["family"];
//    record.age = dict["age"];
//    record.married = dict["married"];
//    cout << record.name << " " << record.famaly << " " << record.age << " " << record.married << endl;


    file << movie_json.dump(4); // отступ (dump)
    file.close();

    return 0;
}
