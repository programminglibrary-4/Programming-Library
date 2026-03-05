#include <iostream>
using namespace std;

void delet_one(int x[10] , int size , int y){

y = y-1;

for(y ; y < size ; y++ )
{


x[y]=x[y+1];

}


for(int b =0 ; b < size-1 ; b++)
{


 cout<<x[b]<<" , ";



}

cout<<endl <<endl;

}


