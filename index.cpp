#include <iostream>
#include <string>
#include <cmath>

using namespace std;

long Addim(long x, long y)
{
    long t = 1;
    long j = 1;
    while (j <= y)
    {
        t = t*x;
        j++;
    }
    return t;
}

long Say(long n, long k)
{
    if (n == 2) return k*(k - 1);
    return k*Addim(k - 1, n - 1) - Say(n - 1, k);
}

long Yoxla(long n, long k)
{
    if (n == 1) return k;
    if ((k == 1) || ((n%2 == 1) && (k == 2))) return -1;
    if ((k == 2) && (n%2 == 0)) return 2;
    return Say(n, k);
}

int main()
{
    int say = 0;
    int n,k;
    cin>>n>>k;
    cout << Yoxla(n, k) << endl;
    return 0;
}
