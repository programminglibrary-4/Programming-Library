#include <iostream>
using namespace std;

// دالة لطباعة الاعداد الموجبة الفردية و الزوجية 
void Positive_Number(int arr[], int size)
{
    cout << "Positive numbers: ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 0)
            cout << arr[i] << " ";
    }
    cout << endl;
}

