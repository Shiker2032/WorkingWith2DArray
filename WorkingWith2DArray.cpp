
#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
	int arr[100][100]{};
	int n = 0, m = 0;

	printf("n = ");
	scanf_s("%i", &n);

	printf("m = ");
	scanf_s("%i", &m);

	srand(time(NULL));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("input element ");
			scanf_s("%i", &arr[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%i ", arr[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 5; ++i)
	{
		for (int j = i; j < 5; ++j)
		{
			int t = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = t;
		}
	}

	printf("reverse\n");

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%i ", arr[i][j]);
		}
		printf("\n");
	}

}