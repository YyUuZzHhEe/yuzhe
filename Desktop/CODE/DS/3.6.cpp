//����ѭ������CLenQueue 
typedef char QElemType
typedef struct{
	QElemType elem[maxqsize];
	int length;
	int rear;
}CLenQueue;

Status EnCQueue(CLenQueue &Q,QElemType x)
{
	//���� 
	if(Q.length==maxqsize){
		return error;
	}
	//ѭ�� 
	if(maxqsize-1!=Q.rear){
		++Q.elem[Q.rear]=x;
	}
	else{
		Q.rear=0;
		Q.elem[Q.rear]=x;
	}
	++Q.length;
	return OK;
}
Status DeCQueue(CLenQueue &Q,QElemTpe &x)
{
	//p�п� 
	if(!Q.length){
		return error;
	}
	if(Q.rear+1>=Q.length){
		x=Q.elem[Q.rear+1-Q.length];
	} 
	else{
		x=Q.elem[maxqsize+Q.rear+1-Q.length];
	}
	--Q.length;
	return ok;
}
