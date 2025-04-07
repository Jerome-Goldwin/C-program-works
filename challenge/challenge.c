#include<stdio.h>
#include<stdlib.h>
int main(){
	char *text = "Red teaming is thrilling. Red teaming means planning, evading, and striking! Red, red, red...";
	char hash[100];
	char s[20][20];
	int i=0,j=0,n=0,k=0,p=0;
	int b,a;
	while(*text != '\0') {
		if(*text==',' || *text=='.' || *text=='!'){
			text++;
			continue;
		}
		else{
			hash[i]=*text;
			i++;
			text++;
		}
	}
	for(j=0; j<i; j++){
		for(int m=65;m<91;m++){
			if(hash[j]==m)
				hash[j]=m+32;
		}
		printf("%c",hash[j]);
	}
	j=0;
	printf("\n%d\n",i);
	for(a=0;j<i;a++){
		for(b=0;b<=20;b++){
			if( hash[j] == ' ' || hash[j] == '\0' ){
				j++;
				//printf("\n1.s[%d][%d]=%d,%c",a,b,s[a][b],s[a][b]);
				s[a][b]='\0';
				break;
			}
			s[a][b]=hash[j];
			//printf("\n2.s[%d][%d]=%d,%c",a,b,s[a][b],s[a][b]);
			j++;
		}
	}
	for(i=0;i<a;i++){
		printf("\n");
		for(j=0;j<20;j++){
			if(s[i][j]=='\0')
				break;
			printf("%c",s[i][j]);
		}
	}
}
