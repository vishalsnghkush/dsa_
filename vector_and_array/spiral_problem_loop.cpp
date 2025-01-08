#include <iostream>
using namespace std;
int main()
{
    // spiral pattern using for loop
    // first of all before doing so i need to change the question into i and j so that it became easier to solve
    // instead of solving it like..
    // 3 3 3 3 3
    // 3 2 2 2 3
    // 3 2 1 2 3
    // 3 2 2 2 3
    // 3 3 3 3 3
    // i will solve it like
    // 1 1 1 1 1
    // 1 2 2 2 1
    // 1 2 3 2 1
    // 1 2 2 2 1
    // 1 1 1 1 1
    // so that i can use i and j to solve it;
    // anoter pattern i noticed is that till the row/col 3 the value is minimum of the i,j
    // and aftermath the value is min but after changing the value
    // of i and j to 2*n-i and 2*n-j for rows and column respectively..

    int i, j, n;
    cout << "Enter the value of n: ";
    cin >> n;
    for (i = 1; i <= 2*n -1; i++)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            int a = i;
            int b = j;
            if (a > n)
            {
                a = 2 * n - i;
            }
            if (b > n)
            {
                b = 2 * n - j;
            }
            int x=  min(a, b);
            cout << n-x+1 << " ";
        }
        cout<<endl;
    }
    return 0;
}