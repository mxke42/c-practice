#include <iostream>
#include <stdio.h>
#include <vector>
/// program takes two strings and returns 3 lines 1) length of each string '# #' 2) combines the strings
/// 3) repeats strings with space but with first character swapped

using namespace std;
int main() {
    string a, b;
    cin >> a >> b;
    string c=a+b;
    int len_a = a.size();
    int len_b=b.size();
    cout << len_a << " " << len_b << endl;
    cout << a << " " << b << endl;
    //print first letter swapped
    cout << c << endl;
    return 0;
    
    
    
    
    }

    




