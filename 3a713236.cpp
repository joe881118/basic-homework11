#include <stdio.h>
#include<stdlib.h>
int main(void) 
{
	int X,Y,Z;
	int bigger,smaller;
	int max,mid,min;
	printf("�п�J���:");
	scanf("%d",&X);
    printf("�п�J���:");
	scanf("%d",&Y);	
	printf("�п�J���:");
	scanf("%d",&Z);
	if(X>Y)
	 bigger=X,smaller=Y;
	else
	 bigger=Y,smaller=X;
	if(bigger>Z)
	{
		max=bigger;
		if(Z>smaller)
			mid=Z,min=smaller;
		else
		    mid=smaller,min=Z;
	} 
	else
	 max=Z,mid=bigger,min=smaller;
	printf("�Ѥj��p�ƦC%d %d %d",max,mid,min);
	system("pause");
	return 0;
}
