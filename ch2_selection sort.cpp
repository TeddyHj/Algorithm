#include <stdio.h>

int main(void){
	int i,j,min,temp, point; // point�� �ּڰ��� ��ġ�� ��Ÿ��  
	int array[10]={1, 6, 9, 7, 10, 5, 3, 4, 2, 8};
	//���� �迭 Ȯ���ϱ� 
	for(int i=0;i<10;i++){
		printf("%d ", array[i]);
	}
	printf("\n");
	
	// �������� �˰��� 
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
	
	//���� �� �迭 Ȯ��  
	for(int i=0;i<10;i++){
		printf("%d ", array[i]);
	}
	return 0;
}
