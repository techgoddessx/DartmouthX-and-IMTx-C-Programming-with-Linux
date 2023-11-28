#include <stdio.h>
struct point{
	int x;
	int y;
};
void readpt(struct point *pt);
void printpt(struct point pt);
int main(void){
	struct point z[3];
	for(int i = 0; i < 3; i++){
		readpt(&z[i]);
	}
	for(int i = 0; i < 3; i++){
                printpt(z[i]);
        }
	return 0;
}
void readpt(struct point *pt){
	scanf("%d %d",&pt->x,&pt->y);
}
void printpt(struct point pt){
	printf("%d,%d\n",pt.x,pt.y);
}
