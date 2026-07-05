#include<stdio.h>
  int main(){
  	
  	int a ,b,c;
  	printf("Enetr frist integer :");
  	scanf("%d" ,&a);
    printf("Enetr second integer :");
  	scanf("%d" ,&b);
    printf("Enetr third integer :");
  	scanf("%d" ,&c);
  	if(a>b){
	  printf("%d is Greatest",a);
	  }
	  else if(b>c){
	  	printf("%d is greatest" ,b);
	  }
	  else {
	  	printf("%d is greatest" ,c);
	  }
	  
}