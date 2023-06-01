#include <iostream>

using namespace std;
class teacher{
public:
    int age;
    string name,subject;
    teacher(){
        cout<<"in teacher constructor"<<endl;
    }
};
class fullTimeTeacher:public teacher{
private:
    int spd = 200;
public:
    double get_salary(int days){
        if(age>30){
            return spd * days;
        }else{
            return spd * days * 2;
        }

    }
};
int main()
{
    fullTimeTeacher f1,f2;
    f1.age = 20;
    f2.age = 35;
    cout<<f1.get_salary(20)<<endl;
    cout<<f2.get_salary(20)<<endl;
    return 0;
}
