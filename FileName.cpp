#include <iostream>

#include <conio.h>

#include <new.h>

#include <locale.h>

using namespace std;



int main()

{
    setlocale(0, "");

    int n, m, a = 0, b = 0;

    cout << " \nВвед1ть розм1рнoстi масиву n i m:\n";

    cin >> n >> m;

    cout << "\n n=" << n << "  m=" << m;

    while (a >= b)

    {        //перевірка правильності

        cout << " \n\n  Введ1ть границ1 1нтервалу a i b:\n";

        cin >> a >> b;

        cout << "\n a=" << a << " b=" << b;

    }

    int** arr = new int* [n];

    cout << "\n\n  Початковий  масив:\n";

    for (int i = 0; i < n; i++)

    {
        arr[i] = new int[m];

        cout << "\n";

        for (int j = 0; j < m; j++)

        {

            arr[i][j] = rand() % (b - a) + a;

            printf("%7d", arr[i][j]);

        }

    }

    float** brr = new float* [3];

    for (int i = 0; i < 3; i++)

        brr[i] = new float[m];

    for (int j = 0; j < m; j++)

    {  // по стовпцях

        int min = b; // початкове значення мінімуму у стовпці

        int max = a;  // початкове значення максимуму  у стовпці

        float s = 0;  // для накопичення суми у сер. арифм.  у стовпці

        for (int i = 0; i < n; i++)

        {

            if (arr[i][j] > max)  max = arr[i][j];

            if (arr[i][j] < min)  min = arr[i][j];

            s += arr[i][j];

        }

        s = s / n;    // обчислюємо сер.арифм.

        brr[0][j] = max; brr[1][j] = s;      brr[2][j] = min;

    }

    cout << "\n\n  Результуючий масив:\n";

    for (int i = 0; i < 3; i++)

    {

        cout << "\n";

        for (int j = 0; j < m; j++)

            if (i == 1) printf("%7.2f", brr[i][j]);

            else      printf("%7.0f", brr[i][j]);

    }

    delete[] arr;     delete[] brr;



    _getch();

    return 0;

}