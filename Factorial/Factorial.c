#include <stdio.h>

long long int fatorial(int _n){
	if(_n > 1)
		return _n * fatorial(_n - 1);
	else
		return 1;
}

int main() {
	int n;
	scanf("%d", &n);
	
	printf("%lld", fatorial(n));
	system("pause");
	return 0;
}
