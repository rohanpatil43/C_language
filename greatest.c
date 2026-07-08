#include<stdio.h>
  int main()
  	{
  	int x , y , z;
  	printf("enter a 1st number :");
  	scanf("%d" ,&x );
  	 
  	 printf("enter a 2st number :");
  	scanf("%d" ,&y );
  	
  	printf("enter a 1st number :");
  	scanf("%d" ,&z );	 
  	 
  	 if(x>y && y>z){
  	 	printf("%d gretstet number  ",x);
	   }
	else if(y>x && y>z){
		printf("%d is greatest number" ,y);
	}
	else if(z>y && z>x){
		printf("%d is greatest number" ,z);
	}
  }
