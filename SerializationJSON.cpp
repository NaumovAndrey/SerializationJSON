// SerializationJSON.cpp: определяет точку входа для приложения.
//

#include "SerializationJSON.h"
#include <iostream>
#include "string"
#include "fstream"

using namespace std;

struct Record{
    string name;
    string famaly;
    int age;
};

int main()
{
    Record record;
    cin >> record.name >> record.famaly;
    ofstream file("record.json");
    //file << "{" << "name: "<< record.name<< ", famaly: "<< record.famaly << "}" << endl;

	return 0;
}
