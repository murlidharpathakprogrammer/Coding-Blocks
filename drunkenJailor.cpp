#include <iostream>
using namespace std;

int main()
{
    int cells[100], opened = 0, i, j, k;

    for (i = 0; i < 100; i++)
    {
        cells[i] = 0; // 0 indicates closed, 1 indicatees open.
    }
    cout << "\n\t\t\t\t\tNOTE: 0 indicates closed cell, 1 indicates opened cell\n\n\tStatus of cells before jailor drinks:\n\t\t\t ";
    for (i = 0; i < 100; i++)
    {
        cout << cells[i];
    }
    cout << "\n\t\t\t Number of opened cells: " << opened << endl;
    cout <<"\n\tStatus of cells After: \n";

    for (i = 1; i <= 100; i++) // 100 rounds
    {
        // cout<<i<<"th round: ";
        for (j = i; j <= 100; j += i) // 100 cells
        {
            if (cells[j - 1] == 0)
            {
                cells[j - 1] = 1;
            }
            else
            {
                cells[j - 1] = 0;
            }
            if (i == 100)
            {
                for (int l = 0; l < 100; l++)
                {
                    if (cells[l] == 1)
                    {
                        opened++;
                    }
                }
            }
        }

        cout<<"\t\t"<<i<<" round: ";
        for (k = 0; k < 100; k++)
        {
            cout<<cells[k];
        }
        cout<<"\n";
    }

    cout << "\n\t\tNumber of opened cells: " << opened << "\n\n";
    return 0;
}