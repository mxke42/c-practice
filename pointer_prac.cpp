
#include <stdio.h>
#include <stdlib.h>



void update(int *x,int *y) {
    int c = *x + *y;
    int d = abs(*x - *y);
    *x = c;
    *y = d;
    
    // Complete this function
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    
    return 0;
}

