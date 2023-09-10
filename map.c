#include <stdio.h>
#include <stdlib.h>
#include "map.h"

Hash_Map* createConstructor(){
	Hash_Map *i = (Hash_Map*)malloc(sizeof(Hash_Map));
	i->capacity = 5;
	i->size = 0;
	i->arr = (Node**)malloc((i->capacity)*sizeof(Node*));
	for (int j = 0; j < i->capacity; j++)	i->arr[j] = NULL;
	return i;
}

int hashing(Hash_Map *map, int n){
	return n % map->capacity;
}

int isPresent(Hash_Map *map,int key){	
	Node *temp = (map->arr)[hashing(map, key)];
	while(temp != NULL){
		if(temp->key == key) return temp->val;
		temp = temp->next;
	}
	return -1;
}

void push(Hash_Map *map,int key,int val){
	if(isPresent(map,key) == 1) return;
	int index = hashing(map, key);
	Node **arr = map->arr;
	Node* node = (Node *)malloc(sizeof(Node));
	node->key = key;
	node->val = val;
	node->next = arr[index];
	arr[index] = node;
	map->size++;
}

int pop(Hash_Map *map,int key){
	Node *temp = (map->arr)[hashing(map, key)];
	if(temp == NULL)	return -1;
	if(temp->key == key){
		int val = temp->val;
		free(temp);
		map->size--;
		return val;
	}
	while(temp->next != NULL){
		if(temp->next->key == key){
			Node *temp1 = temp->next;
			temp->next = temp1->next;
			int val = temp1->val;
			free(temp1);
			map->size--;
			return val;
		}
		temp = temp->next;
	}
	return -1;
}

int getSize(Hash_Map *map){
	return map->size;
}
