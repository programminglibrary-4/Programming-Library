#include <iostream>
using namespace std;

void reverse_array(int array1[6], int array2[6])
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

        new_array[for_counter] = array1[for_counter];
    }

    for (for_counter2, temp; for_counter2 < 12; for_counter2++, temp++)
    {

        new_array[for_counter2] = array2[temp];
    }

    cout << "New array[";
    for (int b = 0; b < 12; b++)
    {

        cout << new_array[b] << ",";
    }
    cout << "]";
    cout<<endl <<endl; 
}

