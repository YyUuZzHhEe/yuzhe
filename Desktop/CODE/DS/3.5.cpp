void InitQueue_Sq(SqQueue &Q,int maxsize=QUEUE_INIT_SIZE,int incresize=QUEUEINCREMENT,int tag)
{
	Q.queue=(ElemType *)malloc(maxsize*sizeof(ElemType));
	if(!Q.queue) exit(1);
	Q,front=Q.rear=0;
	Q,queuesize=maxsize;
	Q.incrementsize=incresize;
	tag=0;
}//InitQueue_Sq
//进队
bool EnQueue_Sq(SqQueue &Q,ElemType)
{
	if(tag==1&&Q.rear==Q.front)
	{
		Q.queue=(ElemType *)realloc(Q.queue,(Q.queuesize+Q.incrementsize)*sizeof(ElemType));
		if(Q.queue) return false;
		if(Q.front>Q.rear)
		{
			for(int i-Q.queuesize;i>Q.front;i--)
				Q.queue[i+Q.incrementsize]=Q.queue[i];
			Q.front+=Q.incrementsize;}
		Q.queuesize+=Q.incrementsize;}
	Q.queue[Q.rear]=e;
	Q.rear=(Q.rear+1)%Q.queuesize;
   tag=1;
	return true;
}//EnQueue_Sq
//出队
bool DeQueue_Sq(SqQueue Q,ElemType &e)
{
	if(tag=0&&Q.rear=Q.front) return false;
	e=Q.queue[Q.front];
	Q.front=(Q.front+1)%Q.queuesize;
	tag=0;
	return true;
}//DeQueue_Sq

