#include <stdio.h>
#include <stdint.h>

typedef struct
    {
        char name [32];
        char mssv[8];
        uint8_t course_c;
    } infor;
void infor_input(infor* stu_infor)
{
    printf ("Nhap ten: ");
    scanf ("%s",stu_infor-> name);

    printf ("Nhap mssv: ");
    scanf ("%s",stu_infor-> mssv);  

    printf ("Nhap Course_C: ");
    scanf("%hhu", &stu_infor-> course_c);
    
}
void infor_print(infor* stu_infor)
{
    printf("Ten: %s\n", stu_infor-> name);
    printf("MSSV: %s\n", stu_infor-> mssv);
    printf("Course_C: %d\n", stu_infor-> course_c);
}
int main()
{
    infor hs1;
    infor_input(&hs1);
    infor_print(&hs1);

   
    return 0;

    
    

}