#include <stdio.h>
#include <stdlib.h>

#include <dataType/llist.h>

#include <test/testLib_llist.h>

int main(int argc, char** argv)
{
	s_llist* s0=NULL;
	s_llist* s1=NULL;
	s_llist* sn=NULL;

	_PRINT_LLIST_S(s0);
	/* Open llist start */
	s0=open_llist();
	/* Open llist end */
	_PRINT_LLIST_S(s0);

	printf("add llist next @ s0 ");
	_PRINT_LLIST_S(s0);
	_PRINT_LLIST_LIST("[START LIST]\r\n", s0);
	for(int i=0; i<11; i++)
	{
		if((s0=mk_llist(s0, LLIST_DIR_NEXT)->prev)==NULL)
		{
			printf("has err, add llist next\r\n");
		}
		/*check origin of llist*/
		_PRINT_LLIST_HEAD(s0);

		_PRINT_LLIST_LIST("",s0);
	}

	printf("add llist prev @ s0 ");
	_PRINT_LLIST_S(s0);
	printf("START LIST\r\n");
	_PRINT_LLIST_LIST("[START LIST]\r\n", s0);
	for(int i=0; i<17; i++)
	{
		if((s0=mk_llist(s0, LLIST_DIR_PREV))==NULL)
		{
			printf("has err, add llist prev\r\n");
		}
		/*check origin of llist*/
		_PRINT_LLIST_HEAD(s0);

		_PRINT_LLIST_LIST("",s0);
	}

	s1=s0->next;
	printf("add llist prev @ s1 ");
	_PRINT_LLIST_S(s1);
	_PRINT_LLIST_LIST("[START LIST]\r\n", s1);
	for(int i=0; i<13; i++)
	{
		if((s1=mk_llist(s1, LLIST_DIR_PREV))==NULL)
		{
			printf("has err, add llist prev\r\n");
		}
		/*check origin of llist*/
		_PRINT_LLIST_HEAD(s0);

		_PRINT_LLIST_LIST("",s0);
	}


	s1=s0->next;
	printf("rm_llist @ s1 ");
	_PRINT_LLIST_S(s1);
	_PRINT_LLIST_LIST("[START LIST]\r\n", s1);
	for(int i=0; i<17; i++)
	{
		if((s1=rm_llist(s1))==NULL)
		{
			printf("has err, sel llist\r\n");
		}

		_PRINT_LLIST_LIST("rm_llist @s1\r\n",s0);
	}

	printf("rm_llist @ s0 ");
	_PRINT_LLIST_S(s0);
	_PRINT_LLIST_LIST("[START LIST]\r\n", s0);
	for(int i=0; i<7; i++)
	{
		if((s0=rm_llist(s0))==NULL)
		{
			printf("has err, sel llist\r\n");
		}

		_PRINT_LLIST_LIST("rm_llist @s0\r\n",s0);
	}

	sn=find_llist_end(s0,LLIST_DIR_NEXT);
	printf("rm_llist @ sn ");
	_PRINT_LLIST_S(sn);
	_PRINT_LLIST_LIST("[START LIST]\r\n", sn);
	for(int i=0; i<15; i++)
	{
		if((sn=rm_llist(sn))==NULL)
		{
			printf("has err, sel llist\r\n");
		}

		_PRINT_LLIST_LIST("rm_llist @sn\r\n",sn);
	}

	/* Delete All Nodes Start */
	s1=s0->next;
	printf("rm_llist @ s1 ");
	_PRINT_LLIST_S(s1);
	_PRINT_LLIST_LIST("[START LIST]\r\n", s1);
	for(int i=0; s1!=NULL; i++)
	{
		if((s1=rm_llist(s1))==NULL)
		{
			printf("has err, sel llist\r\n");
		}

		_PRINT_LLIST_LIST("rn_llist @s1\r\n",s1);
	}
	/* Delete All Nodes End */
	/* Clear variable all start */
	s0 = NULL;
	s1 = NULL;
	sn = NULL;
	/* Clear variable all start */

	/* Open llist start */
	s0 = open_llist();
	/* Open llist end */

	_PRINT_LLIST_LIST("[START LIST]\r\n", s0);
	for(int i=0; i<11; i++)
	{
		s0=mk_llist(s0, LLIST_DIR_NEXT);
		printf("new=0x%08x\r\n", s0);
		_PRINT_LLIST_LIST("[mk LIST prev @s0]\r\n", s0);
	}

	/* set second nodes */
	s1 = s0->next;

	/* test close llist */
	s1=close_llist(s1);
	_PRINT_LLIST_S(s1);
	_PRINT_LLIST_S(s0);
	s0 = NULL;
	s1 = NULL;

	return 0;
}
