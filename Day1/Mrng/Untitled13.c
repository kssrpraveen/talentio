#include<stdio.h>
#include<string.h>
int main(){
	int a=5,b=-7,c=0,d;
	//d=++a&&++b||++c;
	d=++a||++b&&++c;
	printf("\n%d %d %d %d",a,b,c,d);
	return 0;
}
