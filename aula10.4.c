#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
     int total =0;
    if (argc <= 1)
    {
        printf("entre com um numero maior do que 1");
        return 1;
    }

    int noelementos = atoi(argv[1]);
    int arr[noelementos];

    for (int i = 0; i < noelementos; i++)
    {
        arr[i] = 0;
    }
    for (int j = 0; j < noelementos; j++)
    {
        arr[j] = j;
    }

    printf("%s %13s\n", "index:,", "valor:");
    for (int v = noelementos-1; v >= 0; v--)
    {
        total += arr[v];
        printf(" %7d %13d\n", v, arr[v]);
    }

        printf("soma total total: %i \n", total);
        printf("tamanho em bits do array: %i",sizeof(arr)* 8);

    return 0;
}
