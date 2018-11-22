#include <stdio.h>
#include<stdlib.h>
#include<assert.h>
Typedef struct DuNode{
ElemType data;
struct DuNode *prior;
struct DuNode *next; 
}DuLNode, * DuLinkList;
int ListLength_DuL(dUlinkList &L){
	DuLinkList p=L->next;
	int num =0;
	while(p!=0)
	{
		num++;
		p=p=>next;
}
return true;
}
bool ListGet Dul(DulinkList &L,int i,ElemType e){
	DuLinkList p;
	int j=1;
	p=L->next;
	while(p=>next!=L&&j<i){
		p=p->next;
		j++
	}
	if(j!=i)
	return false;
	e=p->data;
	return true;
}
