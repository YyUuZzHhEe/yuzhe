#include <stdio.h>
#include<stdlib.h>
#include<assert.h>
#define INITSIZE 10
typedef int ElemType;
typedef struct DSeqList
{
	int *elem;//ָ�������ݵĶ�̬����
	int length;//��Ч���ݸ���
	int listsize;//������
}DSeqList,*PDSeqList;
//��ʼ��
void InitSeqList(PDSeqList ps)
{
	assert(ps != NULL);
	if(ps == NULL)
	{
		return ;
	}
	ps->elem = (int *)malloc(sizeof(int)*INITSIZE);
	ps->length = 0;
	ps->listsize = INITSIZE;
}
//����
static bool IsFull(PDSeqList ps)
{
	return ps->length == ps->listsize;
}
//����
static void Inc(PDSeqList ps)
{
	ps->elem = (int *)realloc(ps->elem,sizeof(int)*2*ps->listsize);
	ps->listsize *= 2;
}
//��������
bool Insert(PDSeqList ps,int pos,int val)
{
	if(pos < 0 || pos > ps->listsize)
	{
		return false;
	}
	if(IsFull(ps))
	{
		Inc(ps);//������˾�����
	}
	for(int i = ps->length-1;i >= pos;i--)
	{
		ps->elem[i+1] = ps->elem[i];
	}
	ps->elem[pos] = val;
	ps->length++;
	return true;
}
//����
void Reverse(PDSeqList ps)
{
	assert(ps != NULL);
	if(ps == NULL)
	{
		return ;
	}
	int tmp;
	for(int i = 0;i < ps->length/2;i++)
	{
		tmp = ps->elem[i];
		ps->elem[i] = ps->elem[ps->length-1-i];
		ps->elem[ps->length-1-i] = tmp;
	}
}
//��ӡ
void Show(PDSeqList ps)
{
	for(int i = 0;i < ps->length;i++)
	{
		printf("%d ",ps->elem[i]);
	}
	printf("\n");
}
int main()
{
	DSeqList ds;
	InitSeqList(&ds);
	for(int i=0;i<11;i++)
	{
		Insert(&ds,i,i);

	}
	Show(&ds);
	Reverse(&ds);
	Show(&ds);
	return 0;
}
 typedef struct {
    ElemType *elem;
    int       length;
    int       listsize;
} SqList;
void Inverse(SqList &L)
{
   int i;
   ElemType *p,temp;
   p = L.elem;
   for(i = 0; i < (L.length)/2; i++){
        temp = *(L.elem + i);
        *(L.elem + i) = *(L.elem + L.length - i - 1);
        *(L.elem + L.length - i - 1) = temp;
   }
}


 

 

 

