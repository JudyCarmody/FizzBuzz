#include<stdio.h>
#include<string.h>

void main(){
	int n;
	for(n = 1; n<=100; n++){
		if(n%15==0){printf("FIZZBUZZ (%d)\n", n);}
		else if(n%3==0){printf("FIZZ (%d)\n", n);}
		else if(n%5==0){printf("BUZZ (%d)\n", n);}
		else printf("%d\n", n);
	}
}