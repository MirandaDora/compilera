/* the symbol table for wiz
I am going to use bi-tree to store symbols
*/
#include <stdio.h>
#include "symbol.h"
typedef char *Key;
typedef char *Type;

static void add_proc(Symbols symbol_table, Symbol symbol){
	Symbols now;
	now = symbol_table;
	while (now){
		now = now->rest;
	}
	now->first = symbol;
	now->rest = NULL;
	
}