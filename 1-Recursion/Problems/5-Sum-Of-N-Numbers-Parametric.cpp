#include <iostream>
using namespace std;

void Sum_Of_N_Numbers_Parametric ( int i, int sum){
    if ( i < 1){
        cout << sum << " ";
        return;
    }
    Sum_Of_N_Numbers_Parametric(i-1, i+sum);
}

int main() {
    Sum_Of_N_Numbers_Parametric(6,0);
    return 0;
}

