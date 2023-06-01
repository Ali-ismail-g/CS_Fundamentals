#include <iostream>

using namespace std;

int main()
{
    int num1;
    long long num2;
    char c;
    float num3;
    double num4;
    cin>> num1;
    cin >>num2,
    cin>>c;
    cin>>num3;
    cin>>num4;
    cout << num1 << endl<<num2 <<endl <<c <<endl<<num3<<endl;
    cout << fixed << setprecision(4) << num4<<endl;
    return 0;
}
