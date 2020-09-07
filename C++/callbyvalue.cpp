// #include<conio.h>
// #include<iostream>

// using namespace std; 

// void swap(int x, int y) {
// int a;
// a = x;
// x = y;
// y = a;
// }

// int main() {
// int a, b;
// a = 70;
// b = 80;
// cout << "a, b = "<< a <<", " << b << "\n";
// swap(a, b);
// cout << " a, b = " << a <<", " << b << "\n";
// return 0;
// }

#include <iostream>
#include <stdio.h>
using namespace std;

void avg(int ary[10]) {
    int temp;
    int a;
  
    for(int i=0;i++;i<10){
        temp+=ary[i];
    }
cout<<"b";
    a=temp/10;
    cout<<"The average of 10 marks is"<<a;
}

int main(){
    int marks[]={10,20,30,11,25,35,89,1,2,6};
    // int z;
    // cin >> z; 

    // cout<< "To enter marks press enter \n";
    // for(int i=0;i++;i<10){
    //     int temp;
    //     cout<< "Enter" << i++ << "th mark"<<marks[i];
    //     // cin>> marks[i];
    //     // marks[i]= temp;
    //     // temp=0;
    // }
    cout<<"a";
    avg(marks);
    cout<<"c";
    return 0;
}