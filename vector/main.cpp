#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(3);
    for(int i=0;i <3;i++){
        cin>>v[i];
    }
    v.push_back(4);
    for(int i=0;i <4;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
