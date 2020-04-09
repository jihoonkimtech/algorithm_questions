#include <stdio.h>
int main() {
	char input[100];
	scanf("%s",input);
	
	int str = 0;
	int rev = -1;
	
	while(rev <= 100){
		if(input[++rev] == NULL)
			break;
	}
	
	char reverse[100];
	int length = rev;
	while(str < length){
		reverse[str++] = input[(rev--)-1];
	}
	
	printf("%s\n\n", reverse);
	
	system("pause");
	return 0;
}
