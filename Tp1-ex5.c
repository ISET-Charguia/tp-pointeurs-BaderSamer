/*
 ============================================================================
 Name        : Tp1-ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch[22];
	int i;
	int *p;
	puts("Donner une chaine");
	scanf("%s",ch);
	p=ch;
	for(i=0;i<strlen(ch);i++)
		*p=p+1;

	printf("lengeur de chaine est: %d",p);

	return 0;
}
