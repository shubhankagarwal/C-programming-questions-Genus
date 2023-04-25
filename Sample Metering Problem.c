#include<stdio.h>
#include<string.h>

int main()
{
int i=0;
char strcopy[100];
char str[]="voltage 230.45,current 7.89,pf 0.91,KW 1289.33#";
int init_size = strlen(str);
char delim[]=", #";
char *ptr = strtok(str, delim);
while(ptr != NULL)
	{
		printf("'%s'\n", ptr);
		ptr = strtok(NULL, delim);

	}

	printf("\n");
	printf("%c",ptr);
	return 0;


}
/*#include <stdio.h>
#include <string.h>

int main ()
{
    char buf[] ="abc/qwe/ccd";
    int i = 0;
    char *p = strtok (buf, "/");
    char *array[3];

    while (p != NULL)
    {
        array[i++] = p;
        p = strtok (NULL, "/");
    }

    for (i = 0; i < 3; ++i)
        printf("%s\n", array[i]);

    return 0;
}*/

