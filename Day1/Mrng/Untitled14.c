#include<stdio.h>
#include<string.h>
int main(){
	int a=10;
//	void f();
	a=f();
	printf("%d\n",a);// printing integer value
	return 0;
}
void f(){
	printf("hello\n");
}
