#include<iostream>
#include<stdio.h>
using namespace std;
// int main(){
//     using namespace std;
//     cout<<"enter length of array"<<endl;
//     int x;
//     cin>> x;
//     int arr[100];
//     for(int i=0;i<x;i++){
//         cout<<"Enter the "<<++i<<"th number of array"<<endl;
//         --i;
//         cin>>arr[i];
//     }

//     for(int i=0;i<x;i++){
//         cout<<"Value of "<<++i<<"th position is: ";
//         --i;
//         cout<<arr[i]<<endl;
//     }
// }

class A{
    public:
    int man();
    void fun(){
    cout<<"Hi Bro"<<endl;
    }
};

int A::man(){
    cout<<"Main from A"<<endl;
    return 54;
};

int main(){
    A a;
    // a.main();
    // return a.main();
    a.fun();
    a.fun();
    a.man();
    int b= a.man();
    cout<<b<<endl;
    cout<<"End of main"<<endl;
}