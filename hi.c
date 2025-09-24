#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n>0)
	printf("the given nmber is positive");
	else if(n<0)
	printf("the given number is negative");
	else
	printf("the given number is zero");
	return 0;
}