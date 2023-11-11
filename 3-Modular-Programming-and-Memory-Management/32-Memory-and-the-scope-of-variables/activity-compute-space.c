#include <stdio.h>

int main(void)
{
        int n;
        scanf("%d",&n);

        int value;
        char type;

        int total_bytes = 0;
        int notatype = 0;

        for (int i = 0; i < n; i++)
        {
                scanf("%d %c",&value,&type);
                if(type == 'i'){
                        total_bytes = total_bytes + (value * sizeof(int));
                }else if(type == 'c'){
                        total_bytes = total_bytes + (value * sizeof(char));
                }else if(type == 'd'){
                        double d[value];
                        total_bytes = total_bytes + (value * sizeof(double));
                }else{
                    notatype = 1;
                    break;
                }
        }
        if(notatype == 1){
            printf("invalid tracking code type");
        }else{
            printf("%d bytes",total_bytes);
        }
        
        return 0;
}
