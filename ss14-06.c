#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	char string[100];
	int i;
printf("moi nhap chuoi: ");
fgets(string,sizeof(string)/sizeof(char),stdin);
int size=strlen(string);
int count=0;
int character;
char temp[1]=" ";
for(i=0;i<size;i++){
	if(string[i]>= '0' && string[i]<='9' || string[i]==temp[0]){
	count++;
	}
}

character=size-count-1;
printf("co %d ki tu la chu cai trong chuoi.", character);
   return 0;
}

