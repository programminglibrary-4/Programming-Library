#include <iostream>
using namespace std;

void delet_all(int x[10], int size, int y)
{

    y = y - 1; // 

    for (y; y < size; y++)
    {

        x[y] = INT_MIN;
    }

    for (int b = 0; b < size - 1; b++)
    {
        if (x[b] == INT_MIN)
        {

            cout << ' ';
        }
        else
        {
            cout << x[b] << " , ";
        }
    }
    cout << endl
         << endl;
}

//!   --- ملاحضات ---

//^ x --> المصفوفة التي يدخلها المستخدم
//^ size --> حجم المصفوفة التي سيدخلها 
//^ y --> عنوان العنصر الذي سيبدأ منه الحذف

/*  الدالة تحذف جميع العناصر 
من y 
الى نهاية المصفوفه
*/ 

//* ضع قيمة Y 
//* حسب نظام الحساب البشري لذي يبدأ من 1 

