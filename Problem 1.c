#include<stdio.h>
int main()
{
	int a,i=0,j,k;


	printf("Enter starting limit ");
	scanf("%d",&a);
	printf("Enter ending limit ");
	scanf("%d",&j);
	while(a<=j)
	{

		if(a%2==0)
		{
			i++;

			if(i==3)
            {
                printf("%d",a);
            }
        }


		a++;
	};


};
