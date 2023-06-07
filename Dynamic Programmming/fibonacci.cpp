#include <iostream>
using namespace std;
int fibo(int n)
{
    int fib[n + 2];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib[n];
}
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    cout << fibo(n);
}