#include <iostream>
using namespace std;
main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "*";
        for (int a = 0; a <= 6; a++)
        {
            if (a % 2 != 0) //jika ganjil
            {
                if (i == 2)
                {
                    cout << "*";
                }
                else
                {
                    cout << "=";
                }
            }
            else
            {
                cout << " ";
            }
        }
        cout << "*" << endl;
    }
}