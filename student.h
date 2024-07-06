


#include<string.h>
#include<stdbool.h>
#define student_name_max 100
#define city 100
#define eduction  100
#define student_max  1000
#define course_list 15
#define id_size 10
#define active 1 
#define not_active 0 
 
 
enum city_of_ojj {
    city_other,
    city_jerusalem,
    city_tel_aviv,
    city_south,
    city_haifa,
    city_north,

};

static const char* place_name[6] = {
    "other",
    "jerusalem",
    "tel_aviv",
    "south",
    "haifa",
    "north"
};

enum courses {
    c_algebrar,
    c_history,
    c_infi,
    c_cs,
    c_phisics1,
    c_phisics2,
    c_linier_algebra,
    c_dataS,
    c_assmbly
};

static const char* coursename[9] = {
    "algebra",
    "history",
    "infi",
    "cs",
    "phisics1",
    "phisics2",
    "linier_algebra",
    "dataS",
    "assmbly"
};


typedef struct
{
    char student_name [student_name_max];     //name of the student 
    char id [id_size];    // id of the student 
    char place_of_o[city];   // place of birh of the student 
    char eductions[eduction];   //kind of education 
    char courses[course_list][student_name_max];    //list of courses
    int cours_count; // 
    bool s_active ; 
    float avarege_grade; 
}student_t;


void manu_print();
void remove_student(char id);
int add_or_update_student(student_t student[], int  *student_count);
void print_Student(char id);
void print_all_by_type(char course , char place_of_b , char id ); 
void print_avg(char id, char course, char student_name);
