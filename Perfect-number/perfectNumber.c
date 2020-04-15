#include <stdio.h>
int main() {
	int loc, last;
	scanf("%d %d", &loc, &last);
	do{
		int stack = 0, i;
		for(i = 1; i < loc; i++){
			if(loc%i == 0)
				stack += i;
		}
		if(stack == loc)
			printf("%d ", loc);
	}while(++loc <= last);
	system("pause");
	return 0;
}

