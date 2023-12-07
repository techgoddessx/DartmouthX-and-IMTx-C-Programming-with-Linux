#include <stdio.h>

int main(void){
	int n;
	int ep,r,w,h;
	int power = 0;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d %d",&h,&w);
		scanf("%d %d",&ep,&r);
		power += (w-h)*(ep+r);
	}
	printf("%d",power);
}
	
