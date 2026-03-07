#include <iostream>
using namespace std;

void to_minimax(float array[268435455], int array_size)
{

    for(int n =0; n < array_size ; n++)
    {

        if (array[n] - int(array[n]) >= 0 && array[n] - int(array[n]) <= 0.4)
       {

        array[n] = static_cast <int> (array[n]);

       } else if (array[n] - int(array[n]) > 0.4)
       {

        array[n] = static_cast <int> ((array[n])+1);

       }
    }
}



//& --- محلاحضة ---
//^ الدالة تقرب عناصر المصفوفة لاقرب عدد صحيح