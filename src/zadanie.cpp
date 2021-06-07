#include <iostream>
using namespace std;

#define ARRAY_SIZE(a) \
    (sizeof(a) / sizeof(*a))

int main()
{
    int i;
    int a[20];
    for (i = 0; i < ARRAY_SIZE(a); i++) {
        a[i] = i;
        cout << a[i] << " ";
    }

    return 0;
}
