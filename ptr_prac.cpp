
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

//rewrite without variable y and without pointer (func_1)
// add another functoin that you pass a structure to, using similar concepts

/* write two functions, 1) one that calculates and displays 2x
 one that changes the value of x to 2x. 
 */
using namespace std;

void func_3(struct xx){
    
}


void func_1(int xx){   //functions prints 2x
    
    cout << (xx *2)<<endl; // prints 2x
    
    //return 0;
    
}

void func_2(int xx){   // updates value of x, input is a pointer
    int x = (xx*2);//storing value of 2x
    cout << x<< endl;
    
    
    
    
}
int main(){
    int x, y;
    scanf("%d", &x); //sets a value for x from the user
    //int *ptr_at_x = &x;
    func_1(x);   // prints 2x
    cout << x << endl; // prints x
    func_2(x);   // prints x as 2x in scope of function
    
    cout << x<< endl; //returning x again outside of function, will not be 2x
}
