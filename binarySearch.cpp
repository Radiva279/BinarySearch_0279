#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input()
{ // prosedur input
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array:";
        cin >> nPanjang;
        if (x <= 10)
        {
            break;
        }
        else
        {
            cout << "\nArray maksimal 10 elemen.\n";
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan elemen array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < nPanjang; i++)
    {
        cout << "Data ke-" << (i + 1) << "=";
        cin >> element[i];
    }
}

void bubbleSortArray()
{
    int pass = 1; // step 1
    do
    {
        for (int j = 0; j <= nPanjang - 1 - pass; j++)
        { // step 2
            if (element[j] > element[j + 1])
            { // step 3
                int temp;
                temp = element[j];
                element[j] = element[j + 1];
                element[j + 1] = temp;
            }
        }
        pass = pass + 1; // step 4
    } while (pass <= nPanjang - 1); // step 5
}

void display()
{
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    cout << endl;
    for (int j = 0; j < nPanjang; j++)
    {
        cout << element[j];
        if (j < nPanjang - 1)
        {
            cout << " --> ";
        }
    }
}

