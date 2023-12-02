//*Student Record*: Create a structure to represent student records with fields like name, roll number, and marks. Write functions to input, display, and calculate the average *For Structures:*
marks of students.
#include<stdio.h>
#include<string.h>

struct Student
{
char name[30];
int roll;
int mark;
};

int main()
{

  int size;
  printf("Enter the number of student :");
  scanf("%d",&size);
  getchar();

  struct Student Student[size];


  float sum=0,avarage;

  for(int i=0;i<size;i++)
  {

   printf("\nEnter the information of student number %d :",i+1);
   printf("\nEnter name :");
   fgets(Student[i].name,sizeof(Student[i].name),stdin);

   size_t len=strlen(Student[i].name);
   if(len>0 && Student[i].name[len-1]=='\n')
   {
   Student[i].name[len-1]='\0';
   len--;
   }

   printf("Enter roll :");
   scanf("%d",&Student[i].roll);
   getchar();

   printf("Enter mark :");
   scanf("%d",&Student[i].mark);
   getchar();

   sum=sum+Student[i].mark;

  }

  avarage=sum/size;


  for(int i=0;i<size;i++)
  {

   printf("\n\nInformation of student number %d :",i+1);
   printf("\nNane : %s",Student[i].name);
   printf("\nRoll : %d",Student[i].roll);
   printf("\nMark : %d",Student[i].mark);


  }

  printf("\n\nAvarage number of all student = %f",avarage);

  return 0;
}
