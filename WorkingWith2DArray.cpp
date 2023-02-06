#include <iostream>
#include <stdlib.h>
#include <time.h>

 int main()

     //task 1: =================================================
{  
    int arr[100][100] = {};
    int n = 0, m = 0, r = 0;

    printf("n = ");
    scanf_s("%i", &n);

    printf("m = ");
    scanf_s("%i", &m);

    srand(time(NULL));

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {

            arr[i][j] = -2 + rand() % (7 - (-2) + 1);
        }
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) {

            printf("%i ", arr[i][j]);
        }
        printf("\n");
    }

    for (int pass = 0; pass < m; pass++)
    {
        for (int i = 0; i < n; i++)
            for ( int j = 0; j < m - 1; j++)
                if (arr[i][j] > arr[i][j + 1]) {
                    int buf = arr[i][j];
                    arr[i][j] = arr[i][j + 1];
                    arr[i][j + 1] = buf;                    
                }      
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) {

            printf("%i ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
    //=================================================
    




}