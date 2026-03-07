#include <iostream>
using namespace std;

void to_mini (float array[268435455] , int array_size){


for (int k = 0; k < array_size ;  k++)
{

 array[k] = static_cast <int> (array[k]);

}

}

//& --- ملاحضه ---
//^ الدالة تقرب عناصر المصفوفه لاقرب اصغر رقم دائما



