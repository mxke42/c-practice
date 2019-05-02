#include <iostream>
#include <sstream>   // for combining integers with strings when printing
using namespace std;


class Hello {
    private:
    string a,b;
    public:
    void get_name(){
        cout << "enter first and last name" << endl;
        cin >> a >> b;}
    string return_name(){
        cout << "Hello Mr. " << b << ",\n" << a << " is a terrible first name." << endl;
        return 0;
    }
    
            
} hl;


   int main() {
       //Hello hl;
       hl.get_name();
       hl.return_name();
       
 }
