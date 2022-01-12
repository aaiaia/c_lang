#include <stdio.h>
#include <stdlib.h>

#include <dataType/llist.h>

void _PRINT_LLIST_S(s_llist* _s)
{
	{
		if(_s!=NULL)	printf("prev=0x%08x, loc=0x%08x, obj_addr:0x%08x(%8u), next=0x%08x\r\n",_s->prev , _s, _s->object, (unsigned int)_s->object, _s->next);
		else		printf("Empty\r\n");
	}
}

void _PRINT_LLIST_HEAD(s_llist* _s)
{
	{
		s_llist* _head;
		_head=find_llist_end(_s, LLIST_DIR_PREV);
		printf("head info: ");
		_PRINT_LLIST_S(_head);
	}
}

void _PRINT_LLIST_LIST(const char* str, s_llist* _s)
{
	{
		s_llist* _head;
		s_llist* _tmp;
		_head = find_llist_end(_s, LLIST_DIR_PREV);
		printf("%s", str);
		if(_head!=NULL)
		{
			_PRINT_LLIST_S(_head);
			_tmp=_head->next;
			while(_tmp!=NULL)
			{
				_PRINT_LLIST_S(_tmp);
				_tmp=_tmp->next;
			}
			printf("\r\n");
		}
		else
		{
			printf("Empty List\r\n");
		}
	}
}
