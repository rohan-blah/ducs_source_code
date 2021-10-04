%{
    int lc=0,cc=0;
%}

%%
\n ++lc;
. ++cc;
%%

int main(int argc,char* argv[])
{
    yyin = fopen(argv[1],"r");
    yylex();
    yywrap();
    printf("\nNo. of lines : %d",lc+1);
    printf("\nNo. of character : %d",cc);
    return 0;
}