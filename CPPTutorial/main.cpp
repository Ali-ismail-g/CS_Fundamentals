#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int summ(int n){
    if(n==0){
        return 0;
    }
    return n+factorial(n-1);
}
int main()
{

    /*long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;

    }*/
    int* arr = new int[5];
    for(int i=0;i<5;i++){
        cin>> *(arr+i);
    }
    for(int i=0;i<5;i++){
        cout<< *(arr+i)<<" ";
    }
    delete [] arr;
    return 0;
}


//sort(s.begin(), s.end());
/*
int cnt = 0;
        int flag = 0;
        for(int i = s.length() - 1; i >= 0; i--) {
            if(flag == 0 && s[i] == ' ') {
                continue;
            }
            if(s[i] != ' ') {
                flag = 1;
                cnt++;
            } else {
                break;
            }
        }
        return cnt;
*/
/*int x = 10;
    cout << x << " " << &x << endl;
    int* ptx = &x;
    cout << *ptx << " " << ptx;*/


/*int r,c;
    cin>>r >>c;
    int sum[r][c];
    int arrA[r][c];
    for(int i = 0;i < r;i++){
        for(int j = 0;j < c;j++){
            cin>>arrA[i][j];
        }
    }
    cout << "add data for the second matrix"<<endl;
    int arrB[r][c];
    for(int i = 0;i < r;i++){
        for(int j = 0;j < c;j++){
            cin>>arrB[i][j];
        }
    }
    for(int i = 0;i < r;i++){
        for(int j = 0;j < c;j++){
            sum[i][j] =arrA[i][j] +arrB[i][j];
        }
    }

    for(int i = 0;i < r;i++){
        for(int j = 0;j < c;j++){
            cout<<sum[i][j]<<"  ";
        }
        cout<<endl;
    }*/


