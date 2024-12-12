#include<stdio.h>
 
int main (){
int kiTu , i ;
int count =0; 
char c[]="Hello" ;
printf("Moi ban nhap vao 1 ki tu : ");
scanf("%c",&kiTu);
int length = sizeof(c)/sizeof(char); 
for(i=0;i<length; i++){
	if(c[i]==kiTu){
		count++; 
	} 
} 
  if (count==1){
  	printf("Ki tu %c xuat hien %d lan o vi tri thu %d ",kiTu,count,i+1);
  }else{
  	printf("Ki tu %c khong co ",kiTu); 
  } 

return 0;	
}

