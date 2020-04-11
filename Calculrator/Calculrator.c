#include <stdio.h>
int main() {
	int numA, numB;
	char oper;
	scanf("%d %c %d", &numA, &oper, &numB);
	
	switch(oper){
		case '+' : printf("%d\n", numA + numB); break;
		case '-' : printf("%d\n", numA - numB); break;
		case '*' : printf("%d\n", numA * numB); break;
		case '/' : printf("%0.2f\n", (float)(numA / numB)); break;	
	}
	system("pause");
	return 0;
}
