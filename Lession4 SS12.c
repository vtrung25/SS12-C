#include<stdio.h>
int maximus(int arr[],  int size){
	int max;
	for(int i = 0; i<size;i++){
		if(max<arr[i]){
			max = arr[i];
		}
	}
	printf("So lon nhat trong mang la %d", max);
	return max;
}
int main(){
	int numbers[]={2,5,7,9,3};
	int size = sizeof(numbers)/sizeof(numbers[0]);
	maximus(numbers,5);
	return 0;
	
}