#include <stdio.h>
struct point{
	int x;
	int y;
};
void readstruct(struct point *);
void printstruct(struct point);
int main(void){
	struct point z;
	readstruct(&z);
	printstruct(z);
	return 0;
}
void readstruct(struct point *ptr){
	scanf("%d",&ptr->x);
	scanf("%d",&ptr->y);
}
void printstruct(struct point pt){
	printf("%d,%d",pt.x,pt.y);
}
