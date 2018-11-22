#include <stdio.h>
#include<stdlib.h>
#include<assert.h>
#define INITSIZE 10
typedef int ElemType;
typedef struct DSeqList
{
	int *elem;//指向存放数据的动态数组
	int length;//有效数据个数
	int listsize;//总容量
}DSeqList,*PDSeqList;
//初始化
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
//判满
static bool IsFull(PDSeqList ps)
{
	return ps->length == ps->listsize;
}
//扩容
static void Inc(PDSeqList ps)
{
	ps->elem = (int *)realloc(ps->elem,sizeof(int)*2*ps->listsize);
	ps->listsize *= 2;
}
//插入数据
bool Insert(PDSeqList ps,int pos,int val)
{
	if(pos < 0 || pos > ps->listsize)
	{
		return false;
	}
	if(IsFull(ps))
	{
		Inc(ps);//如果满了就扩容
	}
	for(int i = ps->length-1;i >= pos;i--)
	{
		ps->elem[i+1] = ps->elem[i];
	}
	ps->elem[pos] = val;
	ps->length++;
	return true;
}
//逆置
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
//打印
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


 

 

 

