#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int a1 = 0, a2 = 0, sum = 0, i = 0, j = 0;
int frequency[13] = { 0 };

int main() {
	srand(time(0));
	for (i = 0; i < 36000; i++)
	{
		a1 = rand() % 6 + 1;
		a2 = rand() % 6 + 1;
		sum = a1 + a2;
		frequency[sum]++;
	}
	printf("點數\t出現次數\t機率\n");
	for (j = 2; j <= 12; j++)
	{
		printf("%d\t%d\t%f\n",j, frequency[j], frequency[j] / 36000.0);
	}
	return 0;
}