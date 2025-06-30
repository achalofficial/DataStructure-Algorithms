#include <iostream>
using namespace std;

int Sum_Of_N_Numbers_Functional ( int i){
    if ( i == 0){
        return 0;
    }
    return i + Sum_Of_N_Numbers_Functional(i-1);

}

int main() {
    cout << Sum_Of_N_Numbers_Functional(6);
    return 0;
}

