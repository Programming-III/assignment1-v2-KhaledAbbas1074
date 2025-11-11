#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"
//Person
Person::Person() {
    this->name = "";
    this->id = 0;
}
Person::Person(string name, int id) {
    this->name = name;
    this->id = id;

}
int Person::getId() {
    return this->id;
}
string Person::getName() {
    return this->name;
}
Person::~Person() {

}

void Person::display() {
    cout << "Name: " << this->name << endl;
    cout << "ID: " << this->id << endl;
}

//Student
Student::Student() {
    this-> yearLevel=0;
    this->major="NAN";
}
Student::Student(string name, string major, int id, int yearLevel) :Person(name, id) {
    this->major = major;
    this->yearLevel = yearLevel;
}
int Student::getYearLevel() {
    return this->yearLevel;
}
string Student::getMajor() {
    return this->major;
}
void Student::display() {
    cout<<"Student info:"<<endl;
    cout<<"Name:"<<this->getName()<<endl;
    cout << "Year: " << this->yearLevel << endl;
    cout << "Major: " << this->major << endl;
}
Student::~Student() {

}
//Instructor
Instructor::Instructor() {
    this->department="NAN";
    this->experienceYears=0;
}
Instructor::Instructor(string name, int id, string department, int experienceYears):Person(name,id){
    this->department = department;
    this->experienceYears = experienceYears;
}
void Instructor::display() {
    cout<<"Instructor info:"<<endl;
    cout<<"Name:"<<this->getName()<<endl;
    cout<<"Department: "<<this->department<<endl;
    cout<<"Experience: "<<this->experienceYears<<" years"<<endl;
}
string Instructor::getDepartment() {
    return this->department;
}
int Instructor::getExperienceYears() {
    return this->experienceYears;
}
Instructor::~Instructor() {

}
//Course
Course::Course() {
    this->CourseCode="NAN";
    this->CourseName="NAN";
    this->currentStudents=0;
    this->maxStudents=0;
    this->students=new Student[0];
}
Course::Course(string CourseCode, string CourseName, int maxStudents) {
    this->CourseCode = CourseCode;
    this->CourseName = CourseName;
    this->maxStudents = maxStudents;
    this->students=new Student[maxStudents];
    this->currentStudents = 0;
}
void Course::addStudent(const Student &student) {
    if(this->currentStudents < this->maxStudents) {
        this->students[this->currentStudents] = student;
        this->currentStudents++;
    }
    else {
        cout<<"course full"<<endl;
    }

}
void Course::displayCourseInfo() {
    cout<<"Course:"<<this->CourseCode<<"-"<<this->CourseName<<endl;
    cout<<"Max Students: "<<this->maxStudents<<endl;
    cout<<"Currently enrolled: ";
    for(int i = 0; i < this->currentStudents; i++) {
        cout<<this->students[i].getName()<<" ("<<this->students[i].getId()<<")"<<endl;
    }
    cout<<endl;

}
Course::~Course() {
    delete[] this->students;
}

int main() {
    Course course("CS101","Introduction to Programming",3);
    Student omar("Omar Nabil","Informatics",2202,2);
    course.addStudent(omar);
    course.displayCourseInfo();
    Instructor lina("Dr.Lina Khaled",1002,"Computer Science",5);
    lina.display();
    omar.display();
    return 0;

}
