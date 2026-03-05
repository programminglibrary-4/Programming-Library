#include <iostream>
using namespace std;

void max_sort(int array[268435455], int array_size)
{

    for (int counter = 0; counter < array_size; counter++)
    {

        for (int counter2 = counter + 1; counter2 < array_size; counter2++)
        {

            if (array[counter2] > array[counter])
            {

                int temp;
                temp = array[counter];
                array[counter] = array[counter2];
                array[counter2] = temp;
            }
        }
    }
}


//& --- ملاحضة ---
//!  الدالة ترتب المصفوفة تصاعديا (من الاكبر الى الاصغر)
