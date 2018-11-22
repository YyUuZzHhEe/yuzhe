#include <stdio.h>
bool NlistInsert_L (LinkList &head,int i,ElemType e)
{
	LinkList p,s;
	int j;
	p=head;
	j=1;
	while(p->next&&j<i-1)
	{
		p->next;
		p++;
	}
	if(p!=j-1&&p!=1)
	return false;
	if(s=(LNode*)malloc(sizeof (LNode)))==NULL
	exit(1);
	s->data=e;
	if(i==1)
	{
		s->next=p;
		head=s;
		else{
			s->next=p=>next;
			s=p->next;
		}
	}
	return true;
} 
