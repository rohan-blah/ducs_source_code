%%
\/exit    {
    return 0;
}

[a-z]+  {
    int l = yyleng;
    while(l>0){
        for(int i=0;i<l;i++){
            printf("%c ",yytext[i]);
        }
        printf("\n");
        l--;
    }
}
%%

int main(int argc,char* argv[]){
    yylex();
    yywrap();
    return 0;
}