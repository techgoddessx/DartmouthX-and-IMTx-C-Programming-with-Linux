#include <stdio.h>
#include <stdlib.h>
struct digit {
	int n;
	struct digit * next;
};
struct digit *creatememory(int);
struct digit *append(struct digit *, struct digit *);
struct digit *readnumber();
void print(struct digit *);
void freeds(struct digit *);
struct digit * searchfor(struct digit *, int);
struct digit * reverselist(struct digit *);
int main(void){
	struct digit * start, * ptr, * backwards;
	start = readnumber();
	print(start);
	int sn = 1;
	ptr = searchfor(start,sn);
	if(ptr != NULL){
		printf("the number you asked for was found\n");
	}else{
		printf("the number you asked for was not found\n");
	}
	backwards = reverselist(start);
	print(backwards);
	freeds(backwards);
	freeds(start);
	return 0;
}
struct digit *creatememory(int num){
	struct digit * newaddy;
	newaddy = (struct digit *) malloc(sizeof(struct digit));
	newaddy->n = num;
	newaddy->next = NULL;
	return newaddy;
}
struct digit * append(struct digit * end, struct digit * newptr){
	end->next = newptr;
	end = newptr;
}
struct digit * readnumber(){
	char c;
	int d;
	struct digit * start,* newptr, *end;
	start = NULL;
	scanf("%c",&c);
	while(c != '\n'){
		d = c - 48;
		newptr = creatememory(d);
		if(start == NULL){
			start = end = newptr;
		}else {
			end = append(end,newptr);
		}
		scanf("%c",&c);
	}
	return start;
}
void print(struct digit * ptr){
	struct digit * end;
	end = ptr;
	while(end != NULL){
	       printf("(%p : %d)\n",end,end->n);
	       end = end->next;
	}
}
void freeds(struct digit *start){
	struct digit * end, *tmp;
	tmp = end = start;
	while(end != NULL){
		tmp = end->next;
		free(end);
		end = tmp;
	}
}
struct digit * searchfor(struct digit * start, int num){
	struct digit * last;
	last = start;
	while((last != NULL) && (last->n != num)){
		last = last->next;
	}
	return last;
}
struct digit * insertAtFront(struct digit * bstart, struct digit * newptr){
	newptr->next = bstart;
	return newptr;
}
struct digit * reverselist(struct digit * start){
	struct digit * ptr, * bstart, * newdigit;
	ptr = start;
	if (start != NULL){
		bstart = creatememory(start->n);
		ptr = ptr->next;
	}
	while(ptr!=NULL){
		newdigit = creatememory(ptr->n);
		bstart = insertAtFront(bstart,newdigit);
		ptr = ptr->next;
	}
	return bstart;
}
