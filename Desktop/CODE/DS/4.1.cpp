void Trans_Sq(DSqString &S,char ch1,char ch2)
{
	int i;
	for(i=0;i<S.length;i++){
		if(S.str[i]==ch1)
		{
			S.str[i]=ch2;
		}
	}
}
