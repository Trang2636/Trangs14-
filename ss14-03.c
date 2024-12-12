#include<stdio.h> 
#include<math.h> 
void reverseString ();
int main(){
	reverseString(); 
	return 0; 
} 
void reverseString(){
	char string[1000];
	printf("Moi ban nhap vao chuoi ki tu: ");
	fgets(string , 1000, stdin);
	printf("Chuoi ki tu truoc khi dao nguoc la: %s",string );
	int i;
	int size = sizeof(string)/sizeof(char); 
	
	for( i=0 ; i<=(size)/2 ; i++){
		int temp =string[i];
		 string[i]=string[size-i-1];
	   string[size-i-1] =temp ;
	} 
		printf("Chuoi sau khi dao nguoc la:\n ");
	for(i=0;i<size;i++){
		printf("%c",string[i]); 
	} 
	
}
