#include<stdio.h>
#include "student.h"

#define NEW_LINE_SIZE 2 
static int get_input_string(char * new_string, int max_size, const char* prompt ) {
    printf("%s", prompt);
    if(fgets(new_string,max_size+NEW_LINE_SIZE,stdin) == NULL) {
        printf("fgets == null");
        return false;
    }
    int len = strlen(new_string);
    if ( len <= NEW_LINE_SIZE ) { return false;}
    new_string[len -NEW_LINE_SIZE ] = 0; 
    return true; 

}
void manu_print()
{
    puts("Hello, welcome to the Student manament data base");
    puts("-------------- to enter a  new student or update enter 1---------------");
    puts("-------------- to print a student enter 2 ---------------");
    puts("-------------- to exit the program press 0 -");//update when i get there
    puts("-------------- to more sufff---------------");//update when i get there
    puts("-------------- to enter a  new student or update enter 1---------------");
    puts("-------------- to enter a  new student or update enter 1---------------");
}
int add_or_update_student(student_t students[], int  *student_index)
{
    char id;   // id 
    char edu;  // education 
    char Cy;   //city of birth


    if (*student_index >= student_max) {
        return 0;
    }
    
    char u_or_a;

    puts("Hello, if you want to add type a or if you want to update type u  ");
    
    scanf("%c", &u_or_a );
    if ( u_or_a == 'a'){
        //id of the student
        student_t *new_student = &students[ *student_index];
        if(get_input_string( new_student->id, id_size,"student id:\n") != true ){
            return false;
        }                                                                                                                 
        //name of the student
        if(get_input_string( new_student->student_name, student_name_max,"student name:\n") != true) {
            return false; 
        }
        //city 
        if(get_input_string( new_student->place_of_o, city,"city :\n") != true) {
            return false;
        } 
        //eduction  
        if(get_input_string( new_student->eductions, eduction,"education:\n") != true) { 
            return false; 
        } 

        //courses that his register + add grade to each course  
        new_student->s_active = true;

        //
               
    }

    return true;


}




    

 