/*
 ============================================================================
 Name        : Tp1-ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int A[] = {12, 23, 34, 45, 56, 67, 78, 89, 90},s=0;
	 int *P;
	 P = A;

	s= *P+2;
	printf ("*P+2 = %d",s);
	s= *(P+2);
		printf ("*(P+2) = %d",s);
	s= &P+1 ;
		printf ("&P+1 = %d",s);
	s= *(&A[4]-3 );
		printf ("*(&A[4]-3 ) = %d",s);
	s= *(A+3 );
		printf ("*(A+3 ) = %d",s);
	s= &A[7]-P;
		printf ("&A[7]-P = %d",s);
	s= P+(*P-10) ;
		printf ("P+(*P-10)  = %d",s);
	s= *(P+*(P+8)-A[7]);
		printf ("*(P+*(P+8)-A[7]) = %d",s);

	return 0;
}
