#include<stdio.h>
#include<string.h>
 
void printChar(); 
int main (){
	printChar(); 
	
	
	return 0; 
} 
void printChar(){
	char string[1000]; 
	printf("Moi ban nhap vao 1 chuoi ki tu bat ki :");
	fgets(string , 1000, stdin ) ;
	printf("%s",string); 
	int i; 
	for(i=0;i<strlen(string) ; i++){
		printf("%3c",string[i]) ;
	} 
	
} 
