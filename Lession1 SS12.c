#include<stdio.h>
int sum(int a, int b){
	printf("Tong 2 so %d va %d la %d\n", a, b, a+b);
	return a+b;
}
int main(){
	
	if(sum(2,5)%2==0){
		printf("Tong 2 so la so chan");
	}else{
		printf("Tong 2 so la so le");
	}
	return 0;
}