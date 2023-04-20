#include <stdio.h>
int num = 10;
int main()
{

 int *ptr;
 ptr=&num;
 printf("This is the value of num %d\n",num);
 printf("This is the address of num %p\n",&num);
 printf("This is the address of ptr %p\n",&ptr);
 *ptr=15;
 printf("This is the value of num %d\n",num);


}
