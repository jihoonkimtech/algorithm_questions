#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	
	int i, stack=0;
	for(i = 1; i <= num; i++){
		if(num % i == 0 )
			stack++;
	}
	
	if(stack == 2){
		printf("True");
	} else{
		printf("False");
	}
	
	system("pause");
	return 0;
}
