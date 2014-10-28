%{
int lineno = 0;
%}
line	^(.*)\n
%%
{line}		{fprintf(yyout,"%4d\t%s", ++lineno, yytext);}
%%

int main (int argc, char *argv[]){
	yyin = fopen(argv[1], "r");
	yyout = fopen("output.txt", "w");
	yylex();
}