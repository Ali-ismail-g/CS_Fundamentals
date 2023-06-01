#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main()
{

    int ar[3][3] = {{1,2,3},
                    {4,5,6},
                    {7,8,9}};
/*int r,c,temp,x,y;
cin >> r >> c;
int arr[r][c];
for(int i =0;i < r;i++){
    for(int j =0;j < c;j++){
        cin >> arr[i][j];
    }
    cout << endl;
}
    int r1,r2;
    cin >> r1 >> r2;
    r1--;
    r2--;
    for(int j =0;j < c;j++){
        temp = arr[r1][j];
        arr[r1][j] = arr[r2][j];
        arr[r2][j] = temp;
    }
for(int i =0;i < r;i++){
    for(int j =0;j < c;j++){
        cout << arr[i][j];
    }
    cout << endl;
}*/
int r1,c1;
cin >> r1 >> c1;
int arr[r1][c1];
for(int i = 0;i < r1;i++){
    for(int j = 0;j < c1;j++){
        cin>>arr[i][j];
    }
    cout << endl;
}

int r2,c2;
cin >> r2 >> c2;
int arr[r2][c2];
for(int i = 0;i < r2;i++){
    for(int j = 0;j < c2;j++){
        cin>>arr[i][j];
    }
    cout << endl;
}

int r3 = r2 = r1;
int c3 = c2 = c1;
int arr[r3][c3];

for(int i = 0;i < r3;i++){
    for(int j = 0;j < c3;j++){
        cout<<arr[i][j] << " ";
    }
    cout << endl;
}
//sum 2 matrix in a new 2D_array
//reverse rows with columns

    return 0;
}
