#include<stdio.h>
int main()
{
	int a,b,i=0,j,k;

	printf("Enter starting limit ");
	scanf("%d",&a);
	printf("Enter ending limit ");
	scanf("%d",&j);
	while(a<=j)
	{

		printf("Enter position of even number you want to display ");
        scanf("%d",&b);
		if(a%2==0)
		{
            i++;
            if(b<=i){
                    printf("Positions of even number %d and its value is %d\n",i,a);
                break;
            }
        }


		a++;
	}

	};



