#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  /* enter integer between 1-infinity, return written value of number if 1-9, or
   * "greater than 9" */
  /* Input consists of the following space-separated values: int, long,
    char, float, double */
  // string nums = 'one', 'two', 'three', 'four', 'five', 'six', 'seven',
  // 'eight', 'nine'; const char greater9 = "greater than nine";
  int x;
  cin >> x;
  if (x == 1) {
    cout << "one";
  } else if (x == 2) {
    cout << "two";
  } else if (x == 3) {
    cout << "three";
  } else if (x == 4) {
    cout << "four";
  } else if (x == 5) {
    cout << "five";
  } else if (x == 6) {
    cout << "six";
  } else if (x == 7) {
    cout << "seven";
  } else if (x == 8) {
    cout << "eight";
  } else if (x == 9) {
    cout << "nine";
  } else if (x > 9) {
    cout << "Greater than 9";
  }

  return 0;
}
