int Substr_count(DSqSring substr,DSqSring str)
{
	int i=0,j,k,count=0;
	for (int i = 0; i < str.length; ++i)
	{
		for (j=i,k=0;str.str[j]==substr.str[k];j++,k++)
		{
			if (k==substr.length-1)
			{
				count++;
			}
		}
	}
	return (count);
}