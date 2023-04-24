#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>


int main(){
char input[100];
    int index = 0;
    float voltage, current, pf, KW;
    float readings[100][4];

    printf("Enter string of readings (type 'exit' to quit):\n");
   while (1){
        fgets(input, 100, stdin);
        if (strcmp(input, "exit\n") == 0) {
            break;
        }
        sscanf(input, "voltage %f, current %f, pf %f,KW %f", &voltage, &current, &pf, &KW);
        if (pf > 0.75 && (voltage<180 || voltage>260) && (current<0 || current>60)) {
            readings[index][0] = voltage;
            readings[index][1] = current;
            readings[index][2] = pf;
            readings[index][3] = KW;
            index++;
        } else {
            printf("Either Power factor is less than or equal to 0.75 or the voltage and current is in healthy condition\n ");

        }
    }

    printf("Voltage\tCurrent\tPF\tKW\n");
    for (int i = 0; i < index; i++) {
        printf("%.2f\t%.2f\t%.2f\t%.2f\n", readings[i][0], readings[i][1], readings[i][2], readings[i][3]);
    }

    return 0;
}

