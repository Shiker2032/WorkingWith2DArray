#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{

	//sort array rows

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
			for (int j = 0; j < m - 1; j++)
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
	printf("================================================= \n \n");


	//shuffle first column with last one

	int arr2[100][100] = {};
	int n2 = 0, m2 = 0, r2 = 1;

	printf("n = ");
	scanf_s("%i", &n2);

	printf("m = ");
	scanf_s("%i", &m2);

	srand(time(NULL));

	for (int i = 0; i < n2; i++) {

		for (int j = 0; j < m2; j++) {
			arr2[i][j] = -2 + rand() % (7 - (-2) + 1);
		}
	}
	printf("\n");

	for (int i = 0; i < n2; i++)
	{
		for (int j = 0; j < m2; j++) {

			printf("%i ", arr2[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 0; i < n2; i++) {
		int buf = arr2[i][0];
		arr2[i][0] = arr2[i][m2 - 1];
		arr2[i][m2 - 1] = buf;

	}

	for (int i = 0; i < n2; i++)
	{
		for (int j = 0; j < m2; j++) {

			printf("%i ", arr2[i][j]);
		}
		printf("\n");

	}

}