#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include "Person.h"
using namespace std;
#include<string>

class Student:public Person{
private:
    int yearLevel;
    string major;
public:
    Student();
    Student(string name,string major,int id,int yearLevel);
    int getYearLevel();
    string getMajor();
    void display();
    ~Student();



};



#endif
