void Delall_L(SLinkString &S,char ch) 
{
	SLinkString p,q;
	p=S;
	while(p->next)
	{
		if(p->next->str==ch)
		{
			q=p->next;
			p->next=q->next;
			free(q);
		}
		else p=q->next;
	}
}
