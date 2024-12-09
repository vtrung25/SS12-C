#include<stdio.h>
int factorial(int n){
	int giaiThua = 1;
	for(int i = 1; i<=n;i++){
		giaiThua*=i;
	}

	return giaiThua;
}
int main(){
	int n = 25;
	
	printf("Giai thua cua %d la %d", n, factorial(n));
	return 0;
}
