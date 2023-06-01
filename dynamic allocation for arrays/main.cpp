#include <iostream>

using namespace std;
class Student
{
public:
    string name;
    int id;
    int nos;
    double* marks; /// shouldn't double marks[] in order to not to store a garbage value
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
    Student s1(name,id,nos,my_marks);///fixed size
    s1.name = name;
    s1.id = id;

    //s1.name="Ali";
    //s1.id = 1;
    //int arr[5] = {10,20,30,40,50};
    //for(int i=0;i<s1.nos;i++){
    //   s1.marks[i] = arr[i];
    //}
    cout<<"Student's name is "<<s1.name<<endl;
    cout<<"Student's ID is "<<s1.id<<endl;
    cout<<"Student's number of subjects is "<<s1.nos<<endl;
    cout<<"Student's Marks is "<<endl;
    for(int i=0;i<s1.nos;i++){
        cout<<s1.marks[i]<<" ";
    }

    return 0;
}
