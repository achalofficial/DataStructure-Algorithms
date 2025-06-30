#include <iostream>
using namespace std;

void Print_Linearly_N_to_1(int n)
{
    // Base Case
    if (n < 1)
        return;
    cout << n;
    Print_Linearly_N_to_1(n - 1);
}

int main()
{
    Print_Linearly_N_to_1(8);
    return 0;
}
