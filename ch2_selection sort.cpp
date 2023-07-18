#include <stdio.h>

int main(void){
	int i,j,min,temp, point; // point는 최솟값의 위치를 나타냄  
	int array[10]={1, 6, 9, 7, 10, 5, 3, 4, 2, 8};
	//기존 배열 확인하기 
	for(int i=0;i<10;i++){
		printf("%d ", array[i]);
	}
	printf("\n");
	
	// 선택정렬 알고리즘 
	for(int i=0;i<10;i++){
		min = 999;
		for(int j=i;j<10;j++){
			if(min>array[j]){
				min=array[j];
				point=j;
			}
		}
		temp=array[point];
		array[point]=array[i];
		array[i]=temp;
	}
	
	//정렬 후 배열 확인  
	for(int i=0;i<10;i++){
		printf("%d ", array[i]);
	}
	return 0;
}
