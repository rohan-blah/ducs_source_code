%%
\{|\}|\[|\]|\(|\)|\;|\,|\'|\"|\ +   {
}


\%[a-zA-Z]  {
}

\'[a-zA-Z0-9]*\'   {
}

\"[a-zA-Z0-9 \.]*\"   {
}

#.+   {
}

auto|break|case|char|const|continue|default|do|double|else|enum|extern|float|for|goto|if|int|long|register|return|short|signed|sizeof|static|struct|switch|typedef|union|unsigned|void|volatile|while   {
}

[0-9]+  {
}

_*[a-zA-Z]+[0-9]*[a-zA-Z]*  {
    printf("%s (identifier\n)",yytext);
}

\+|\-|\*|\/|\%|\|\||\&\&|\||\&|\!|\>|\<|\=|\. {
}

[0-9]+\\.[0-9]+ {
}

\/\/.+|\/\*(\n*.+\n*.+\n*)+\*\/    {
}

%%

int main(int argc,char* argv[]){
    yyin=fopen(argv[1],"r");
    yylex();
    yywrap();


}