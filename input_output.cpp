#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // takes three numbers #1 #2 #3 and returns the sum.
    int sum[3]; //declares string for 3 integers

    cin >> sum[0] >> sum[1] >> sum[2];
    int x = sum[0]+sum[1]+sum[2];
    cout << x;
    return 0;
}

