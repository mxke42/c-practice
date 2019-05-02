#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* enter two integers a, b where b>=a. Program will print this range of integers: 1-9 as their number
     and odd/even for numbers > 9... ex. 9,12 --> nine, even, odd, even */
    //int x,y;
    int x;
    int y;
    cin >> x >> y;

    for (x=x,y=y; x!=(y+1); x++)
    {

        if (x == 1)
                   cout << "one\n";
        else if (x == 2)
        cout << "two\n";
        else if (x == 3)
        cout << "three\n";
        else if (x == 4)
        cout << "four\n";
        else if (x == 5)
        cout << "five\n";
        else if (x == 6)
        cout << "six\n";
        else if (x == 7)
        cout << "seven\n";
        else if (x == 8)
        cout << "eight\n";
        else if (x == 9)
        cout << "nine\n";
        else if (x > 9)
        { if (x%2 == 0)
            cout << "even\n";
            else if (x%2 > 0)
            cout << "odd\n";}
    }
//        }
    
    //cout << x << y;
    return 0;
}

