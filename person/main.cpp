#include <iostream>
int INT_MAX = 1000;
using namespace std;
class Person{
private:
    string name;
    int age;
    static int minimum_age;
    static string person_name;
public:
    Person(){

    }
    Person(string n,int a){ //HERE WE HAVE TO CALL LOGIC WHEN AN OBJECT IS CREATED
        name = n;
        age = a;
        if(minimum_age > age){
            minimum_age = age;
            person_name = name;
        }
    }
    void set_name(string n){
        name = n;
    }
    void set_age(int m){
        age = m;
        if(minimum_age > age){
            minimum_age = age;
            person_name = name;
        }
    }
    int get_age(){
        return age;
    }

    static int get_min_age(){
        return minimum_age;
    }
    static string get_person_name(){
        return person_name;
    }
};
int Person::minimum_age = INT_MAX;
string Person::person_name = "";
int main()
{
    Person p1("ali",28);
    Person p2("ahmed",14);
    Person p3("omar",19);
    Person p4("mohmd",20);
    Person p5("zizo",12);
    Person p6("saeed",2);
    cout << Person::get_min_age() << endl;
    cout << Person::get_person_name() << endl;
    //exercise bring the name of the lowest age
    return 0;
}
