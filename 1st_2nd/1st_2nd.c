#include <stdio.h>
int main() {
	char input[100000];
	scanf("%s",input);
	int t_one = 0, o_two = 0;
	
	int i = 0;
	while(1){
		if(o_two == 0 && input[i] == '1'){
			if(input[i+1] == '2'){
				o_two = 1;
				i++;
			}
		} else if(t_one == 0 && input[i] == '2'){
			if(input[i+1] == '1'){
				t_one = 1;
				i++;
			}
		}
		i++;
		
		if(i >= 100000 || input[i] == NULL)
			break;
	}
	
	if(t_one && o_two){
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	system("pause");
	return 0;
}
