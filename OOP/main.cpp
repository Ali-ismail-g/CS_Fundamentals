#include <iostream>

using namespace std;
class Student{
public:
    string name;
    int age;
    int price;
    string department;
    double discount;
    Student(){
        cout << "Hello student"<<endl;
    }
    Student(string s,int a,int p,string dep,double dis){
        name = s;
        age = a;
        price = p;
        department = dep;
        discount = dis;
    }
    ~Student(){
        cout <<"death of student"<<endl;
    }
    double priceAfterDiscount(double discount){
        return price - ((discount/100) *price);
    }
};
int main()
{
    Student st1;
    cout << endl;
    st1.name = "ali";
    st1.age = 20;
    st1.department = "cs";
    st1.price = 200;
    st1.discount = 20;
    cout << st1.name << " " << st1.age << " " << st1.department<<" ";
    cout << st1.priceAfterDiscount(st1.discount);
    cout << endl;
    Student st2("ali",2,200,"cs",20);
    cout << st2.name << " " << st2.age << " " << st2.department;
    cout << endl;




    return 0;
}
