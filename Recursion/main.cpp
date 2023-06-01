#include <iostream>

using namespace std;
///Recursion or Recursive function

void fun(int n){
    if(n<1){ ///base case
        return;
    }
    cout<<"n: "<<n<<endl;
    fun(n-1); ///statement of tree or recursive statement
}
///fact
int fact(int n){
    if(n==1) {
    return 1;
    }
    return n*fact(n-1);
}
///fib-> take index as params

///sum
int sum(int n){
    if(n==0) {
    return 0;
    }
    return n+sum(n-1);
}
///sum_Range
int sum_range(int start,int e){ ///4 5 6
    if(start > e){
        return 0;
    }
    return start+ sum_range(start+1,e);
}
///print_numbers
void print(int n){
    if(n==0)return;
    cout<<n%10<<" ";
    print(n/=10);
}

void insertion(int arr[],int n){
    for(int i=1;i<n;i++){
            int j = i-1;
        int temp = arr[i];
        while(j>=0&&arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
void recursive_insertion(int arr[],int n){ /// recursion method
    for(int i=1;i<n;i++){
        int j = i-1;
        int temp = arr[i];
        if(j<0){
            return;
        }

    }

}
int main()
{
   // int n;cin>>n;
    //fun(n);
    //cout<<sum(n);
    cout<<fact(5);
    //cout<<sum_range(4,6); ///15
    //print(12345);
   /* int arr[5]={1,5,6,2,9};
    insertion(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }*/
    return 0;
}
