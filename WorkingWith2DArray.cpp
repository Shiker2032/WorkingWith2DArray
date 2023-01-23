#include <iostream>

int main()
{
	int arr[100][100]{};
	int n = 0, m = 0;

	printf("n = ");
	scanf_s("%i", &n);

	printf("m = ");
	scanf_s("%i", &m);

	for (int i = 0; i < n; i++) {		
		for (int j = 0; j < m; j++) {
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
}