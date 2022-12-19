#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int list[210];
	int num, input;
	for (int i = 0; i <= 209; i++)
		list[i] = 0;
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		scanf("%d ", &input);
		list[input + 100]++;
	}

	scanf("%d", &num);
	printf("%d", list[num + 100]);
	return 0;
}