#include "student.c"


int main()
{
    student_t students[student_max];

    int index = 0;
    int ret = add_or_update_student(students, &index);

    return ret;

   /* int *student_index =0;
    int choice; 
    do
    {
       manu_print();

       printf("enter your choice");
       switch (choice)
       {
       case 0: break; 
       
       
       default:
        break;
       }

    } while (true)
    {
        int xl;
    }
    */



}