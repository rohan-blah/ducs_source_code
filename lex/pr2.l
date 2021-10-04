%{
    int key=3;
%}

%%
[a-zA-Z]    {
    char ch = yytext[0];
    if(ch>='a' && ch<='z'){
        if(ch+key>'z'){
            ch-=(26-key);
        }else{
            ch+=key;
        }
    }else if(ch>='A' && ch<='Z'){
        if(ch+key>'Z'){
            ch-=(26-key);
        }else{
            ch+=key;
        }
    }
    printf("%c",ch);
}
[^ a-zA-Z]  {
    printf("%c",yytext[0]);
}
%%

int main(int argc,char* argv[]){
    if(argc==3){
        key=atoi(argv[2]);
        key=key%26;
        printf("using key : %d\n",key);
    }else{
        printf("Using default key : %d\n",key);
    }
    yyin=fopen(argv[1],"r");
    yylex();
    yywrap();
    return 0;
}

