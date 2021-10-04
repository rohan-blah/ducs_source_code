%{
    int size=0;
    char largest[1000]="";    
%}

alpha   [a-zA-Z]

%%
{alpha}+   {
    if(yyleng>size){
        size=yyleng;
        strcpy(largest,yytext);
    }
}

\n  {

}
%%

int main(int argc, char* argv[]){
    yyin=fopen(argv[1],"r");
    yylex();
    yywrap();
    printf("largest string : %s",largest);
}