#include <iostream>
//#include <Student.h>
using namespace std;

int main()
{
   // Student s;
    //s.set_int(15);
    //cout<<s.get_id()<<endl;
    int* ptnum = new int;
    *ptnum = 7;
    cout << *ptnum << endl;
    delete ptnum;
    int* arr = new int[3];
    for(int i = 0;i < 3;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<3;i++){
        cout << arr[i] << " ";
    }

    delete [] arr; // range of array that was reserved in memory
    return 0;
}
