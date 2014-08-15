#include <stdio.h>
#include "priList.h"

int main(int argc, char **argv)
{
 priNode	nodes[5];
 priList	list;
 int i;
	List_init(&list,nodes,5);

	nodes[0].prio = 1;
	nodes[1].prio = 2;
	nodes[2].prio = 0;
	nodes[3].prio = 5;
	nodes[4].prio = 5;

	for(i=0 ; i<5 ; i++)
		priList_insert(&list,i);
	list.current = list.head;
	printf("The prioirty list's sequence is:\n");
	do{
		printf(" node[%2i]\n",list.current);
		list.current = nodes[list.current].next;
	}while(list.current != -1);
	

}
