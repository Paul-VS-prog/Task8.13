#include <iostream>
using namespace std;
void t1()
{
    int n;
    cout << "Введите длину массива: ";
    cin >> n;
    int *a;
    a = (int*) malloc(n * sizeof(int));
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int t, k = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = (n - 1); j >= (i + 1); j--)
        {
            k++;
            if (a[j] < a[j - 1])
            {
                c++;
                t= a[j];
                a[j] = a[j - 1];
                a[j - 1] = t;
            }
        }
    }
    cout << "Кол-во перестановок - " << c << endl << "Кол-во сравнений - " << k << endl;
}
void t3() {
    int n, t, k = 0, c = 0;
    cout << "Введите длину массива: ";
    cin >> n;
    int *a;
    a = (int*) malloc(n * sizeof(int));
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (a[j - 1] > a[j])
            {
                c++;
                t = a[j - 1];
                a[j - 1] = a[j];
                a[j] = t;
            }
            k++;
        }
    }
    cout << "Кол-во перестановок - " << c << endl << "Кол-во сравнений - " << k << endl;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int x = 10;
    while (x) {
        cout << "Введите цифру: 1 - пузырёк, 3 - сортировка вставками: ";
        cin >> x;
        if (x == 1) t1();
        if (x == 3) t3();
    }
    return 0;
}
