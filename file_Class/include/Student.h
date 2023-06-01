#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student
{
private:
    string name;
    int id;
public:
    Student();
    Student(string n,int i);
    ~Student();
    void set_name(string n);
    void set_int(int i);
    string get_name();
    int get_id();

};

#endif // STUDENT_H
