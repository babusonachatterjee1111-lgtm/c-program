//2+5+8+11+14 upto n terms. W.C.P to calculate sum of given series //
# include<stdio.h>
int main ()
{
	int n,i,s=0;
	int p=2;
	printf("enter the n term");
	scanf("%d",&n);
	while(i<=n)
	{
		s=s+p;
		p+=3;
		i++;
	}
	printf("the sum of the series :%d",s);
	return 0;
}
