/* 본 프로젝트는(게임은) 2019년 03월 10일, 직접 KimJH-Hanul(Github)가 제작한 프로젝트입니다.
   본 프로젝트의 대한 설명은 깃허브 UPnDOWN.cpp가 있는 폴더 내의 
   What is this Project?(KR).md를 참고해주세요.*/ 

#include <stdio.h>
#include <windows.h>//Sleep()
#include <stdlib.h>//rand() ,srand()
#include <time.h>//time()

int main(){
	
	char Pname[] = "";
	
	printf("┌─────────────────────────────────┐\n"); 
	printf("     U P  &  D O W N  G A M E !     \n\n");
	printf("        made by KimJH-Hanul         \n");
	printf("└─────────────────────────────────┘\n\n\n");
	Sleep(2000);
	
	printf("First, What your name? (Please type your name.)\nMy name is : ");
	scanf("%s", &Pname);//이름 입력  
	Sleep(2000);
	
	printf("\n\nHello! %s, let's play the game!",Pname);
	Sleep(2000);
	
	printf("\n\nI will randomly choose a number from 1 to 10...\n\n");
	int ranNum = 0;
	srand((unsigned)time(NULL));//중복 난수 방지를 위해 시간 값으로 난수 출력 
	ranNum = rand()% 10 + 1; //난수 생성 (범위는 0+1 ~ (10-1)+1) 
	//printf("%d", ranNum);
	Sleep(3000);
	
	printf("Okey! I'm done!\n\n");
	Sleep(2000);
	
	printf("Then, Just guess what number I've chosen!");
	Sleep(2000);
	
	printf("\n\nHow many chance you want? (1-5)\n");
	printf("I want.. : ");
	int chance = 0;//기회 변수 초기화 
	scanf("%d", &chance);//원하는 기회 수 입력 
	while(1){
		if(chance <= 5 && chance > 0){//사용자가 입력한 기회 수가 1~5인지 판별 
			printf("\nOk!\n"); 
			break;//맞을 시 반복문 탈출 후 계속 진행 
		}
		printf("\nI want.. : ");
		scanf("%d", &chance);//아닐 시 다시 입력 
	}
	
	bool right = 0;
	while(1){
		if(chance == 0){
			printf("\nYou Failed..\n");
			right = 0;//정답 false 
			break;
		}
		printf("\nNow, answer the right answer!!\n");
		printf("right anser is..(chance : %d) : ",chance);
		int answer = 0;//정답 변수 초기화 
		scanf("%d", &answer);//정답 입력
		if(answer > ranNum){
			printf("\nDOWN!!\n");
			chance--;
		}
		if(answer < ranNum){
			printf("\nUP!!\n");
			chance--;
		}
		if(answer == ranNum){
			printf("\nWow.. you are right!\n");
			right = 1;//정답 true 
			break;
		}
	}
	
	if(right == 1){ //정답 분별 
			printf("┌─────────────┐\n");
			printf("  You Win! :)  \n");
			printf("└─────────────┘\n");
		}
	else if(right == 0){
			printf("┌──────────────┐\n");
			printf("  You Lose..:(  \n");
			printf("└──────────────┘\n");
		}
	return 0;
}
