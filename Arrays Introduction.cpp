#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a[10000],n,i;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    int b[10000],k=n-1;
    for(i=0;i<n;i++)
    {
        b[i]=a[k];
        cout<<b[i]<<" ";
        k--;
    }
    return 0;
}
