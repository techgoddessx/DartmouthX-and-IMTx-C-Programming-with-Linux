#include <stdio.h>
#include <stdlib.h>

struct digit {
	int dig;
	struct digit * next;
};
struct digit * createdigit(int);
struct digit * append(struct digit *end,struct digit *newptr);
void print(struct digit *ptr);
int main(void){
	struct digit * start,* end,*newptr;
	int number = 1, number2 = 2;
	newptr = createdigit(number);
	start = end = newptr;
	newptr = createdigit(number2);
	end = append(end,newptr);
	print(start);
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
void print(struct digit *ptr){
	struct digit * end;
	end = ptr;
	while(end != NULL){
		printf("%p %d\n",end,end->dig);
		end = end->next;
	}
}
