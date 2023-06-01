#include <iostream>

using namespace std;

int main()
{
    int* ptnum = new int;
    *ptnum = 7;
    cout<<*ptnum<<endl;
    delete ptnum;
    return 0;
}
