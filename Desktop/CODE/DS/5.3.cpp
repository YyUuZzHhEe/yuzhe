#define MAX_SIZE 100
#include<iostream>
using namespace std;
typedef int ElemType;
typedef struct{
	int i;
	int j;
	ElemType e; 
}Triple;
typedef struct{
	int m,n,t;
	Triple data[MAX_SIZE];
}TSMatrix;
int main (){
	TSMatrix T;
	int k = 0;
	cout << "please input the rows of the matrix" << endl;
	cin >> T.m;
	cout << "please input the cols of the matrix" << endl;
	cin >> T.n;
	cout <<  "please input the matrix in row way" << endl;
	for(int i = 0; i < T.m; i++){
		for(int j = 0; j < T.n; j++){
			T.data[k].i=i;
			T.data[k].j=j;
			cin >> T.data[k++].e;
		}
	}
	int sum = 0;
	for(int k = 0; k < (T.m)*(T.n); k++){
		if(T.data[k].i == T.data[k].j){
			sum += T.data[k].e;
		}
		k++;
	}
	cout << "the sum of diagonal elements is " << sum << endl;
	return 0;
}
