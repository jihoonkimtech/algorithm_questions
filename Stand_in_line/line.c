#include <stdio.h>

#define FALSE -1
#define TRUE 1

int isSame(int* arr, int start, int end){	//중복 검사 
	int a;
	for(a = start; a <= end; a++){
		int b;
		for(b = start; b <= end; b++){
			if(arr[a] == arr[b]){
				return 1;
			}
		}
	} 
	return 0;
}

int main(){
	int student, pairs;
	int isPossible = FALSE;
	scanf("%d %d", &student, &pairs);
	
	int arrays[pairs][2];
	int cards[student+1];
	
	int std;
	int pr;
	
	int num;
	for(num = 1; num <= student; num++){
		cards[num] = num; //순서대로 지급되었다는 하에 카드 지급 
	}
	
	for(pr = 0; pr < pairs; pr++){
		scanf("%d %d", &arrays[pr][0], &arrays[pr][1]);
		//(X, Y)에서 순서는 동결, X > Y가 되어야 함, 순환하며 계속 비교 
		cards[arrays[pr][0]]++; //X가 더 커야하는 수 
		cards[arrays[pr][1]]--; //Y가 더 작아야하는 수 
	}	
	
	int stack = 0;
	for(stack = 1; stack <= student; stack++){
		//순서 카드는 1에서 최대 학생수 까지 지급됨. 
		if( (cards[stack] <= 0 || cards[stack] > student) || isSame(cards, 1, student) == TRUE ){ //순서 카드 범위를 벗어난 경우 , 중복 카드가 있는 경우 
			printf("\n-1\n"); //불가한 배열 
			return -1; 
		} else {
			isPossible = TRUE; //가능 
		}
	}

 	if(isPossible == TRUE){ //가능한 경우 
		int c;
		printf("\n");
		for(c = 1; c <= student; c++){
			printf("%d ", cards[c]); //순서 출력 
		}
		printf("\n");
		system("pause");
		return 1; 
	}
}
