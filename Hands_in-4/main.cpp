#include <iostream>
#include <cstdlib>
#include "DobbelList.h"

using namespace std;

template <typename DobbelNode>

void DobbelList<DobbelNode>::Add(DobbelNode li){

	PrivateListItem* pLItem = new PrivateListItem;
	pLItem.crnt = li;

	if (count > -1){
		pLItem.nxt = first;
		pLItem.prv = last;
		last.nxt = pLItem;
		last = pLItem;
		count++;
	}
	else if (count == -1){
		first = pLItem;
		first.nxt = pLItem;
		first.prv = pLItem;
		last = pLItem;
		last.nxt = pLItem;
		last.prv = pLItem;
		count = 0;
	}

}
	template <typename DobbelNode>
	int DobbelList<DobbelNode>::Count(){
		return count;
	}



int main(){
	 
	template <typename DobbelNode>
	DobbelList<DobbelNode> dblist;

	cout << "Hello World" << endl;



	cout << "Counts:  "; dblist::count();
	
	system("PAUSE");
	

}