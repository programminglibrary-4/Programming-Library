#include <iostream>
using namespace std;

// دالة لطباعة الاعداد الزوجية الموجبة والسالبة
void Even_Number(int arr[], int size)
{
    cout << "Even numbers: ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            cout << arr[i] << " ";
    }
    cout << endl;
}