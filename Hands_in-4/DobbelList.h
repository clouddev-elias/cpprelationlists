#ifndef DobbelList
#define DobbleList

template <typename DobbelNode>

class DobbelList{

private:
	
struct PrivateListItem{
		PrivateListItem* prv;
		PrivateListItem* nxt;
		DobbelNode crnt;
		int value = null;
	};

	PrivateListItem* last;        //!< The last item of the list.
	PrivateListItem* first;        //!< The first item of the list.
	int count;            //!< Zero-based count of items within the list.

public:
	DobbelList();
	~DobbelList();
	DobbelNode First();
	DobbelNode Last();

	int Count();
	void Add(DobbelNode dn);
	void RemAt(int index);
	DobbelNode GetAt(int index);
	void Clr();
};
#endif