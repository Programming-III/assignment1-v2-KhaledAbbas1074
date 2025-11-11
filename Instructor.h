

#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include<iostream>
#include "Person.h"
using namespace std;
#include<string>
class Instructor:public Person{
private:
    string department;
    int experienceYears;

public:
    Instructor();
    void display();
    string getDepartment();
    int getExperienceYears();
    Instructor(string name,int id,string department, int experienceYears);

};



#endif 
