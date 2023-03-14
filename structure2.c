#include<stdio.h>
struct Student
{
int marks;
int age;
char Div;
};

int main()
{
struct Student Gayatri;
struct Student Abhi;

Gayatri.marks=90;
Gayatri.age=12;
Gayatri.Div='A';

Abhi.marks=90;
Abhi.age=13;
Abhi.Div='B';

printf("gayatri's marks=%d\n",Gayatri.marks);
printf("abhi's marks=%d",Abhi.marks);

return 0;
}
