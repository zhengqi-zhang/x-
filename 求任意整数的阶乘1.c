//�������
#include <stdio.h>

int main()
{
	int i,n;
	double p=1.0;
	printf("������Ҫ��׳˵�����n:\n");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		p *= i;
	}
	printf("%d�Ľ׳���%g��\n",n,p);
	return 0;
 } 
