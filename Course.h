//
// Created by khalo on 11/11/2025.
//

#ifndef COURSE_H
#define COURSE_H


#include<string>
#include<iostream>

#include "Student.h"
using namespace std;
class Course {
private:
    string CourseCode;
    string CourseName;
    int maxStudents;
    Student* students;
    int currentStudents;
public:
    Course();
    Course(string CourseCode, string CourseName,int maxStudents);
    void addStudent(const Student& student);
    void displayCourseInfo();
    ~Course();
};



#endif 
