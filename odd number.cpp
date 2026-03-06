#include <iostream>
using namespace std;

// دالة لطباعة الاعداد الفردية الموجبة والسالبة
void Odd_Number(int arr[], int size)
{
    cout << "Odd numbers: ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 1)
            cout << arr[i] << " ";
    }
    cout << endl;
}
