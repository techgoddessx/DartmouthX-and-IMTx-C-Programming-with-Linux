#include <stdio.h>
#include <stdlib.h>

struct digit {
	int dig;
	struct digit * next;
};
struct digit * createdigit(int);
struct digit * append(struct digit *end,struct digit *newptr);
int main(void){
	struct digit * start,* end,*newptr;
	int number = 1, number2 = 2;
	newptr = createdigit(number);
	start = end = newptr;
	newptr = createdigit(number2);
	end = append(end,newptr);
}
struct digit * createdigit(int num){
	struct digit * ptr;
	ptr = (struct digit *) malloc(sizeof(struct digit));
	ptr->dig = num;
	ptr->next = NULL;
	return ptr;
}
struct digit * append(struct digit *end,struct digit *newptr){
	end->next = newptr;
	end = newptr;
	return end;
}
	
