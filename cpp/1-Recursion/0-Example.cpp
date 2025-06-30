#include <iostream>
using namespace std;

int count = 0 ;

void recursion () {
    if(::count == 9 ) return ; // Base Case 
    ::count++;
    cout << ::count ;
    recursion(); // recursive call
}

int main() {
    cout << "Hello, DSA World!" << endl;
    recursion();
    return 0;
}

