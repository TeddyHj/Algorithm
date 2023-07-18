#include <iostream>
#include <algorithm>

using namespace std;

// 1. 첫 번째 예제 
/*
int main(void){
	int a[10]= {5, 10, 1, 8, 7, 6, 4, 3, 2, 9};
	sort(a,a+10);
	for(int i=0;i<10;i++){
		cout<<a[i]<<' ';
	}
}
*/

//2. 두 번째 예제 
/*
bool compare(int a, int b){
	return a>b;  // 내림차순 
} 

int main(void){
	int a[10]= {5, 10, 1, 8, 7, 6, 4, 3, 2, 9};
	sort(a,a+10, compare);
	for(int i=0;i<10;i++){
		cout<<a[i]<<' ';
	}
}
*/

//3. 세 번째 예제

class Student{
public:
	string name;
	int score;
	Student(string name, int score){
		this->name=name;
		this->score=score;
	}
	// 정렬 기준은 '점수가 작은 순서'
	//&student는 operator< 함수에 전달된 Student 객체에 대한 참조를 나타내며, 
	//함수 내부에서 해당 객체를 비교하는 데 사용됩니다.
	bool operator <(Student &student) {
		return this->score < student.score;
	}
}; 

int main(void){
	Student students[] = {
		Student("임현정", 90),
		Student("춘식이", 80),
		Student("임뚜뚜", 100)
	};
	sort(students, students+3);
	for(int i=0;i<3;i++){
		cout<<students[i].name<<' ';
	}
}






















