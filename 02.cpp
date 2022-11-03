#include <stdio.h>
#include <iostream>

using namespace std;

int  a,b,c;

int main(){
	
	printf("Enter First Value : ");
	scanf("%d",&a);
	printf("Enter Second Value : ");
	scanf("%d",&b);
	printf("Enter Third Value : ");
	scanf("%d",&c);
	
	int sum = a+b+c; 
	
	if(a,b,c >=0 && a,b <=30 && c<=40){
		if(sum>=80){
			printf("A");
		}
		else if(sum>=75){
			printf("B+");
		}
		else if(sum>=70){
			printf("B");
		}
		else if(sum>=65){
			printf("C+");
		}
		else if(sum>=60){
			printf("C");
		}
		else if(sum>=55){
			printf("D+");
		}
		else if(sum>=50){
			printf("D");
		}
		else if(sum>=0){
			printf("F");
		}
	}
	
return 0;
}

