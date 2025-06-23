#include <iostream>
using namespace std;

void Print_Linearly_1_to_N(int i , int n){
    // Base Case 
    if(i > n) return ;

    cout << i;
    Print_Linearly_1_to_N(i+1,n);
}

int main() {
    int n = 0 ;
    cin >> n ;
    Print_Linearly_1_to_N(1,n);
    return 0;
}

