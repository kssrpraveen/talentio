#include<stdio.h>
#include<string.h>
int r(int);
int main(){
	int no=5;
	r(no);
	return 0;
}
int r(int no)
{
	if(no==0)
	return 0;
	else
	printf("%d",no);
	r(no--);
}
