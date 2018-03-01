/*
 ============================================================================
 Name        : Tp1-ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int m,n,A[30],B[30],i;
	int *p1,*p2;
	do{
		printf ("Donner M et N");
		scanf("%d%d",&m,&n);
	}while(m<0 || n<0);

	for(i=0;i<n;i++)
		scanf("%d",A[i]);
	for(i=0;i<m;i++)
			scanf("%d",B[i]);

	malloc(p1,n+m);
	p1=A;
	for(i=A+n;i<A+(m+n);i++)
		p1=B;

	return 0;
	}
}
