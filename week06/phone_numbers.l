%%
[\n\t ]		;
[0-9]{3}[-][0-9]{3}[-][0-9]{4}		{printf("A full length phone number was found: %s\n", yytext);}
[0-9]{3}[-][0-9]{4}		{printf("A local phone number was found: %s\n", yytext);}
.		;
%%
main(){
	yylex();
}