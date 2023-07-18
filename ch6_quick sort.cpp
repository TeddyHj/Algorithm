#include<stdio.h>


int number = 10;
int data[10] = {5, 10, 1, 8, 7, 6, 4, 3, 2, 9};

void quickSort(int  *data, int start, int end){
	if(start >= end){ //데이터 즉 원소가 1개인 경우 
		return;		
	}
	
	int pivot = start; // pivot은 첫번째 원소  
	int i = start + 1;
	int j = end;
	int temp;
	
	while(i<=j){// i, j가 엇갈리면 stop
		while(data[i] <= data[pivot]){ //피봇값보다 큰 값을 만나면 그대로stop 
			i++;
		} 
		while(data[j] >= data[pivot] && j>start){//피봇값보다 작은 값을 만나면 그대로stop 
			j--; 
		}
		if(i > j){//현재 엇갈린 상태면 피봇값과 교체 => 어짜피 data[j]는 피봇값보다 작은 애니까 
			temp = data[j];
			data[j] = data[pivot];
			data[pivot] = temp;
		}
		else{ // 좋은 data 예시  => {5, 10 9, 8, 7, 6, 4, 3, 2, 1}
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
	}
	
	quickSort(data, start, j-1);
	quickSort(data, j+1, end);

}

int main(void){
	quickSort(data, 0, number-1);
	for(int i=0;i<number;i++){
		printf("%d ", data[i]);
	}
	
	
	return 0;
}
