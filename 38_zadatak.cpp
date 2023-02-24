#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100

#include <stdio.h>

int main()
{
    int niz[MAX] = { 0 };
    int i;
    int input, int input2;
    printf("Unesi broj: ");
    scanf("%d", &input);
    for (i = 0; i < input; i++)
    {
        printf("Unesi broj u intervalu od 1 (ukljucujuci) i 100 (ukljucujuci): ");
        scanf("%d", &input2]);
        if (input2 >= 1 || input2 <= 100)
        {
            niz[input2]++;
        }


    }

    for (i = 0; i < MAX; i++)
    {   
        if (niz[i] > 0)
        {
            printf("Broj %d se pojavljuje %d puta", i, niz[i]);
        }
       
    }
    

    


    return 0;
}

