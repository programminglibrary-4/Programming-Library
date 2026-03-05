#include <iostream>
using namespace std;

int strint_(string text, int beggein, int end)
{

    int reverse;

    for (beggein; beggein <= end; beggein++)
    {

        if (isdigit(text[beggein]))
        {
            
            reverse = reverse * 10 + (text[beggein] - '0');
        }
        else if (isalpha(text[beggein]))
        {

            reverse = 0;
        }
        else
        {

            reverse = reverse * 10 + (text[beggein] - 'o');
        }
    }


  return reverse ;


}


//& --- ملاحضة ---
/*
الدالة تحول الارقام التي تكون داخل النص و التي يكون نوعها
(string)
 الى ارقام من نوع
(int)
يمكن  ادخالها في معادلات حسابية و اي شيء اخر


*/ 