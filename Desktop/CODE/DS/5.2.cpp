#include<iostream>

using namespace std;
// �Ӽ������������A��ֵ 
int *init(int &n){
 
 cout << "please input the dim of the matrix" << endl;
 cin>>n;
 cout << "please input the matrix" << endl;
 int *a = new int (n*(n+1)/2);
 for(int i = 0; i < n; i++){
  for(int j = 0; j < n; j++){
   if(i >= j){
    cin >> a[(1+i)*i/2+j];
   }else{
    cin >> a[(1+j)*j/2+i];
   }
  }
 }
 return a;
} 

//����A+B
 int *juzhenxiangjia(int *a, int *b,int n){
	int *c = new int(n * (n + 1) / 2);
    n = n * (n + 1) / 2;
    for(int i = 0; i < n; i++){
        c[i] = a[i] + b[i];
    }
    return c;
 }
 //�Ծ������ʽ��ʾ����ѹ���洢�ĶԳƾ���
  void print(int *c, int n){
   for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
     if(i < j){
      cout << c[j * (j + 1) / 2 + i] << "  ";
     }else{
      cout << c[i * (i + 1) / 2 + j] << "  ";
     }
    }
    cout << endl;
   }
  }
  int main (){
   int n;
   int *a=init(n);
   print(a, n);
   int *b=init(n);
   print(b, n);
   int *c=juzhenxiangjia(a, b, n);
   print(c, n);
   return 0;
  }
