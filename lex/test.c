#include<stdio.h>

int main(){
    char a;
    char b[]="sas  sadfcas";
    scanf("%c",&a);
    if((a>'W'&&a<='Z')||(a>'w'&&a<='z')){
        a=a-23;
    }
    else    a+=3;
    printf("%c",a);
}