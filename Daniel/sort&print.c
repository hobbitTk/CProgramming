int* SortAndPrintArr(int *myArr,int n)
{
	int ind[98]={0};
	int i,j;
	for ( i = 0; i < n; i++)
	{
		ind[myArr[i]]++;
	}
	for ( i = 0; i < 98; i++)
	{
		for ( j = 0; j < ind[i]; j++)
		{
			printf("%d, ",i);
		}
	}
}
