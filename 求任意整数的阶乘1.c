//数据溢出
#include <stdio.h>

int main()
{
	int i,n;
	double p=1.0;
	printf("请输入要求阶乘的整数n:\n");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		p *= i;
	}
	printf("%d的阶乘是%g。\n",n,p);
	return 0;
 } 
