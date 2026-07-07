//Revrse of sum number
#include<stdio.h>
   int main(){
   	
   	int n;
   	printf("Enter a number");
   	scanf("%d" ,&n);
   	
   	int r=0;
   	while(n>0){
   		r= r+(n%10);
   		r = r*10;
   		n =n/10;
   	if(n%2==0){
   		printf("The Revrse number %d" ,r);
	   }
	   }
   }
