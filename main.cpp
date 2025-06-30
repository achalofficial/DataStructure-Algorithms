#include <iostream>
using namespace std;

int Print_Factorial_N_Functional ( int i){
    if ( i == 0){
        return 1;
    }
    return i * Print_Factorial_N_Functional(i-1);

}

int main() {
    cout << Print_Factorial_N_Functional(4);
    return 0;
}

