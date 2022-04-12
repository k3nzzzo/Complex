#include <iostream>
#include "Complex.h"

void SortBubles(int* m, int n)
{
    cout << endl;
    setlocale(LC_ALL, "Russian");
    cout << "Массив, сортированный методом пузырьком: " << endl;
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 0; j < i; j++)
        {
            if (m[j] > m[j + 1])
            {
                int foo = m[j];
                m[j] = m[j + 1];
                m[j + 1] = foo;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << m[i] << ' ';
    }
    cout << endl;
}
void SortBubles(Complex* m, int n)
{
    cout << endl;
    setlocale(LC_ALL, "Russian");
    cout << "Массив, сортированный методом пузырьком: " << endl;
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 0; j < i; j++)
        {
            if (m[j] > m[j + 1])
            {
                Complex foo = m[j];
                m[j] = m[j + 1];
                m[j + 1] = foo;
            }
        }
    }
    for (int i = 0; i < n; i++) {
         m[i].printComplex();
         cout << " ";
    }
    cout << endl;
}
void Boom(Complex* m, const int n)
{

    for (int i = 0; i < n; i++) {
        double re = rand() % 10;
        double im = rand() % 10;
        Complex v{ re, im };
        m[i] = v;
    }
}

int main()
{
    setlocale(LC_ALL, "ru");
    int num;
    cout << "введите кол - во символов в массиве: ";
    cin >> num;
    Complex* arr = new Complex[num];
    Boom(arr, num);
    SortBubles(arr, num);
    delete[] arr;
    Complex  t, t3;
    Complex t1;
    cin >> t;
    cout << t;
    cin >> t1;
    cout << t1;
    t3 = t1 * t;
    cout << t3;
    return 0;
}

