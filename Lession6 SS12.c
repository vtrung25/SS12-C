#include<stdio.h>
void perfect(int n){
	int sum,i;
	for(int i = 1; i<=n/2;i++){
		
	
	if(n%i==0){
			sum+=i;
		}
}
		if(sum==n){
		printf("TRUE\n");
	
	}else{
		printf("FALSE\n");
	}

}
int main(){
	int n1,n2;
	printf("Nhap vao so nguyen thu nhat "); 
	scanf("%d", &n1);
	perfect(n1);
	printf("Nhap vao so nguyen thu hai ");
	scanf("%d", &n2);
	perfect(n2);
	return 0;
}