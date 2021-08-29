#include<stdio.h>
int str4len(const char* a){
	int i=0;
	int count =0;
		while(a[i]!='\0'){
			i++;
			count++;
		}
	return count;
}
char* strcat(char* s1, char* s2){
	char *p;
	p=s1;
	while(*p!='\0'){
		p++;
	}
	printf("%c\n", *p);
	while(*s2!='\0'){
		*p=*s2;
		p=p+1;s2=s2+1;
	}
	*p='\0';
	return s1;
}
char* strcpy(char*s1,char*s2){
	int i=0;
	while(s2[i]!='\0'){
		s1[i]=s2[i];
		i++;
	}
	s1[i] = '\0';
	return s1;
}
int strcmp(const char*s1,const char*s2){
	int i=0;
	while(s1[i]==s2[i]){
		i++;
		if(s1[i]!=s2[i])
			if(s1[i]>s2[i])
			  return 1;
			else 
			  return -1;
			
	}
	return 0;
	
}
int main(){
	char s1[]= "programming in c is very interesting";
	char s2[]= "programming is interesting";
	int length1=sizeof (s1);
	int length2=sizeof (s2);
	printf("%d\n",str4len(s1));
	printf("%d\n",str4len(s2+11));
    printf("After string comparing value returned is: %d\n ",strcmp(s1,s2));
    printf("%s\n",s1+15);
    strcpy(s1+11,s2+11);
   	strcat(s1,"!!");
	printf("%s\n",s1);
    return 0;

}
