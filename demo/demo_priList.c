#include <stdio.h>
#include "priList.h"

priNode	nodes[12];
priList	list;
int main(int argc, char **argv)
{int i;
	List_init(&list,nodes,10);
	for(i=0 ; i<10 ; i++){
		List_insert(&list,i);
		printf("node:  0  1  2  3  4  5  6  7  8  9 10 11 current:%i content:%i\n",list.current,list.contents);
		printf("next:%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i head:%i\n",
			nodes[0].next,nodes[1].next,nodes[2].next,nodes[3].next,nodes[4].next,nodes[5].next,
			nodes[6].next,nodes[7].next,nodes[8].next,nodes[9].next,nodes[10].next,nodes[11].next,list.head);
		printf("prev:%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i tail:%i\n",
			nodes[0].prev,nodes[1].prev,nodes[2].prev,nodes[3].prev,nodes[4].prev,nodes[5].prev,
			nodes[6].prev,nodes[7].prev,nodes[8].prev,nodes[9].prev,nodes[10].prev,nodes[11].prev,list.tail);
	}
	printf("Press enter...\n");
	getchar();
	printf("Delete node 2:\n");
	list.current = 2;
	List_delete(&list);
		printf("node:  0  1  2  3  4  5  6  7  8  9 10 11 current:%i content:%i\n",list.current,list.contents);
		printf("next:%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i head:%i\n",
			nodes[0].next,nodes[1].next,nodes[2].next,nodes[3].next,nodes[4].next,nodes[5].next,
			nodes[6].next,nodes[7].next,nodes[8].next,nodes[9].next,nodes[10].next,nodes[11].next,list.head);
		printf("prev:%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i tail:%i\n",
			nodes[0].prev,nodes[1].prev,nodes[2].prev,nodes[3].prev,nodes[4].prev,nodes[5].prev,
			nodes[6].prev,nodes[7].prev,nodes[8].prev,nodes[9].prev,nodes[10].prev,nodes[11].prev,list.tail);

	printf("Delete node 4:\n");
	list.current = 4;
	List_delete(&list);
		printf("node:  0  1  2  3  4  5  6  7  8  9 10 11 current:%i content:%i\n",list.current,list.contents);
		printf("next:%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i head:%i\n",
			nodes[0].next,nodes[1].next,nodes[2].next,nodes[3].next,nodes[4].next,nodes[5].next,
			nodes[6].next,nodes[7].next,nodes[8].next,nodes[9].next,nodes[10].next,nodes[11].next,list.head);
		printf("prev:%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i tail:%i\n",
			nodes[0].prev,nodes[1].prev,nodes[2].prev,nodes[3].prev,nodes[4].prev,nodes[5].prev,
			nodes[6].prev,nodes[7].prev,nodes[8].prev,nodes[9].prev,nodes[10].prev,nodes[11].prev,list.tail);

	printf("Delete node 0:\n");
	list.current = 0;
	List_delete(&list);
		printf("node:  0  1  2  3  4  5  6  7  8  9 10 11 current:%i content:%i\n",list.current,list.contents);
		printf("next:%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i head:%i\n",
			nodes[0].next,nodes[1].next,nodes[2].next,nodes[3].next,nodes[4].next,nodes[5].next,
			nodes[6].next,nodes[7].next,nodes[8].next,nodes[9].next,nodes[10].next,nodes[11].next,list.head);
		printf("prev:%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i tail:%i\n",
			nodes[0].prev,nodes[1].prev,nodes[2].prev,nodes[3].prev,nodes[4].prev,nodes[5].prev,
			nodes[6].prev,nodes[7].prev,nodes[8].prev,nodes[9].prev,nodes[10].prev,nodes[11].prev,list.tail);

	printf("Delete node 9:\n");
	list.current = 9;
	List_delete(&list);
		printf("node:  0  1  2  3  4  5  6  7  8  9 10 11 current:%i content:%i\n",list.current,list.contents);
		printf("next:%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i head:%i\n",
			nodes[0].next,nodes[1].next,nodes[2].next,nodes[3].next,nodes[4].next,nodes[5].next,
			nodes[6].next,nodes[7].next,nodes[8].next,nodes[9].next,nodes[10].next,nodes[11].next,list.head);
		printf("prev:%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i%3i tail:%i\n",
			nodes[0].prev,nodes[1].prev,nodes[2].prev,nodes[3].prev,nodes[4].prev,nodes[5].prev,
			nodes[6].prev,nodes[7].prev,nodes[8].prev,nodes[9].prev,nodes[10].prev,nodes[11].prev,list.tail);
}
