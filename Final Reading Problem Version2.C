#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>


int main()
{
char input[100];
    int index = 0;
    float voltage, current, pf, KW;
    float readings[100][4];
int l;
    printf("Enter string of readings in the sample format voltage 265,current 65,pf 0.91,KW 1289.33 (type '#' to quit):\n");
   {
       while (1){
        fgets(input, 100, stdin);
        if (strcmp(input, "#\n") == 0)
        {
            break;
        }
        sscanf(input, "voltage %f, current %f, pf %f,KW %f", &voltage, &current, &pf, &KW);
if (voltage>180 && voltage<260)
    {l=1;}
else if (current>0 && current<60)
    { l=2;}
else if (pf > 0.75)
    {l=3;}
else
{l=4;}

switch (l)
{case 1:
      printf("Voltage is in healthy condition\n");
break;

      case 2:

      printf("Current is in healthy condition\n");
      break;
case 3:

        printf("Power factor is out of range\n");
        break;

case 4:
        readings[index][0] = voltage;
        readings[index][1] = current;
        readings[index][2] = pf;
        readings[index][3] = KW;
        index++;

         printf("Voltage\tCurrent\tPF\tKW\n");
         break;

}
for (int i = 0; i < index; i++)
        {
        printf("%.2f\t%.2f\t%.2f\t%.2f\n", readings[i][0], readings[i][1], readings[i][2], readings[i][3]);
        }
 continue;}

    return 0;
}
}


