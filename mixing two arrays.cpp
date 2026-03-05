#include <iostream>
using namespace std;

void mix_array(int array0[12] , int array1[6], int array2[6])
{

    int new_array[12];

    int for_counter;
    for_counter = 0;

    int for_counter2;
    for_counter2 = 6;

    int temp;
    temp = 0;

    for (for_counter; for_counter < 6; for_counter++)
    {

        array0[for_counter] = array1[for_counter];
    }

    for (for_counter2, temp; for_counter2 < 12; for_counter2++, temp++)
    {

        array0[for_counter2] = array2[temp];
    }
   
}




--- ملاحضة ---
//^ الدالة تدمج مصفوفتين معا










