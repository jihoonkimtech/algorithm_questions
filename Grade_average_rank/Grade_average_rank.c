#include <stdio.h>
#define SUBS 3.0

int main() {
	int kor, eng, math;
	scanf("%d %d %d", &kor, &eng, &math);
	float average = (kor+eng+math)/SUBS;
	
	char rank = 0;
	switch((int)average/10){
		case 10:
		case 9 : rank = 'A'; break;
		case 8 : rank = 'B'; break;
		case 7 : rank = 'C'; break;
		case 6 : rank = 'D'; break;
		default: rank = 'F';
			
	}
	
	printf("%0.2f %c", average, rank);
	system("pause");
	return 0;
}
