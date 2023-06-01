#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(){}

Student::Student(string n,int i){
    name = n;
    id = i;
}

Student::~Student(){}

void Student::set_name(string n){
    name = n;
}

void Student::set_int(int i){
    id = i;
}

string Student::get_name(){
    return name;
}

int Student::get_id(){
    return id;
}

