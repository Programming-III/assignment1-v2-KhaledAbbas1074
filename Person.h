#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int id;
public:
    Person();
    Person(string name,int id);

    void display();
    string getName();
    int getId();
    ~Person();
};



#endif 
