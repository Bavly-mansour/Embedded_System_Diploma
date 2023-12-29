

/*
    ***********************************************
    File : SCHOOL_H
    DATE : 29-12-2023
    BY : BAVLY MANSOUR

    ***********************************************
*/
//header protection

#ifndef SCHOOL_H_
#define SCHOOL_H_

//including headers
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <conio.h>

//declaration of extern global pointer first student points to the head
extern struct Sstudent* gPFirstStudent;
extern int Rcount; //what is Rcount??


// solution for printf bug

#define DPRINTF(...) {fflush(stdin);\
		fflush(stdout);\
		printf(__VA_ARGS__);\
		fflush(stdin);\
		fflush(stdout);}


//effective data
typedef struct Sdata {

	unsigned int  ID;
	char name[40];
	float height;

}Sdata;


typedef struct Sstudent{
	struct Sdata student;
	struct Sstudent* PNextStudent;

}Sstudent;
                    // counter to calculate length using recursive way
//APIs
void AddStudent();
int Delete_Student();
void view_Students();
void Delete_All();
int Get_N_Node();
int Num_of_nodes();
int GetNode_Reverse_order();
int middle_list();
int Reverse_list();
int Num_of_nodes_recursive(struct Sstudent* PCurrentStudent_recursive);



#endif // SCHOOL_H_
