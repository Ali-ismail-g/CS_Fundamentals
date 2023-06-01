#include <iostream>

using namespace std;
class Student{
private:
    string name;
    int id;
public:
    void set_name(string n){
        name = n;
    }
    void set_id(int i){
        id = i;
    }
    string get_name(){
        return name;
    }
    int get_id(){
        return id;
    }
};
int main()
{
    Student s;
    s.set_id(1);
    s.set_name("ali");
    cout << s.get_id() << " " << s.get_name();
    return 0;
}
