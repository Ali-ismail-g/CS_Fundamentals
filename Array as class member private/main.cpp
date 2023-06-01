#include <iostream>

using namespace std;
class Student
{
private:
    string name;
    int id;
    int nos;
    double* marks; /// shouldn't double marks[] in order to not to store a garbage value
public:
    Student()
    {

    }
    Student(int n)
    {
        nos = n;
        marks = new double[nos];///pointer
    }
    Student(string s,int i,int n,double* m) ///obj must be identified from parameterized constructor not in main function
    {
        name = s;
        id = i;
        nos = n;
        marks = new double[nos]; ///reserve places for pointer don't equal pointer to pointer marks = m that's wrong
        for(int i=0;i<nos;i++){ /// transfer from array in main to array of marks
            marks[i] = m[i];
        }
    }
    void set_name(string s){
        name = s;
    }
    void set_id(int i){
        id = i;
    }
    void set_nos(int n){
        nos = n;
    }
    void set_marks(int n,double* m){
        nos = n;
        marks = new double[nos];
        for(int i=0;i<nos;i++){
            marks[i] = m[i];
        }
    }
    int get_id(){
        return id;
    }
    string get_name(){
        return name;
    }
    int get_nos(){
        return nos;
    }
    double* get_marks(){
        return marks;
    }
    ~Student()
    {
        delete [] marks;
    }
};
int main()
{
    string name;
    int id,nos;
    cout<<"Enter Student's name ,id & number of subjects "<<endl;
    cin>>name>>id>>nos;
    double my_marks[nos];
    cout<<"Enter Student's marks "<<endl;
    for(int i=0;i<nos;i++){
        cin>>my_marks[i];
    }
    Student s1;
    s1.set_name(name);
    s1.set_id(id);
    s1.set_nos(nos);
    s1.set_marks(nos,my_marks);

    cout<<"Student's name is "<<s1.get_name()<<endl;
    cout<<"Student's ID is "<<s1.get_id()<<endl;
    cout<<"Student's number of subjects is "<<s1.get_nos()<<endl;
    cout<<"Student's Marks is "<<endl;
    double* m = s1.get_marks(); ///return pointer
    for(int i=0;i<s1.get_nos();i++){
        cout<<m[i]<<" ";
    }

    return 0;
}
