#include <iostream>
#include "singleList.h"

using namespace std;

int main()
{
	List L;
	// membuat suatu list,
	L.first=NULL;
	// mengalokasi elemen
	address p = new elmList;
	p->info = 10;
	p->next = NULL;
	
	//insert elemen baru ke list
	L.first = p;
	
	// menampilkan isi dari elemen
	cout<<"info dari first : " <<L.first->info<<endl;
	cout<<"info dari p : " <<p->info<<endl;
	return 0;
	
}
