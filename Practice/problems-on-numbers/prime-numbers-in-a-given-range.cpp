// Problem Statement: Given a and b, find prime numbers in a given range [a,b], (a and b are included here).

#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{

    if (n == 1 || n == 0)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = a; i < b; i++)
        if (isPrime(i))
            cout << i << " ";

    return 0;
}