//初始化操作
void InitCiQueue_L(CiQueue&Q)
{
	Q=(InLNode*)malloc(sizeof(CiLNode));
	if(!Q)
	{
		exit(1);
	}
	Q.rear=Q;
} 
//入队操作
 Void EnCiQueue_L(CiQueue Q,int x)
{
	CiQueue p;
	if(p=(CiLNode*)malloc(sizeof(CiLNode))) exit(1);
	p->data=x;
	p->next=Q.rear;
	Q.rear=p;
}
//出队操作
 void DeCiQueue_L(CiQueue Q,Elemtype&e)
 {
 	CiQueue p=Q,q;
	if(Q==Q.rear) return flase;
	while(p->next==Q.rear) p=p->next;
	e=Q.rear->data;
	p->next=Q.rear->next;
	q=Q.rear;
	free(q);
	Q.rear=p;
 }
