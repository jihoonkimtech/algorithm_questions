/*
 *	라이브러리 헤더 선언 
 */ 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
	 *	변수 선언
	 */ 
	int maxStudent = 0, maxSubject = 0; //학생 수와 과목 수 
	int stacks; 
	int table[100][100];	//점수를 저장할 전체 배열 
	int grs[5][2]; //과목별 점수의 범위를 저장할 배열 
	
	FILE* tableFile; //파일 자료형 변수 선언 
	
	int word = 0; //읽은 글자를 임시 저장할 변수 
	int i = 0, j = 0; //학생 수와 과목 수 
	int maxJ = 0;
	
	/*
	 *	성적 정리 
	 */ 
	tableFile = fopen("grades.txt","r"); //파일을 읽기 모드로 열기 

	while (word != EOF) //읽은 글자가 끝에 도달할 때 까지 반복 
	{
		j = 0; //과목 수 초기화 
		word = 0;
		++i; //학생 수 1 늘림 
		while (word != '\n' && word != EOF) //글자가 줄 내림에 왔거나 끝날 때까지 반복 
		{
			++j; //읽은 과목수가 1 늘어남 
			fscanf(tableFile,"%d",&table[i][j]); //파일을 정수 형태로 점수 저장 배열(주소)에 저장 
			word = fgetc(tableFile); //문자 형태로 word에 저장 
			fseek(tableFile,-1,SEEK_CUR); //현재 위치에서 1번 앞으로 이동 
		}
		
		maxSubject = j; //저장된 최대 과목 수를 저장 
		maxStudent = i; //최대 학생수를 쌓음 
	}

	fclose(tableFile); // 읽기 종료 

	/*
	 *	성적표 출력 
	 */ 	
	printf("\n                 2학년 3반 성적표 \n");
	
	for (i=1; i<=maxStudent; ++i) //최대 학생 수 만큼 반복 
	{
		printf("%d번 학생   :   ",i); //n번 학생 : 
		for (j=1; j<=maxSubject; ++j) //최대 과목 수 만큼 반복 
			printf("%3d\t",table[i][j]); //i행(학생) j행(과목) =(n 번 학생의 성적) 출력 
		printf("\n"); //모든 과목 출력 후 줄 내림  
	}	
	
	/*
	 *	검색 과목 범위 설정 
	 */ 
	for(j = 0; j < maxSubject; j++){ //최대 과목 수 까지 반복 
	    printf("\n제 %d 과목 범위 (min~max) : ", j+1); //과목 범위 입력 가이드 
	    scanf("%d %d", &grs[j][0], &grs[j][1]); //j행(해당 과목) 0열(최소), 1열(최대) 출력 
	}
	
	/*
	 *	검색한 결과를 출력 
	 */ 
	printf("\n해당 범위 내 점수의 학생은 : ");
	 
	for(i = 1; i <= maxStudent; i++){ //최대 학생 수만큼 반복 
		stacks = 0; //스택 초기화 
		for(j = 1; j <= maxSubject; j++){ //최대 과목 수만큼 반복
			if((grs[j-1][0] <= table[i][j]) && (table[i][j] <= grs[j-1][1]))
				stacks++;  //최대와 최소 조건이 해당 학생의 점수에 부합한다면 스택 변수에 1 쌓음 
		}
		if(stacks == 5) //모든 조건에 부합한다면 
			printf("%d번 ",i); //해당 학생의 번호를 출력 
	}
	system("pause");
	printf(" 학생 입니다. ");
	
}
