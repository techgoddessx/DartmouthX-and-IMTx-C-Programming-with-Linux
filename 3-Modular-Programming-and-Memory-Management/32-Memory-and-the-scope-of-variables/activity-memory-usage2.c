#include <stdio.h>

int main()
{
        char type;
        int var;

        scanf("%c %d",&type,&var);

        int result = 0;

        if (type == 'i'){
                result = var * sizeof(int);
                //printf("%d", var * sizeof(int));
        }else if(type == 's'){
                result = var * sizeof(short);
                //printf("%d", var * sizeof(short));
        }else if(type == 'c'){
                result = var * sizeof(char);
                //printf("%d", var * sizeof(char));
        }else if(type == 'd'){
                result = var * sizeof(double);
                //printf("%d", var * sizeof(double));
        }
        // i 36794 => 147176
        // Calculate MB, KB, and B
if (result > 1000000){
            int MB = result / 1000000;
            int KB = (result % 1000000)/ 1000;
            int B = result % 1000;
            printf("%d MB and %d KB and %d B",MB,KB,B);
        }else if (result < 1000000 && result > 100){
            int KB = result / 1000;
            int B = result % 1000;
            printf("%d KB and %d B",KB,B);
        }else if (result < 100) {
            printf("%d B", result);
        }


        return 0;
}
