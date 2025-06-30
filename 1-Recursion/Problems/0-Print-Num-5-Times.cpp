#include <iostream>
using namespace std;

void num_5_Times (int i, int n) {
    if(i > n ) return; // base Case 
    cout << "Num" << '\n';
    num_5_Times(i+1, n);
}

int main() {
    int n;
    cin >> n ;
    num_5_Times(1,n);
    return 0;
}

