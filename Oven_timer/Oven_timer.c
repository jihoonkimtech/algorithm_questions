#include <stdio.h>

int main() {
	int hour, min;
	scanf("%d %d", &hour, &min); //start
	int cookTime; //min
	scanf("%d", &cookTime); //cooking Time
	
	min += cookTime;
	
	while(min >= 60){
		
		min -= 60;
		hour++;
		
		if(hour == 24){
			hour = 0;
		}
		
	}
	
	printf("%d %d", hour, min);
	system("pause");
	
}
