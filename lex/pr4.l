%%
\{|\}|\[|\]|\(|\)|\;|\,|\'|\"   {

}


\%[a-zA-Z]  {
    printf("%s (placeholder)\n",yytext);
}

\'[a-zA-Z0-9]*\'   {
    printf("%s character\n",yytext);
}

\"[a-zA-Z0-9 \.]*\"   {
    printf("%s string\n",yytext);
}

#.+   {
    printf("%s (preprocessing directive)\n",yytext);
}

auto|break|case|char|const|continue|default|do|double|else|enum|extern|float|for|goto|if|int|long|register|return|short|signed|sizeof|static|struct|switch|typedef|union|unsigned|void|volatile|while   {
    printf("%s (keyword)\n",yytext);
}

[0-9]+  {
    printf("%s (integer)\n",yytext);
}

_*[a-zA-Z]+[0-9]*[a-zA-Z]*  {
    printf("%s (identifier)\n",yytext);
}

\+|\-|\*|\/|\%|\|\||\&\&|\||\&|\!|\>|\<|\=|\. {
    printf("%s (operator)\n",yytext);
}

[0-9]+\\.[0-9]+ {
    printf("%s (floating point number)\n",yytext);
}

\/\/.+|\/\*(\n*.+\n*.+\n*)+\*\/    {
    printf("%s (comment)\n",yytext);
}

%%

int main(int argc,char* argv[]){
    yyin=fopen(argv[1],"r");
    yylex();
    yywrap();
}