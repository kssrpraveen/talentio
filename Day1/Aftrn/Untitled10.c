#include<stdio.h>
#define sqr(x) ++x * ++x
int main(){
	int a=2,z;
	z=++a*++a;
	a-=2;
	printf("%d %d",sqr(a),z);
	return 0;
}
