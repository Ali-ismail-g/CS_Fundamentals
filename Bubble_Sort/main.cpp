#include <iostream>

using namespace std;

int main()
{
    int n=5,cntr=0;
    int arr[n];
    int flag = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag =1;
            }
            cntr +=1;
        }

        if(flag == 0){ /// if it already sorted then break
        break;
    }
}
cout<<"no. of counter: "<<cntr<<endl;


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
