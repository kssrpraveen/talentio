#include<stdio.h>
int main(){
	int i=0,j=0;
	if(i++==j++)
	printf("%d %d",i--,j--);
	else
	printf("%d %d",i,j);
	return 0;
}
