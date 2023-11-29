#include <stdio.h>
#include <stdlib.h>
struct point {
	int x;
	int y;
};
void read(struct point *);
void print(struct point *);
int main(void){
	struct point triangle[3];
	read(&triangle[0]);
	print(&triangle[0]);
	return 0;
}
void read(struct point * address){
	for(int i = 0; i < 3; i++){
		scanf("%d %d",&address[i].x,&address[i].y);
	}
}
void print(struct point * address){
	for(int i = 0; i < 3; i++){
		printf("(%d,%d)\n",address[i].x,address[i].y);
	}
}
