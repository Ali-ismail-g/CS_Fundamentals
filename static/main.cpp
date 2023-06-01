#include <iostream>

using namespace std;
class Student{
private:
    string name;
    int id;
    static int level;
public:
    Student(){
        level++;  //level will increase by one after creating each object and as level is static so the final value will dominate among all objects
    }
    static int get_level(){ //no need to create objects for level value
        return level;
    }
    void set_level(int l){
        level = l;
    }
};
int Student::level = 0; //all objects will get the same value for level
int main()
{
    Student st1,st2;
    cout<<Student::get_level()<<endl;
    return 0;
}
