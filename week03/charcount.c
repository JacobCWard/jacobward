//

#include <stdio.h>



int main () {
	int c;
	int nl = 0;
	int nw = 0;
	int nc = 0;
	int state = OUT;
	
	
	while ((getchar()) != EOF) {
		++nc;
		if ( c == '\n' ) {
			++nl;
		}
		if (c==' '||c=='\n'||c=='\t'){
			state=OUT;
		}
		else if (state == OUT) {
			state=IN;
			++nw;
		}
	}
	
	printf("%d %d %d\n", nl, nw, nc);
}