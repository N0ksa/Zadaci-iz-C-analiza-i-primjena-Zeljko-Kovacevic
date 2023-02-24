#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 50

#include <stdio.h>

int main()
{
    int niz[MAX];
    int nizs[MAX];
    int i, j, a;
    int input;
    int max = 0, min = 0;
    printf("Unesi prirodni broj do 50: ");
    scanf("%d", &input);
    if (input > 50);
    {
        printf("\nKrivo unesena vrijednost !");
    }
    if (input <= 50)
    {
        for (i = 0; i < input; i++)
        {
            scanf("%d", &niz[i]);

        }
    }


    for (i = 0; i < input; i++)
    {
        for (j = i + 1; j < input; i++)
        {
            if (niz[i] > niz[j])
            {
                a = niz[j];
                niz[i] = niz[j];
                niz[j] = a;

            }
        }
    }

    return 0;
}
