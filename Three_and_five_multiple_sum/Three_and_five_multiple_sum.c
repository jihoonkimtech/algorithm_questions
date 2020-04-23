#include <stdio.h>

int main() {
	int limit;
	scanf("%d", &limit);
	
	int i, stacks = 0;
	for(i = 0; i <= limit; i++){
		if(i%3 == 0){
			stacks += i;
		} else if(i%5 == 0){
			stacks += i;
		}
	}
	
	printf("%d", stacks);
	system("pause");
	return 0;
}
