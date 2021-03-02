#include <iostream>

using namespace std;

int main()
{
    int n=5;
    int m=n;
    cout << m;
    m=10;
    cout << m+n;
    int &x=n;
    x=10;
    cout << x+n;
    int *p = &n;
    *p=20;
    cout << (*p)+n;
    return 0;
}
