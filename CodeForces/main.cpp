#include <bits/c++config.h>
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int minn=INT_MAX;
    int maxx=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        minn = min(minn,arr[i]);
        maxx = max(maxx,arr[i]);
    }

    int indexMin=0,indexMax=0;
    for(int i=0;i<n;i++){
        if(arr[i]==minn){
            //minn = arr[i];
            indexMin = i;
        }else if(arr[i]==maxx){
            //maxx = arr[i];
            indexMax = i;
        }
    }
    int temp = arr[indexMax];
        arr[indexMax] = arr[indexMin];
        arr[indexMin] = temp;

    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }

    return 0;
}
