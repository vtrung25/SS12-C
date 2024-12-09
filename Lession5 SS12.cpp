#include<stdio.h>
void prime(int n){
	int count = 0;
	for(int i = 1; i<=n; i++){
		if(n%i==0){
			count++;
		}
	}
	if(count == 2 ){
		printf("TRUE\n");
	}else{
		printf("FALSE\n");
	}
}
int main(){
	int n1, n2;
	printf("Nhap vao so nguyen thu nhat "); 
	scanf("%d", &n1);
	prime(n1);
	printf("Nhap vao so nguyen thu hai ");
	scanf("%d", &n2);
	prime(n2);
	return 0;
}