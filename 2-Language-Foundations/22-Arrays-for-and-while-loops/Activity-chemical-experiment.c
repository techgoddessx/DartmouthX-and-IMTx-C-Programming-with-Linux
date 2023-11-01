#include <stdio.h>

/**
 * you need to program an automatic device to monitor the manufacturing of the drug.
 * The device measures the temperature every 15 seconds and provides these measurement to your program.
 **/
int main(void){
    int mintemp, maxtemp;
    scanf("%d%d",&mintemp,&maxtemp); // read the minimum temp and max temp
    // read temperatures that are being provided by the device.
    int temp;
    int index = 0;
    int t[1000];

    while(temp != -999){
        scanf("%d",&temp);
        t[index] = temp;
        index += 1;
    }
    int i;
    for(i=0;i<index;i++)
    {
        if(t[i] <= maxtemp && t[i] >= mintemp)
        {
            printf("Nothing to report\n");
        }else if(t[i] == -999)
        {
            break;
        }else if(t[i] > maxtemp || t[i] < mintemp)
        {
            printf("Alert!\n");
            break;
        }
    }
    return 0;
}
