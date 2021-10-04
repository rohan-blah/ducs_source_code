%{
    int MAX = 1000;
    char brackets[1000];
    int top_b=-1,top_n=-1,top_o=-1;
    int numbers[1000];
    char op[1000];
%}

operator    [\+|\-|\*|\/|\%]
alphabets       [a-zA-Z]
digit       [0-9]+
%%
{alphabets}{alphabets}+     {
    printf("Invalid expression contains alphabets\n");
    return 0;
}

{operator}    {
    printf("operator -> %s\n",yytext);
}

{operator}{operator}+    {
    printf("multiple operators -> %s invalid expression\n",yytext);
    return 0;
}

^{operator}{digit}   {
    if(yytext[0]!='-'){
        printf("starting with operator -> %s invalid expression",yytext);
        return 0;
    }else{

        printf("number -> %s\n",yytext);
    }
    
}

.+{operator}$    {
    printf("ending with operator -> %s invalid expression",yytext);
    return 0;
}

{digit}+|{digit}*{alphabets}     {
    printf("identifier -> %s\n",yytext);
}

\(  {
    printf("breacket open -> %s\n",yytext);
    brackets[++top_b]=yytext[0];
}

\)  {
    printf("breacket close -> %s\n",yytext);
    if(top_b==-1){
        printf("Invalid expression close brackets before any open bracket");
        return 0;
    }else{
        if(brackets[top_b]=='('){
            top_b--;
        }
    }
}

\({operator}{digit}  {
    if(yytext[1]!='-'){
        printf("operator just after breacket open -> %s invalid expression",yytext);
        return 0;
    }else{
        printf("number -> %s\n","[\1]");
    }
}


{digit}\(  {
    printf("no operator between digit and breacket open -> %s invalid expression",yytext);
    return 0;
}

\){digit}  {
    printf("no operator between breacket close and digit -> %s invalid expression",yytext);
    return 0;
}

\)\(  {
    printf("no operator between breackets -> %s invalid expression",yytext);
    return 0;
}

\(\)  {
    printf("no expression between breackets -> %s invalid expression",yytext);
    return 0;
}


\[  {
    printf("breacket open -> %s\n",yytext);
    brackets[++top_b]=yytext[0];
}

\]  {
    printf("breacket close -> %s\n",yytext);
    if(top_b==-1){
        printf("Invalid expression close brackets before any open bracket");
        return 0;
    }else{
        if(brackets[top_b]=='['){
            top_b--;
        }
    }
}

\[{operator}{digit}  {
    if(yytext[1]!='-'){
        printf("operator just after breacket open -> %s invalid expression",yytext);
        return 0;
    }else{
        printf("number -> %s\n","[\1]");
    }
}


{digit}\[  {
    printf("no operator between digit and breacket open -> %s invalid expression",yytext);
    return 0;
}

\]{digit}  {
    printf("no operator between breacket close and digit -> %s invalid expression",yytext);
    return 0;
}

\]\[  {
    printf("no operator between breackets -> %s invalid expression",yytext);
    return 0;
}

\[\]  {
    printf("no expression between breackets -> %s invalid expression",yytext);
    return 0;
}

\{  {
    printf("breacket open -> %s\n",yytext);
    brackets[++top_b]=yytext[0];
}

\}  {
    printf("breacket close -> %s\n",yytext);
    if(top_b==-1){
        printf("Invalid expression close brackets before any open bracket");
        return 0;
    }else{
        if(brackets[top_b]=='{'){
            top_b--;
        }
    }
}

\{{operator}{digit}  {
    if(yytext[1]!='-'){
        printf("operator just after breacket open -> %s invalid expression",yytext);
        return 0;
    }else{
        printf("number -> %s\n","[\1]");
    }
}


{digit}\}  {
    printf("no operator between digit and breacket open -> %s invalid expression",yytext);
    return 0;
}

\}{digit}  {
    printf("no operator between breacket close and digit -> %s invalid expression",yytext);
    return 0;
}

\}\{  {
    printf("no operator between breackets -> %s invalid expression",yytext);
    return 0;
}

\{\}  {
    printf("no expression between breackets -> %s invalid expression",yytext);
    return 0;
}

%%

int yywrap(){
    return 1;
}

int main(int argc,char* argv[]){
    yylex();
    yywrap();
    return 0;
}