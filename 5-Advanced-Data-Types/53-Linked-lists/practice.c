#include <stdio.h>
#include <stdlib.h>
struct point {
	int x;
	int y;
	struct point * next;
};
struct point * allocatememory(int, int);
struct point * append(struct point *, struct point *);
void print(struct point *);
int main(void){
	// struct point *polygon; // address of polygon
	struct point * start, * end, * storedvalues;
	printf("how many points ? ");
	int num;
	scanf("%d",&num);
	int x,y;
	for (int i = 0; i < num; i++){
		printf("x: ");
		scanf("%d",&x);
		printf("y: ");
                scanf("%d",&y);
		storedvalues = allocatememory(x,y); // function // storedvalues has the address of the stored values aka points
		if (i == 0){
			start = end = storedvalues;
		} else {
			end = append(end,storedvalues); // function // here comes the linked lists
		}
	}
	print(start);
	return 0;
}
struct point * allocatememory(int a, int b){
	struct point * address;
	address = (struct point *)malloc(sizeof(struct point));
	address->x = a;
	address->y = b;
	address->next = NULL;
	return address;
}
struct point * append(struct point * nextv, struct point * storedvalues){
	nextv->next = storedvalues;
	return (nextv->next);
}
void print(struct point * start){
	struct point * newaddress;
	newaddress = start;
	while(newaddress != NULL){
		printf("(%d,%d)",newaddress->x,newaddress->y);
		newaddress = newaddress->next;
	}
}


	



