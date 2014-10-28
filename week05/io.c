// Formatted I/O

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	float x;
	float y;
	float z;
}point;

point cube[8] = {
	{0.0,0.0,0.0},
	{1.0,0.0,0.0},
	{0.0,1.0,0.0},
	{0.0,0.0,0.0},
	{1.0,0.0,0.0},
	{0.0,1.0,0.0},
	{0.0,0.0,0.0},
	{1.0,0.0,0.0}
};

int main () {
	int i;
	FILE *fout;
	
	fout = fopen("geometry.txt", "w");

	for (i=0;i<8;i++){
		fprintf(fout, "%f %f %f\n",
			cube[i].x,
			cube[i].y,
			cube[i].z);
	}
	fclose(fout);
}