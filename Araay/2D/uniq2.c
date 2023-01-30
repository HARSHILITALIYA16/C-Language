#include <stdio.h>
void main()
{
    int a[2][2] = {{8, 4}, {7, 8}}, k = 0, b[4], c;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            b[k] = a[i][j];
            k++;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (b[i] != -1)
        {
            c = 0;
        }
        else
        {
            c = 1;
        }
        for (int j = i + 1; j < 4; j++)
        {
            if (b[i] == b[j])
            {
                c++;
                b[j] = -1;
            }
        }
        if (c < 1)
        {
            printf("%d ", b[i]);
        }
    }
}