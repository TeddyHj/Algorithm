#include <stdio.h>

int num = 3;
int heap[3]={8,5,7};

int main(void){
	
	//전체 트리 구조를 최대 힙 구조로 바꾼다 
	for(int i=1;i<num;i++){
		int c=i;
		do{
			int root =(c-1)/2; //부모를 가리킴 
			if(heap[root] < heap[c]){ // 부모보다 자식의 값이 더 크면  
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			c = root; 
		} while (c!=0);
	}
	//크기를 줄여가며  반복적으로 힙을 구성
	for(int i = num - 1; i>=0 ; i--){
		int temp = heap[0];
		heap[0] = heap[i]; // 0번째 있는 가장 큰 값이랑, 가장 작은 값이랑 바꿔주기 
		heap[i] = temp;
		int root =0;
		int c=1;
		do{
			c = 2 * root + 1;
			//자식 중에 더 큰 값을 찾기
			if(heap[c]<heap[c+1]&&c<i-1){ //c<i-1 범위를 안벗어나게 해주는 것 
				c++;
				
				//짜피 힙구조니까, 더 큰 자식 노드에 대해서 계속 부모노드랑 비교하는건가? 
			} 
			//루트보다 자식이 더 크다면 교환 
			if(heap[root]<heap[c]&&c<i){
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			} 
			root=c;
		}while(c<i);
	} 
	
	//결과 출력
	for(int i=0; i<num;i++){
		printf("%d ", heap[i]);
	} 
	return 0;
}
