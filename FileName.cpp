#include <iostream>

#include <conio.h>

#include <new.h>

#include <locale.h>

using namespace std;



int main()

{
    setlocale(0, "");

    int n, m, a = 0, b = 0;

    cout << " \n����1�� ����1��o��i ������ n i m:\n";

    cin >> n >> m;

    cout << "\n n=" << n << "  m=" << m;

    while (a >= b)

    {        //�������� �����������

        cout << " \n\n  ����1�� ������1 1�������� a i b:\n";

        cin >> a >> b;

        cout << "\n a=" << a << " b=" << b;

    }

    int** arr = new int* [n];

    cout << "\n\n  ����������  �����:\n";

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

    {  // �� ��������

        int min = b; // ��������� �������� ������ � �������

        int max = a;  // ��������� �������� ���������  � �������

        float s = 0;  // ��� ����������� ���� � ���. �����.  � �������

        for (int i = 0; i < n; i++)

        {

            if (arr[i][j] > max)  max = arr[i][j];

            if (arr[i][j] < min)  min = arr[i][j];

            s += arr[i][j];

        }

        s = s / n;    // ���������� ���.�����.

        brr[0][j] = max; brr[1][j] = s;      brr[2][j] = min;

    }

    cout << "\n\n  ������������ �����:\n";

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