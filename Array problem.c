#include<stdio.h>
int main()
{
    int i,j,k=0,l;
    int arr[50],b[50];

    printf("Enter size of array\t");
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
        printf("Enter the value of each element arr[%d] ", j+1);
        scanf("%d",&arr[j]);

    }
    for(j=0;j<i;j++)
    {
        if(arr[j]%2==0){
                k++;
                b[k]=arr[j];


        }

    }
    printf("\n Number of Even terms in arr[%d] : %d",j,k);
    printf("\n Number of Odd terms in arr[%d] : %d",j,j-k);
    while(1)
    {

        printf("\n Enter the position of even element in the array ");
        scanf("%d",&l);
        if(l<=k && l>0)
        {
            printf("\n The even element at position %d is:  %d ",l,b[l]);
            break;
        }
        else{
            printf("Invalid position entered");
        }
    }
    };
