%{
  int c=0,s=0,w=0,l=0;  
%}

space   [ \t]

%%
\ + {
    s++;
}

[^\n\sa-zA-Z]   {}

[a-zA-Z][a-zA-Z]+   {
    w++;
    c=c+yyleng;
}

\n+  {
    l++;
}



[a-zA-Z]  {
    c++;
}


<<EOF>>   {
    l++;
    return 0;
}


%%
int main(int argc,char* argv[]){
    yyin = fopen(argv[1],"r");
    yylex();
    yywrap();
    printf("words : %d\ncharacters : %d\nblank spaces : %d\nlines : %d",w,c,s,l);
}