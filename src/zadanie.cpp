#include <iostream>
using namespace std;

#define NUM(k,n)  ( ( (k>=0) && (k < n) ? true : false ) )

int main()
{
    int n = 0;
    int k = 0;
    cout << " number k and two argument n " << endl;
    cin >> k >> n;

    cout << "NUM from k and n" << " " << k << " " << n << " - " << NUM(k, n) << endl;

    return 0;
}