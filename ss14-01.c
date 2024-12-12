#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
char string[100];
printf("moi nhap chuoi: ");
fgets(string,sizeof(string)/sizeof(char),stdin);
int size=strlen(string);
char temp[1]=" ";
int i;
int count=1;
for(i=0;i<size;i++){
	if (string[i-1]==temp[0] && string[i]!=temp[0]){
		count++;
	}
}


printf("co %d tu trong chuoi", count-1);

   return 0;
}

