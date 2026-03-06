#include <iostream>
using namespace std;

// دالة لطباعة الأعداد السالبة الفردية والزوجية
void Negative_Number(int arr[], int size)
{
    cout << "Negative numbers: ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
            cout << arr[i] << " ";
    }
    cout << endl;
}
