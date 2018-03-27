%{
	#include<stdio.h>
%}
%%
[.]* {
	printf("%s\n", yylex);
}
%%
int main(void) 
{
	yylex();
	return 0;
}
