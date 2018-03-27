%{
int com=0;
%}
%%
"/*"[^\n]+"*/" {com++;fprintf(yyout, " ");}
%%
int main()
{
printf("Write a C program\n");
yyout=fopen("output", "w");
yylex();
printf("Comment=%d\n",com);
return 0;
}
