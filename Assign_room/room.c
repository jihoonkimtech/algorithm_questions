#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int rooms[4]; // 작은 방, 중간 방, 큰 방, 전체 학생  
	
	int k;
	for(k = 0; k < 4; k++){
		scanf("%d", &rooms[k]); //입력 
	}
	
	int cantMinus; //방 수용 인원보다 학생 수가 더 적을시 1이 되는 논리 변수 
	
	int i;
	for(i = 2; i >= 0; i--){ //큰 방 -> 중간 방 -> 작은 방 순환 for문 
		cantMinus = 0; //논리 변수 초기화 
		do{
			if(0 > (rooms[3]-rooms[i])){ //방 수용 인원보다 학생수가 적으면 작은 방으로 이동  
				cantMinus = 1; //논리 변수 활성화 
			} else { //수용 인원  < 학생 수  
				rooms[3]-=rooms[i]; //수용 인원만큼 학생 수 감소 
			}
		}while(cantMinus != 1); //논리 변수 활성화시 반복 종료 
	}
	
	if(rooms[3] > 0){ //학생 수가 남아있으면 
		printf("0\n"); //0 출력 
		return 0;
	} else {
		printf("1\n"); //학생 수가 0이면 
		system("pause");
		return 1; //가능하므로 1 출력  
	}
}
