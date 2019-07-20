#include <string.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    char kata[10], belah1[10];

    cout << "Input :";
    cin >> belah1;
    int loop;
    int panjang = strlen(belah1);
    int akar = sqrt(panjang);
    int k, j, i;
    int dl = panjang;
    int dl1 = akar;
    int dl12 = dl1 + 1;
    int dl2 = dl12 + dl1;
    int sisa = dl - dl2;
    int dld = dl2 + akar;

    if (sisa <= dl1)
    {
        loop = 2;
    }
    else
    {
        loop = 3;
    }

    for (i = 0; i < loop; i++)
    {
        if (i < 2)
        {
            for (j = 0; j < dl1; j++)
            {
                cout << belah1[j];
            }

            cout << ",";

            for (j = dl1; j < dl2; j++)
            {
                cout << belah1[j];
            }

            cout << ",";

            for (j = dl2; j < dl; j++)
            {
                cout << belah1[j];
            }
            cout << endl;
            dl1 = dl1 + dl12;
        }
        else
        {
            for (k = 0; k < dld; k++)
            {
                cout << belah1[k];
            }
            cout << ",";

            for (k <= dld; k < dl; k++)
            {
                cout << belah1[k];
            }

            cout << endl;
        }
    }
}