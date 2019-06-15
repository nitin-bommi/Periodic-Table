#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct element {
	char name[20];
	char symbol[4];
	int atomicnum;
	float atomicwt;
}atom[118];

extern void table() {
	strcpy(atom[0].name,"HYDROGEN");
	strcpy(atom[0].symbol,"H");
	atom[0].atomicnum=1;
	atom[0].atomicwt=1.008;

	strcpy(atom[1].name,"HELIUM");
	strcpy(atom[1].symbol,"He");
	atom[1].atomicnum=2;
	atom[1].atomicwt=4.00;
}
