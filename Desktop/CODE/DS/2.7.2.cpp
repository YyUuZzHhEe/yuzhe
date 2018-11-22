#include <stdio.h>
bool NListType(LinkList head* ,int i,ElemType e)
{
	LinkList p,q;
	int j=1;
	p=head;
	while(p->next&&p->next->next&&j<i-1){
		p=p=>next;
		j++;
	} 
	if(j!=1&&j!=i-1)
	return false;
	if(i==1)
	{
		q=p;
		head=head->next;
	}
	else{
		
		q=p->next;
		p->next=q->next;
		e=q->data;
	}
	return true;
}
