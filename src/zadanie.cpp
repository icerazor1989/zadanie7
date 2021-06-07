#include <ctime>
#include <iostream>

using namespace std;

#define HEIGHT 3
#define WIDTH 4

int main()
{
    srand(time(NULL));
    int n = 0, i = 0, j = 0;

    cout << "Enter  columns and rows: ";
    cin >> n;
    int** a = new int* [n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i] = new int[n];
        }
    }
    cout << " The  matrix \n" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand() % 20;

            cout << "\t" << a[i][j];
        }
        cout << "\n\n";

    }
    *(*(a + i) + j) = a[HEIGHT][WIDTH];
    cout << "number of element  " << a[i][j];

    for (int i = 0; i < n; i++)
    {
        delete[]a[i];
    }
    delete[] a;
    return 0;
}
