/*
semantic analysis of the AST
1. build symbol tables for program
2. check the type errors
*/

#include "std.h"
#include "ast.h"
#include "symbol.h"

Symbols symbol_table;
void ana_prog(FILE *fp, Program prog) {
	ana_procs(sorted_procs);
}

static void ana_procs(Procs procs) {
	Proc first = procs->first;
	Procs rest = procs->rest;
	if (first) {
		ana_proc(first);
		printf("\n");

	}
	if (rest) {
		ana_procs(rest);
	}
}

static void ana_proc(Proc proc) {
	printf("call procedure ");
	ana_header(proc->header);
	if (proc->decls) {
		ana_decls(proc->decls, 1);
	}
	printf("\n");
	if (proc->body) {
		ana_stmts(proc->body, 1);
	}
	printf("end\n");

}

static void ana_header(Header header)
{
	Symbol symbol = allocate(sizeof(struct symbol));
	symbol->key = header->id;
	if (header->params) {
		ana_params(header->params);
	}
	add_proc(symbol_table, symbol);
}

static void add_proc(char *id){
	
	if (header->params){
	}
}

static void ana_params(Params params){
	//analyze the parameters in a function call
	Param first = params->first;
	Params rest = params->rest;
	if (first) {
		ana_pram(first);
		if (rest) {
			ana_params(rest);
		}
	}

}

Symbol ana_param(Param param){
   //add one param for a proc

}

