#include<stdio.h>

//계수정렬(Counting Sort) 
int main(void){
	
	
	int temp;
	int cnt[5]={0, };
	int array[30]={1,2,3,5,5,4,2,1,4,3,
				   2,1,5,4,2,3,3,4,1,5,
				   3,2,1,4,2,3,1,5,4,1 };
				   
	for(int i=0;i<30;i++){
		cnt[array[i]-1]++;
	}	
	
	for(int i=0;i<5;i++){
		if(cnt[i]!=0){
			for(int j=0;j<cnt[i];j++){
				printf("%d", i+1);
			}
		}
	}
	return 0;
			   
}
