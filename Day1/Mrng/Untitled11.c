#include<stdio.h>
#include<string.h>
int main(){
	int i=3;
	int l=i/-2;//sign changed
	int k=i%-2;//sign not changed
	printf("%d %d\n",l,k);
	return 0;
}
