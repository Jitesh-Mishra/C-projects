#include<conio.h>
#include<iostream>

using namespace std; 

void swap(int *x, int *y) {
int a;
a = *x;
*x = *y;
*y = a;
}

int main() {
int a, b;
a = 70;
b = 80;
cout << "a, b = "<< a <<", " << b << "\n";
swap(&a, &b);
cout << " a, b = " << a <<", " << b << "\n";
return 0;
}