//count the list of names which start and end with vowels

#include<stdio.h>
#include<string.h>
int main(){
    int n,c=0;
    printf("enter no. of words");
    scanf("%d",&n);
    char ch[n][20];
    for(int i=0;i<n;i++){
        scanf("%s",&ch[i]);
        int l=strlen(ch[i]);
        if((ch[i][0]=='a'||ch[i][0]=='e'||ch[i][0]=='i'||ch[i][0]=='o'||ch[i][0]=='u')&&(ch[i][l-1]=='a'||ch[i][l-1]=='e'||ch[i][l-1]=='i'||ch[i][l-1]=='o'||ch[i][l-1]=='u'))
        c++;
    }
    printf("%d",c);
}



//find out the largest string from the array

#include<stdio.h>
int main(){
   int n,c=0;
    printf("enter no. of words");
    scanf("%d",&n);
    char ch[n][20];
    for(int i=0;i<n;i++){
        scanf("%s",&ch[i]);
        int l=strlen(ch[i]); 
}
}

// count char total in word using loop
#include<stdio.h>
int main(){
    char name[]="fardeen";
    int c=0;
    for(int i=0;name[i]!='\0';i++)
    c++;
    printf("%d",c);
}