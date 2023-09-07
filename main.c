#include <stdio.h>
#include "map.h"
#include <assert.h>
int main(){
	Hash_Map *map;
	map = createConstructor();
	push(map,65,45);
	assert(isPresent(map,65) == 45);
	printf("hurrey!\n");
	return 0;
}
