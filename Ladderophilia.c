#include<stdio.h>


 

int main(){

int n;

scanf("%d",&n);

while(n--){

for(int i=1;i<=5;i++){

for(int j=1;j<=5;j++){

if((i==3)&&(j==1||j==5))

printf("*");

if(i==1&&(j==1||j==5))

printf("*");

if((i==1||i==3)&&(j>1&&j<5))

printf(" ");

if(i==2||i==4)

printf(" ");

if(i==5)

printf("*");

}

printf("\n");

}

 

}

for(int i=1;i<=4;i++){

for(int j=1;j<=5;j++){

if(i==1||i==3)

printf(" ");

if((i==2)&&(j==1||j==5))

printf("*");

if(i==4&&(j==1||j==5))

printf("*");

if((i==2||i==4)&&(j>1&&j<5))

printf(" ");

}

printf("\n");

}

}
