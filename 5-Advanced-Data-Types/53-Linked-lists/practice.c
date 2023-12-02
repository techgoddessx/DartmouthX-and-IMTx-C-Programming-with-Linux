#include <stdio.h>
#include <stdlib.h>
struct digit {
	int num;
	struct digit * next;
};
struct digit * readnumber();
struct digit * createdigit(int d);
struct digit * append(struct digit *, struct digit *);
void print(struct digit *);
struct digit * sortit(struct digit *);
struct digit * sortit2(struct digit *start, struct digit *newptr);
int main(void){
	struct digit *start,*sorted;
	start = readnumber();
	print(start);
	sorted = sortit(start);
	printf("\n");
	print(sorted);

}
struct digit * atfront(struct digit *start, struct digit *newptr){
	newptr->next = start;
	return newptr;
}
struct digit * sortit2(struct digit *start, struct digit *newptr){
	struct digit * prev, * ptr;
	ptr = start;
	prev = NULL;
	while((ptr != NULL) && (ptr->num < newptr->num)){
		prev = ptr;
		ptr = ptr->next;
	}
	if (prev == NULL){
		start = atfront(start,newptr);
	}else{
		prev->next = newptr;
		newptr->next = ptr;
	}
	return start;
}
struct digit * sortit(struct digit * start){
	struct digit *sortedstart = NULL;
	struct digit *newptr;
	if (sortedstart == NULL){
		sortedstart = createdigit(start->num);
		start = start->next;
	}
	while(start != NULL){
		newptr = createdigit(start->num);
		sortedstart = sortit2(sortedstart,newptr);
		start = start->next;
	}
	return sortedstart;
}
struct digit * readnumber(){
	int d;
	char c;
	struct digit * start = NULL;
	struct digit * newptr, * end;
	scanf("%c",&c);
	while(c != '\n'){
		d = c - 48;
		newptr = createdigit(d);
		if (start == NULL){
			start = end = newptr;
		} else {
			end = append(end, newptr);
		}
		scanf("%c",&c);
	}
	return start;
}
struct digit * createdigit(int d){
	struct digit *ptr;
	ptr = (struct digit *) malloc(sizeof(struct digit));
	ptr->num = d;
	ptr->next = NULL;
	return ptr;
}
struct digit * append(struct digit * start, struct digit * newptr){
	start->next = newptr;
	return (start->next);
}
void print(struct digit * start){
	while(start != NULL){
		printf("(%p : %d)\n",start,start->num);
		start = start->next;
	}
}
