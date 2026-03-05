#include <iostream>
using namespace std;

void mini_sort(int array[268435455] , int array_size)
{

int counter;


int counter2;



for(counter = 0 ; counter < array_size ; counter++)
{
 
 for(counter2 = counter + 1  ; counter2 < array_size ; counter2++)
 {
  
  if(array[counter2] < array[counter])
  {
    int temp ;
    temp = array[counter]; 

   array[counter] = array[counter2];

   array[counter2] = temp;  

  } 



 } 

}

}

//* --- ملاحضه ---
//^  الدالة ترتب المصفوفة تنازليا (من الصغر الى الاكبر)
