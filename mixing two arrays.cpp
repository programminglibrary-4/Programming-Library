#include <iostream>
using namespace std;

void mix_array(int array0[268435455], int array0_size , int array1[268435455], int array_size , int array2[268435455] )
{

   

    int for_counter;
    for_counter = 0;

    int for_counter2;
    for_counter2 = 6;

    int temp;
    temp = 0;

    for (for_counter; for_counter < array_size ; for_counter++)
    {

        array0[for_counter] = array1[for_counter];
    }

    for (for_counter, temp; for_counter <= array0_size ; for_counter++, temp++)
    {

        array0[for_counter] = array2[temp];
    }
   
}




//* --- ملاحضة ---
//^ الدالة تدمج مصفوفتين معا

//* --- طريقة الاستعمال ---
/*

1. ادخل الدالة التي ستضع بداخلها الدالتين معا
2. اخل حجم تلك الدالة
3. ادخل المصفوفه الاولى
4. ادخل حجم المصفوفة الاولى
5. ادخل المصفوفة الثانية 


*/

