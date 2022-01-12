#include <stdio.h>
#include <stdlib.h>

#include <dataType/stack.h>

#include <test/testLib_llist.h>

int main(int argc, char* argv[])
{
    s_stack_data* test = make_stack();
	printf("main for stack test.\r\n");

	if(init_stack(test) < 0)	printf("init_stack failed\n");

	_PRINT_LLIST_LIST("[START LIST]\r\n", test->root);
	push_stack(test, (void*)1u);
	_PRINT_LLIST_LIST("[START LIST] push\r\n", test->root);
	push_stack(test, (void*)2u);
	_PRINT_LLIST_LIST("[START LIST] push\r\n", test->root);
	push_stack(test, (void*)3u);
	_PRINT_LLIST_LIST("[START LIST] push\r\n", test->root);
	push_stack(test, (void*)4u);
	_PRINT_LLIST_LIST("[START LIST] push\r\n", test->root);

	printf("\n\n");

	_PRINT_LLIST_LIST("[START LIST]\r\n", test->root);
	printf("pop %u\n", (unsigned int)pop_stack(test));
	_PRINT_LLIST_LIST("[START LIST]\r\n", test->root);
	printf("pop %u\n", (unsigned int)pop_stack(test));
	_PRINT_LLIST_LIST("[START LIST]\r\n", test->root);
	printf("pop %u\n", (unsigned int)pop_stack(test));
	_PRINT_LLIST_LIST("[START LIST]\r\n", test->root);
	printf("pop %u\n", (unsigned int)pop_stack(test));
	_PRINT_LLIST_LIST("[START LIST]\r\n", test->root);
	printf("pop %u\n", (unsigned int)pop_stack(test));
	_PRINT_LLIST_LIST("[START LIST]\r\n", test->root);
	printf("pop %u\n", (unsigned int)pop_stack(test));
	_PRINT_LLIST_LIST("[START LIST]\r\n", test->root);
	printf("pop %u\n", (unsigned int)pop_stack(test));
	_PRINT_LLIST_LIST("[START LIST]\r\n", test->root);
	printf("pop %u\n", (unsigned int)pop_stack(test));
	_PRINT_LLIST_LIST("[START LIST]\r\n", test->root);

	printf("\n\n");

	_PRINT_LLIST_LIST("[START LIST] push, obj_add=100~199\r\n", test->root);
	for(unsigned int i=100; i<200; i++)
	{
		push_stack(test, (void*)i);
	}
	_PRINT_LLIST_LIST("[END LIST] push, obj_add=100~199\r\n", test->root);

	printf("\n\n");

	_PRINT_LLIST_LIST("[START LIST] pop count 102\r\n", test->root);
	for(unsigned int i=0; i<102; i++)
	{
		printf("pop %u\n", (unsigned int)pop_stack(test));
	}
	_PRINT_LLIST_LIST("[START LIST] pop, 102\r\n", test->root);

    return 0;
}
