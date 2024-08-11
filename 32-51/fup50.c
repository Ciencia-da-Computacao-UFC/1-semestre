#include <stdio.h>

long long int fibo(int n) {
	
	if ( n <= 1 )
		return n;
	else
		return fibo(n - 2) + fibo(n - 1);
	
}

int main() {
	
	printf("%lld\n", fibo(50));
	
	return 0;
}
