#include <iostream>
using namespace std;

void Print_1_to_N_Backtrack(int i, int n)
{
    // Base case
    if (i > n)
        return;
    Print_1_to_N_Backtrack(i + 1, n);
    cout << i << endl;
}

int main()
{
    Print_1_to_N_Backtrack(1, 5);
    return 0;
}
