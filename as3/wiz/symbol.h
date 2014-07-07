#include <stdio.h>
typedef char *Key;
typedef char *Type;
typedef struct symbols *Symbols;
typedef struct symbol *Symbol;


struct symbols{
    Symbol first;
    Symbols rest;
};

struct symbol{
	Type type;
	Key key;
	//if it is a proc, it should have several params
	//and those params could be call by val or call by ref
	Boolean val;
	Boolean ref;
	//if it is a proc, it could have a list of symbols
	Symbols symbols;
	int up_bound;
	int low_bound;
};