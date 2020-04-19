#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	
	int i, stack=0;
	for(i = 1; i <= num; i++){
		if(num % i == 0 )
			stack+= i;
	}
	
	printf("%d", stack);
	
	system("pause");
	return 0;
}

