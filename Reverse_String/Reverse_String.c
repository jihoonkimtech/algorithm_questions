#include <stdio.h>

int main() {
	char input[100], tmp;
	int count = 0, i = 0;

	scanf("%s", input);

	while (input[i++]>0)
		count++;

	for (i = 0; i < count/2; i++) {
		tmp = input[i];
		input[i] = input[count-i-1];
		input[count - i - 1] = tmp;
	}

	printf("%s", input);
	system("pause");
	return 0;
}
