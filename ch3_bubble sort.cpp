#include<stdio.h>

int main(void){
	int i, j, temp;
	int array[10]={1, 6, 9, 7, 10, 5, 3, 4, 2, 8};
	
	//기존 배열 확인하기 
	for(int i=0;i<10;i++){
		printf("%d ", array[i]);
	}
	printf("\n");
	
	// 버블 정렬 알고리즘 
	for(int i=0;i<10;i++){
		for(int j=0;j<10-i-1;j++){
			if(array[j]>array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
		
	}
	
	// 정렬 후 배열 확인하기 
	for(int i=0;i<10;i++){
		printf("%d ", array[i]);
	}

	return 0;
} 
