#include<stdio.h>
   int main(){

    int age;
    printf("Enter a age :");
    scanf("%d" ,&age);

    if(age>=15){
        printf("It is Elagible to vote ");
    }
    else{
        printf("It is adult");
    }
   
    return 0;
   }