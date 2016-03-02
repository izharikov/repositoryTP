#include <stdio.h>
int main(){
	printf("Enter age (in years): ");		//enter age
	int n;						//n - age
	scanf("%d", &n);				//read n
	printf("Your age in days: %d\n", n * 365);	//print age in days
	return 0;
}
