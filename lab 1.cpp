#include<stdio.h>

/*declare the function*/
void swap(int*,int*);

/*define the function*/
void swap(int *a,int *b)
{   int c=*a;
    *a=*b;
    *b=c;
}
int main(){
	int x,y;
	printf("enter value of x :");
	scanf("%d",&x);
	printf("enter value of y :");
	scanf("%d",&y);
	swap(&x,&y);
	printf("\nAter swaping\na is %d\nb is %d",x,y);
return 0;
}