#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
	int arr[100][100]{};
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
		printf("\n");
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%i ", arr[i][j]);
		}
		printf("\n");
	}
}