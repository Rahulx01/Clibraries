

struct Node{
	int key;
	int val;
	struct Node *next;
};

typedef struct Node Node;

typedef struct{
	int capacity;
	int size;
	Node **arr;
}Hash_Map;

Hash_Map* createConstructor();

int isPresent(Hash_Map *map,int key);

void push(Hash_Map *map, int key, int val);

int pop(Hash_Map *map, int key);

int getSize(Hash_Map *map);
