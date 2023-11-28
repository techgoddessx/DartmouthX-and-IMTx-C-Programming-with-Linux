#include <stdio.h>
struct point {
	int x;
	int y;
	struct point * next;
};

void printlinkedlist(struct point *);

int main(void){
	struct point p1 = {1,2,NULL};
	struct point p2 = {3,4,NULL};
	struct point p3 = {5,6,NULL};
	struct point p4 = {7,8,NULL};

	struct point *start;

	start = &p1;
	p1.next = &p2;
	p2.next = &p3;

	printlinkedlist(start);
	
	return 0;
}

void printlinkedlist(struct point * ptr1){
	while(ptr1 != NULL){
		printf("%d %d\n",ptr1->x,ptr1->y);
		ptr1 = ptr1->next;
	}
}

