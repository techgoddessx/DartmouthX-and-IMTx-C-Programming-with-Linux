#include <stdio.h>
#include <stdlib.h>
struct point{
	int x;
	int y;
};
void reads(struct point *);
void printds(struct point *,int );
int main(void){
	struct point * poly;
	int vertices;
	printf("how many vertices? \n");
	scanf("%d",&vertices);
	poly = (struct point *) malloc(vertices*sizeof(struct point));
	for (int i = 0; i < vertices; i++){
		reads(&poly[i]);
	}
	printds(&poly[0],vertices);
	return 0;
}
void reads(struct point *ptr){
	printf("x: ");
	scanf("%d",&ptr->x);
	printf("y: ");
        scanf("%d",&ptr->y);
}
void printds(struct point *ptr,int vertices){
	for(int i = 0; i < vertices; i++){
		printf("%d,%d\n",ptr[i].x,ptr[i].y);
	}
}

