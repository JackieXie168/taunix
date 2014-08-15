#include <stdio.h>
#include "priList.h"
#include "sem.h"
#include "task.h"

int main(int argc, char **argv)

{
	int handle;
	priList *list;

	sem_table_init();

	current_task = 5;
	handle = semget();
	pend(handle,SM_BLOCK);

	current_task = 6;
	pend(handle,SM_BLOCK);

	current_task = 1;
	pend(handle,SM_BLOCK);

	current_task = 4;
	pend(handle,SM_BLOCK);

	current_task = 20;
	pend(handle,SM_BLOCK);

	current_task = 17;
	pend(handle,SM_BLOCK);

	list =  &(sem_table[handle].pending_list);
	list->current = list->head;

	do{
		printf("Pending task: %i\n",list->nodePool[list->current].prio);
		list->current = list->nodePool[list->current].next;
	}while(list->current != -1);

	printf("Press ENTER to continue...\n");
	getchar();
	current_task = 5;
	post(handle);
	current_task = 6;
	post(handle);
	current_task = 1;
	post(handle);
	list->current = list->head;

	do{
		printf("Pending task: %i\n",list->nodePool[list->current].prio);
		list->current = list->nodePool[list->current].next;
	}while(list->current != -1);
}
