#include<stdio.h>
void duplicate(int *, int *, int *, int *, int *, int *, int *, char s[][20], char hash[100]);
int main(){
	char *text = "Red teaming is thrilling. Red teaming means planning, evading and striking! Red, red, red...";
	char hash[100];
	char s[20][20];
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
//		printf("%c",hash[j]);
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
//	printf("\n");
//	for(i=0;i<a;i++){
//		printf("\n");
//		for(j=0;j<20;j++){
//			if(s[i][j]=='\0')
//				break;
//			else
//				printf("%c",s[i][j]);
//		}
//	}
//	printf("\n");
	duplicate(&i,&j,&n,&p,&k,&b,&a,s,hash);
}
void duplicate(int *i, int *j, int *n, int *p, int *k, int *b, int *a,char s[][20], char hash[100]){
	int g=0,m=0,l=0,end=0,r=0,icounter,yes=0,dups=0;
	for(*i=0;*i<*a;(*i)++){
		icounter=*i;
		*p=*i+1;
//		*b=0;
		printf("%d.",*p);
		if(*i==(*a/2)-1){
			printf("%s\n",s[*i]);
			continue;
		}
		for(*j=0;*j<20;(*j)++){
			if(s[*i][*j]=='\0'){
				if(end==1 && l==m){
					printf(" <-- Found\n");
//					if(icounter==*i)
//						yes++;
					break;
				}
				else{
					yes=-1;
					printf("\n");
					break;
				}
			}
			else{
				l=0;
				for(g=*a;g>0;g--){
					for(m=0;m<20;m++){
						if( s[g][m+1]!='\0' && s[*i][m+1]!='\0'){
							if(s[g][m]==s[*i][m]){
								end=1;
								l++;
								break;
							}
							else{
								l=0;
							}
						}
						else
							break;
					}
				}
				printf("%c",s[*i][*j]);
			}
		}
	}
}
