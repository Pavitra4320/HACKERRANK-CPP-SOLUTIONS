#include <iostream>
#include <string.h>
#include<stdio.h>
using namespace std;

int main() {
    // Complete the program
    char a[1000],b[1000],c[2000],t;
    cin.getline(a,1000);
    cin.getline(b,1000);
    cout<<strlen(a)<<" "<<strlen(b)<<endl;
    strcpy(c,a);
    strcat(c,b);
    cout<<c<<endl;
    t=a[0];
    a[0]=b[0];
    b[0]=t;
    cout<<a<<" "<<b<<endl;
    return 0;
}
