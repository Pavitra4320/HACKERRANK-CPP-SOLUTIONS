#include <stdio.h>
#include<cstdlib>


int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    int c=a+b;
    int d=abs(a-b);
    printf("%d\n%d", c, d);

    return 0;
}
