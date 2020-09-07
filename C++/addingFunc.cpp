#include<iostream>
#include<stdio.h>

using namespace std;    //But this has to be used.

int main(){
    int x=2, y=1, z=9;
    x=x&&y||z;
    
    cout<<x;
    cout<<x|| !y&&z;
    x=y=1;
    z=x++-1;
    cout<<x;
    cout<<z;
    z+=-x++ + ++y;
    cout<<x;
    cout<<z;
    //getch();   <------ this doesnt have to be used with latest compilers like MinGW. cool?great!!!! u r saviour haha. thankds. byebye
}
