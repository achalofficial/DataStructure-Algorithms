#include <iostream>
using namespace std;

int count = 0 ;

int recursion () {
    if(::count == 9 ) return ::count ;
    ::count++;
    cout << ::count ;
    cout << recursion();
}

int main() {
    cout << "Hello, DSA World!" << endl;
    cout << recursion();
    return 0;
}

