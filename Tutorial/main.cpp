#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// install code blocks version 17.12
void evenOrOdd(int n){
    if(n % 2 == 0){
        cout << n << " is an even number!";
    }else if(n % 2 != 0){
        cout << n << " is an odd number!";
    }
}
void posOrNeg(int n){
    if(n > 0){
        cout << n << " is a positive number!";
    }else if(n < 0){
        cout << n << " is a negative number!";
    }else if(n==0){
        cout << n << " is a zero!";
    }
}
int maxx(int x,int y){
    if(x > y){
        cout << "the max value is: ";
        return x;
    }
    else if(y > x){
        cout << "the max value is: ";
        return y;
    }
}
int minn(int x,int y){
    if(x < y){
        cout << "the min value is: ";
        return x;
    }
    else if(y < x){
        cout << "the min value is: ";
        return y;
    }
}
int main()
{
    cout << "Hello\n Ali!" << endl << "welcome to the game!" << endl;   //search for the performance \t -> four spaces vs endl & \n;
    cout << "  *\n\n ***\n\n*****" << endl;
    int car_price = 5e5;
    cout <<"my car price is: "<< car_price << endl << "\n";
    short milk_price = 20;
    cout << "the milk price available now at store is: " << milk_price <<  endl <<"\n";
    float package_price = 18.44;
    cout << "the price of the package is: " << package_price << endl <<"\n";  //search for overflow when data is oversize the variable;

    //over flow example
    int carPrice = 5e12;
    cout << "overflow of car price: " << carPrice << endl << "\n";
    //search for how to print n of numbers after decimal point 5.2223
    //search more for type casting => (int)char

    string first_name = "ali";
    string last_name = "Ismail";
    cout << "my name is: " << first_name + " " +last_name<<endl<< "\n";
    string address = "El Mohandesen";
    cout << "I live in " << address <<endl<< "\n";
    short age = 28;
    cout << "I am "<<age <<" years old" <<endl<< "\n";

    float pen = 2.25,pencil_case = 10.75,book = 15.50;
    float sum = pen + pencil_case + book;
    cout << "total price is: " << sum <<endl<<"\n";

    cout << 1452 % 10<<endl; //using %10 to print always the first digit of the number
    //search for positifix and prefix

    //to avoid multiplication overflow use type casting or one of the two number must be long (the number should be long that are used in the operation)

    //double is more accurate in calculations than float



    /*int num;
    cin>> num;
    if(num > 0){
        cout << "positive\n";
        if(!(num%2)){
            cout << "even\n";
        }else if(num%2){
            cout<<"odd\n";
        }
    }else if(num < 0){
            cout << "negative\n";
        if(!(num%2)){
            cout << "even\n";
        }else if(num%2){
            cout<<"odd\n";
        }
    }else{
            cout << "zero\n";
    }*/

    // in if condition once a condition return true,C++ won't test any other conditions even if returns also true.
    //in if condition if I will write only one line so there is no need for curly brackets.

//if(cout << "ali\n"){ //whatever inside if condition will be executed without ;

//}

  //  int no; cin >> no;
   // cout <<((no>0)?"positive":(no<0)?"negative":"zero");

/*for(int i = 0 ;i <= 10 ;i++ ){
    if(i%2 == 0)
        cout << i << " is an even number"<< endl;

}
for(int i = 0;i<=10;i += 2)
        cout << i << " is an even number"<< endl;
        int n;
        cout <<"enter number of n: ";
        cin >> n;
for(int i = 1;i<=j;i++){
    if(i%3 == 0)
        cout << i << " can be divided over 3"<< endl;
}*/

   /* int num,input,summ=0;
cin>>num;
for(int i = 0;i < num ;i++){
    cin>>input;
    summ += input;
}
cout << "price of all books: "<< summ<< endl; */


for(int i = 1 ; i <= 2 ; i++){
    for(int j = 1;j <= 4;j++){
        cout << " * ";
    }
    cout << endl;
}
cout << endl;
for(int i = 1 ; i <= 4 ;i++){
    for(int j = 1;j <= i;j++){
        cout << " * ";
    }
    cout << endl;
}
cout << endl;
for(int i = 1; i<=4 ; i++){
    for(int j = 4;j >= i;j--){
        cout << " * ";
    }
    cout << endl;
}
cout << endl;
int stars = 1;
for(int i = 1;i <= 4 ;i++){
    for(int j = 3;j >= i ;j--){
        cout<< "  " ;
    }
    for(int k = 1 ;k <= stars;k++){
        cout << "* ";
    }
    stars+=2;
    cout<<endl;

}


/*int i = 1;
while(i <= 4){
    int j = 1;
    cout << "week "<< i << endl;
    while(j <= 7){
        cout << "Day " << j << endl;
        j++;
    }
    cout << "----------" << endl;
    i++;
}*/

char names[10] = {'a','l','i','e','s','m','a','e','i','l'};
int size = sizeof(names)/sizeof(names[0]);
for(int i=0;i < size;i++){
    cout << names[i]<<" ";
}
cout<<endl;

/*int arr[5] = {15,61,90,8,21};
for(int j = 0;j < 5;j++){
    if(arr[j] % 3 == 0){
        cout << arr[j] << " ";
    }
}*/
cout<<endl;
/*int n,summm=0,minimum,x;
cin >> n;
int numbers[n];
for(int i =0;i < n;i++){
    cin>>numbers[i];
    //summm += numbers[i];
}*/
/*minimum = numbers[0];
for(int i = 0;i < n;i++){
    if(numbers[i] < minimum){
        minimum = numbers[i];
    }
}
cout<<minimum;*/

cout<<endl;
/*cin>> x;
for(int i = 0;i < n ;i++){
    if(numbers[i] == x){
        cout <<i;
        return 0;
    }
}
cout << -1; */
//sort(numbers, numbers+n); // check it again
/*for(int i = 0;i < n;i++){
    cout << "sorted array is: " << numbers[i] << " ";
}*/
//sort(name of arr,name of array + size)
//ASCII code of null character is space
//string myname;
//getline(cin,myname); //null character is enter not space in case if I use getline
//cout << myname;

/*string nuber = "123568244";
int summmation = 0;
int sizes = nuber.length();
for(int i =0;i < sizes ;i++)
{
    int even = nuber[i] - '0';
    if(even % 2 == 0){
        cout << nuber[i];
        summmation += nuber[i];
    }
}
cout << summmation; */
//---------------------------------------------------
/*cout << endl;
int ar[3][3] = {{1,2,3},
                {4,5,6},
                {7,8,9}};
int r,c,temp,x,y;
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
    } */

//sum 2 matrix in a new 2D_array
//reverse rows with columns

//----------------------------------------------------------

/*int x;
cin >> x;
evenOrOdd(x);
cout << endl;
posOrNeg(x);
//--------------apply for with two counters on check if string is palindrome
cout << endl;
int n1,n2;
cin >> n1 >> n2;
cout << maxx(n1,n2);
cout << endl;
cout << minn(n1,n2);
    return 0;*/

//-------------------
double x = 2.44;
cout << x << " " << &x;
cout << endl;
double* ptX = &x;
cout << *ptX << " " << ptX;
cout << endl;

//------------------------------------




}
