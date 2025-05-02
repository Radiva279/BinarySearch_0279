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

void binarySearch()
{
    cout << " Masukkan Element Yang Ingin Dicari = " << endl;
    cin >> x;                // step 1
    int low = 0;             // step 2
    int high = nPanjang - 1; // step3
    do
    {
        int mid = (low + high) / 2; // step 4
        if (element[mid] == x)
        { 
            cout << "Ditemukan Pada Index ke-" << mid << endl; //step 5.a
            return; //step 5.b
        }
        if (x < element[mid]) //step 6
        {
            high = mid - 1; //step 6.a
        }
        if (x > element[mid]){ //step 7
            low = mid +1; //step 7.a
        }
    } while (low <= high); //step 8
    if (low > high)
    {
        cout << x << "Tidak Ditemukan" << endl; //step 9
    }
} // step 10

