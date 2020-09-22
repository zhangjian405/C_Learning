#include<stdio.h>
int Shall(int s[],int n)
{
	int i,j,d;
	d=n/2;/*定义初始的增虽值*/
	while(d>=1)
	{
		for(i=d+1;i<=n;i++)
		{
			
			s[0]=s[i];
			j=i-d;
			while((j>0)&&(s[0]<s[j]))
			{
				
				s[j+d]=s[j];
				j=j-d;
			} 
			s[j+d]=s[0];
		}	
	d =d/2;
	}
return 0;

}
int main()
{
	int a[11],i;
	printf("请输入十个数字：");
	for(i=1;i<=10;i++)
	scanf("%d",&a[i]);
	Shall(a,10);
	for(i=1;i<=10;i++)
	printf("%5d",a[i]);
	return 0;

}
