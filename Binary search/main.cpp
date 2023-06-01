#include <iostream>

using namespace std;
int binarySearch(int arr[],int n,int value)
{
    int first = 0,last = n -1,middle,pos = -1;
    bool found = false;
    while(!found && first<=last)
    {
        middle = (first+last)/2;
        if(arr[middle] == value)
        {
            found = true;
            pos = middle;
        }
        else if(value > middle)
        {
            first = middle + 1;
        }
        else
        {
            last = middle - 1;
        }
    }
    return pos;
}
int binary_recursive(int arr[],int first,int last,int value)
{
    int middle,pos = -1;
    bool found = false;
    middle = (first+last)/2;

    if(last>first) return 0;

    if(arr[middle] == value)
    {
        pos = middle;
        return pos;
    }
    else if(arr[middle]< value)
    {
        first = middle + 1;
        return binary_recursive(arr,first,last,value);
    }
    else
    {
        last = middle - 1;
        return binary_recursive(arr,first,last,value);
    }


}
int main()
{
    const int n = 5; // size initialization
    int arr[n] = {1, 2, 3, 4, 5}; // declare array of size 10
    int value; // declare value to be searched for
    int result; // declare variable that will be returned after binary search
    int first,last;
    cout << "What value would you like to search for? "; // prompt user to enter value
    cin >> value;
    /// we have to sort an array at first
    //result = binarySearch(arr, n, value);
    int res = binary_recursive(arr,0,n-1, value);
    if(result == -1)
    {
        cout<<"Not found!!";
    }
    else
    {
        cout<<"your value is in the array!!";
    }
    return 0;
}
