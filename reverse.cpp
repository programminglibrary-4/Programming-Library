#include <iostream>
using namespace std;

void reverse_ (int array[268435455] , int array_size){

for(int counter1 = 0  , counter2 = array_size - 1 ; counter1 < counter2 && counter2 >=0 ; counter1++ , counter2--)
{
int temp ;
temp = array[counter1];
array[counter1] = array[counter2];
array[counter2] = temp;

}

}


//& --- ملاحضة ---
//? الدالة تعكس المصفوفه 
