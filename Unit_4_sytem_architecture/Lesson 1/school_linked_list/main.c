/*
    *****************************************************************

    FILE : main.c
    Date : 29-12-2023
    BY: Bavly Mansour Grant

    *****************************************************************
 */

#include "school.h"

int main(void) {
	char temp_text[40];
	int getOption ;
	while(1)
	{
		Rcount=0;
		DPRINTF("====================================================");
		DPRINTF("\n choose one of the following options :\n ");
		DPRINTF("====================================================");
		DPRINTF("\n 1 : Add Student");
		DPRINTF("\n 2 : Delete Student");
		DPRINTF("\n 3 : View Students");
		DPRINTF("\n 4 : Delete All");
		DPRINTF("\n 5 : Find Student by index");
		DPRINTF("\n 6 : Number of students");
		DPRINTF("\n 7 : Get N Node from the end");
		DPRINTF("\n 8 : Get middle of the list");
		DPRINTF("\n 9 : Reverse list");
		DPRINTF("\n 10 : Number of students");
		DPRINTF("\n ================================================");
        DPRINTF("\n Enter option number :");
		scanf ("%d" , &getOption);
        DPRINTF("\n ================================================");
		switch(getOption)
		{
		case 1 :
			AddStudent();
			break;
		case 2 :
			Delete_Student();
			break;
		case 3 :
			view_Students();
			break;
		case 4 :
			Delete_All();
			break;
		case 5 :
			Get_N_Node();
			break;
		case 6 :
			Num_of_nodes();
			break;
		case 7 :
			GetNode_Reverse_order();
			break;
		case 8 :
			middle_list();
			break;
		case 9 :
			Reverse_list();
			break;
		case 10 :
			Num_of_nodes_recursive(gPFirstStudent);
			break;
		default :
			DPRINTF("\n wrong option");
		}
	}
}
