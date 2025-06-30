#include <iostream>
using namespace std;


// Backtrack means I dont have (i+1)
// It is backtracking the recursion 
void Print_1_to_N_Backtrack (int i , int n) {
    // Base Case
    if(i < 0 ) return ;

    Print_1_to_N_Backtrack(i-1, n);
    cout << i << endl;
}

int main() {
    Print_1_to_N_Backtrack(9, 9);
    return 0;
}

