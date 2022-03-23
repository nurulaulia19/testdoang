#ifndef SINGLELIST_H_INCLUDED
#define SINGLELIST_H_INCLUDED
//#include <stdio.h>

// definisi untuk data dan pointer addres
typedef int infotype;
typedef struct elmList *address;

// definisi struktur dari element
struct elmList(
	infotype info;
	address next;
);

// definisi list
struct List(
	address first;
	
);

#endif // SINGLELIST_H_INCLUDED
