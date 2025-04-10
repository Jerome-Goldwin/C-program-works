#include<stdio.h>
void display( char s[][30], int *, int *, int *);
void duplicate( int *, int *, int *, int *, char s[][30] );
void displayone( char s[][30], int ,int *);
int main(){
	char *text = "Red teaming is thrilling. Red teaming means planning, evading and striking! Red, red, red...";
	char hash[100];
	char s[100][30];
	int i=0,j=0,n=0,k=0,p=0,a=0,b=0;
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
	}
	j=0;
	for(a=0;j<i;a++){
		for(b=0;b<=20;b++){
			if( hash[j] == ' ' || hash[j] == '\0' ){
				j++;
				s[a][b]='\0';
				break;
			}
			s[a][b]=hash[j];
			j++;
		}
	}
//	display(s,&a,&i,&j);
	duplicate(&a,&i,&j,&p,s);
}

void display(char s[][30], int *a, int *i, int *j){
	for(*i=0;*i<*a;(*i)++){
		for(*j=0;s[*i][*j]!='\0';(*j)++){
			printf("%c",s[*i][*j]);
		}
		printf("\n");
	}
}

void duplicate( int *a, int *i, int *j, int *p, char s[][30] ){
	int check=0;
	*i=0;*j=0;*p=0;
	while(*i!=*a){
		check=0;
		printf("%2d. ",*i+1);
		for(*p=*a;*p>-1;(*p)--){
			for(*j=0;;(*j)++){
				if( (s[*i][*j]=='\0' && s[*p][*j]=='\0') && *i!=*j ){
					check+=1;
					break;
				}
				if(s[*i][*j] != s[*p][*j] ){
					break;
				}
			}
		}
		if(check>=1){
			displayone(s,*i,&check);
		}
		printf("\n");
		(*i)++;
	}
}

void displayone( char s[][30], int i, int *check){
	int j=0;
	printf("%-11s",s[i]);
	printf(" <-- %d times occurred",*check);
}
