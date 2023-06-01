#include <iostream>

using namespace std;
class Student{
public:
    string name;
    int id;
};
int main()
{
    Student* st = new Student;
    st->name = "ali";
    st->id = 2;
    (*st).name = "ahmed";
    (*st).id = 20;
    cout << st->name <<" "<<st->id<<" ";
    delete st;
    return 0;
}
