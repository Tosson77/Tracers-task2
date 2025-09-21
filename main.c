/*
 * main.c
 *
 *  Created on: Sep 10, 2025
 *      Author: MARWAN TOSSON
 */


#include <stdio.h>
#include <stdlib.h>

int main() {
int x=0,y=1,sum,n;
printf("Enter Number: ");
fflush(stdout);
scanf("%i",&n);
if (n==1){
	printf("0\n");
}
else if(n==2){
	printf("0\n1\n");
}
else {
	printf("0\n");
	printf("1\n");
	for(int i=0;i<n-2;i++){

		sum=x+y;
		x=y;
		y=sum;

		printf("%i\n",sum);
}
}

	return 0;
}
