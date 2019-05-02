#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    /* Input consists of the following space-separated values: int, long,
     char, float, double */
    int one;
    long two;
    char three;
    float four;
    double five;
    scanf("%d %ld %c %f %lf", &one, &two, &three, &four, &five);
    printf("%d\n", one);
    printf("%ld\n", two);
    printf("%c\n", three);
    printf("%f\n", four);
    printf("%lf\n", five);
    
    return 0;
}

