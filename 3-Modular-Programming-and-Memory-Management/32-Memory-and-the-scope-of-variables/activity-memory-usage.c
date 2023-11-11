#include <stdio.h>

int main()
{
        char type;
        int var;

        scanf("%c %d",&type,&var);

        int result = 0;

        if (type == 'i'){
                result = var * sizeof(int);
                //printf("%lu", var * sizeof(int));
        }else if(type == 's'){
                result = var * sizeof(short);
                //printf("%lu", var * sizeof(short));
        }else if(type == 'c'){
                result = var * sizeof(char);
                //printf("%lu", var * sizeof(char));
        }else if(type == 'd'){
                result = var * sizeof(double);
                //printf("%lu", var * sizeof(double));
        }
        // i 36794 => 147176
        // Calculate MB, KB, and B

        int MB = result / (1000 * 1000);
    int remainingBytes = result % (1000 * 1000);
    int KB = remainingBytes / 1000;
    int B = remainingBytes % 1000;

    if (MB != 0) {
        printf("%d MB and %d KB and %d B", MB, KB, B);
    } else if (KB != 0) {
        printf("%d KB and %d B", KB, B);
    } else {
        printf("%d B", B);
    }

        return 0;
}
