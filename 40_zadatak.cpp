#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 50

#include <stdio.h>

int main()
{
    float niz[MAX];
    int i, j;
    float input;
    scanf("%f", &input);
    for (i = 0; i < input; i++)
    {
        scanf("%f", &niz[i]);
    }

    for (i = 0; i < input; i++)
    {
        for (j = i + 1; i < input; i++)
        {
            if (niz[i] > niz[j])
            {   
                float a = niz[j];
                niz[j] = niz[i];
                niz[i] = a;

            }
        }

    }

    for (i = 0; i < input; i++)
    {
        printf("%.2f", niz[i]);
    }

        
    return 0;
}
