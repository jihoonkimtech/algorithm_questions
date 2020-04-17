#include <stdio.h>
int main() {
	int input[100], findNum, posStart = 0, posLast, posMid;
	scanf("%d", &posLast);
	posLast -= 1; int i;
	for(i = 0; i <= posLast; i++)
		scanf("%d", &input[i]);
	scanf("%d", &findNum);
	
	while(posStart < posLast){
		posMid = (posStart+posLast)/2; 
		
		if(findNum > input[posMid]){
			posStart = posMid + 1;
		} else if(findNum < input[posMid]){
			posLast = posMid - 1; 
		}
		
		if(findNum == input[posMid]){
			printf("%d", posMid+1);
			system("pause");
			return 0;
		}
		
	}
	printf("X");
	system("pause");
	return 0;
}
