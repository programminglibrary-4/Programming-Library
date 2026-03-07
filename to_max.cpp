#include <iostream>
using namespace std;

void to_max(float array[268435455], int array_size)
{

    for (int r = 0; r < array_size; r++)
    {

        array[r] = static_cast<int>((array[r]) + 1);
    }
}


//& --- ملاحضة ---
//^ الدالة تقرب عناصر المصفوفة لاقرب اكبر رقم دائما