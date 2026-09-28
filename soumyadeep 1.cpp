// 1+2+4+7+11 upto n terms .W.C.P to calculate sum of the given series //
# include<stdio.h>
int main()
{
	int n;
	int term=1;
	int sum=0;
	int i=1;
	printf("\n enter the integer :");
	scanf("%d",&n);
	while(i<=n)
	{
		sum+=term;
		term+=i;
		i++;
	}
	printf("the sum is : %d",sum);
	return 0;
}
