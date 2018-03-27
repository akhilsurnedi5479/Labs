%{
#include<stdio.h>
%}
keyword main|int|scanf|printf|if|else|float|do|while|for|switch|case|break|continue|return
identifier %d|%s|%f|%lld|%c|%ld
%%

{keyword} {
printf("%s: is a keyword!\n", yytext);
}
{identifier} {
printf("%s: is an identifier!\n", yytext);
}
[a-zA-Z]+ {
printf("%s: is neither a keyword nor an identifier!\n", yytext);
}

%%

int main(void)
{
yyin=fopen("num.c","r");
yylex();
}

/*int yywrap()
{
return 1;
}*/
