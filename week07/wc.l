%{
int charCount = 0;
int wordCount = 0;
int lineCount = 0;
%}

word	[^ \t\n]+
eol		\n
%%
{word}		{wordCount++; charCount += yyleng;}
{eol}		{lineCount++;}
.			{charCount++;}
%%

int main (int argc, char *argv[]){
	if (argc >1){
		FILE *inFile;
		inFile = fopen(argv[1], "r");
		yyin = inFile;
	}
	yylex();
	printf("%d %d %d\n", charCount, wordCount, lineCount);
}