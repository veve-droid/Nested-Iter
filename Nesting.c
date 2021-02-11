//nested

#include <stdio.h>
#define N 10

int main(){
	//variables data types
	int num;
	
	
	//menu
	printf("1.First n Perfect Numbers\n");
	printf("2.Factorial without using the multiplication operator\n");
	printf("3.Primality Check without using the modulo operator\n");
	printf("4.Exit\n");
	
	
	//intro
	do{
		printf("Choose from the menu above: ");
		scanf("%i", &num);
	}while(num < 1);
	
	if(num>4){
		printf("Invalid input.\n");
		return 0;
	}
	
	//body
	
	//first n perfect numbers
	
	if(num==1){
	int nth;
	unsigned long long int i, sum, n, count;
	
		do{
			printf("Enter a positive integer: ");
			scanf("%d", &nth);
		}while(nth<1);
		
		for(n=6,count=0;count<nth;n++){
		
			for(i=1,sum=0; i<n; i++){
			
				if(n % i == 0){
					sum=sum+i;}
			
			}
			
			if(sum==n){
					count=count+1;
					printf("%llu ", n);}
		}	
		
		printf("\n");
		return 0;
	}
	
	//factorial without multiply
	
	if(num==2){
	
		int i,j,n,num=1;
		long long int sum=1;
		
		do{
			printf("Enter a non negative integer: ");
			scanf("%i", &n);
		}while(n<0);

	
		for(i=1; i <= n; i++){
			sum=0;
			for(j=0;j<i;j++){
				sum+=num;
			}
			
			num=sum;
		}
		
		printf("%i factorial is %lli.\n", n, sum);
		printf("\n");
			
		return 0;	
	}
	
	//primality check
	
	if(num==3){
	
		int i,n,prime;
	
		do{
			printf("Enter a positive integer: ");
			scanf("%i", &n);
		}while(n<1);
		
		prime=1;
		
		for(i=2; i*i<=n; i++){
		
			if((float)n/i==(int)n/i)
			prime=0; //check if a factor of n
			
			}
			
		if(prime && n!=1){
			printf("%i is a prime number.\n", n);}
		else{
		printf("%i is not a prime number.\n", n);}
		

		return 0;
	}
	
	
}
