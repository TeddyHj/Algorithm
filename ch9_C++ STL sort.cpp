#include <iostream>
#include <algorithm>

using namespace std;

// 1. ù ��° ���� 
/*
int main(void){
	int a[10]= {5, 10, 1, 8, 7, 6, 4, 3, 2, 9};
	sort(a,a+10);
	for(int i=0;i<10;i++){
		cout<<a[i]<<' ';
	}
}
*/

//2. �� ��° ���� 
/*
bool compare(int a, int b){
	return a>b;  // �������� 
} 

int main(void){
	int a[10]= {5, 10, 1, 8, 7, 6, 4, 3, 2, 9};
	sort(a,a+10, compare);
	for(int i=0;i<10;i++){
		cout<<a[i]<<' ';
	}
}
*/

//3. �� ��° ����

class Student{
public:
	string name;
	int score;
	Student(string name, int score){
		this->name=name;
		this->score=score;
	}
	// ���� ������ '������ ���� ����'
	//&student�� operator< �Լ��� ���޵� Student ��ü�� ���� ������ ��Ÿ����, 
	//�Լ� ���ο��� �ش� ��ü�� ���ϴ� �� ���˴ϴ�.
	bool operator <(Student &student) {
		return this->score < student.score;
	}
}; 

int main(void){
	Student students[] = {
		Student("������", 90),
		Student("�����", 80),
		Student("�ӶѶ�", 100)
	};
	sort(students, students+3);
	for(int i=0;i<3;i++){
		cout<<students[i].name<<' ';
	}
}






















