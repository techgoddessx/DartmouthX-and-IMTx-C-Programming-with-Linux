#include <stdio.h>
#include <stdbool.h>

int main(void){
        int mini,maxi;
        scanf("%d %d",&mini,&maxi);
        int temp;
        bool noalert = true;
        while(noalert){
                scanf("%d",&temp);
                if(temp >= mini && temp <= maxi) {
                        printf("Nothing to report\n");
                } else if ((temp < mini || temp > maxi) && temp != -999){
                        printf("Alert!\n");
                        noalert = false;
                } else if (temp == -999){
                        noalert = false;
                }
        }
        return 0;
}
