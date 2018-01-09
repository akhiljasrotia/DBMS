#include<stdio.h>


struct student
{
 char name[20];
 char roll[10];
 int age;
 char COMP201T;
 char COMP202T;
 char COMP203T;
 char COMP204T;
 float gpa;
 float cgpa;
};



 int main()
{
  struct student s;
  FILE *ptr, *ptr1,*ptr2,*ptrx;
  float grade,next;  
  int marks[4];
  char m;
  float lol[4];
  int i,count=0,arr[4];


ptr1=fopen("x4.txt","r+");

for(i=0;i<4;i++)
{
  fscanf(ptr1,"%f",&next);
  printf("%f",next);
   arr[i]=next;
}

fclose(ptr1);


  ptr=fopen("x5.txt","w+");
  
  while(1)

  {  
   
printf("Enter the roll number \n");
  scanf("%s",s.roll);
  fprintf(ptr,"RollNumber %s\n",s.roll);

  printf("Enter the name \n");
  scanf("%s",s.name);
  fprintf(ptr,"Name %s\n",s.name);

  printf("Enter the age \n");
  scanf("%d",&s.age);
  fprintf(ptr,"Age %d\n",s.age);
  printf("Enter the grade of all the four subjects (in capitals)");
  scanf("%c %c %c %c %c",&m,&s.COMP201T,&s.COMP202T,&s.COMP203T,&s.COMP204T);
  fprintf(ptr,"COMP201T %c\n",s.COMP201T);
  fprintf(ptr,"COMP202T %c\n",s.COMP202T);  
  fprintf(ptr,"COMP203T %c\n",s.COMP203T);
  fprintf(ptr,"COMP204T %c\n",s.COMP204T);


  if(s.COMP201T=='S')
  {
    marks[0]=10;
  }
  else if(s.COMP201T=='A')
  {
    marks[0]=9;
  }
  else if(s.COMP201T=='B')
  {
    marks[0]=8;
  }
  else if(s.COMP201T=='C')
  {
    marks[0]=7;
  }
  else
  {
    marks[0]=6;
  }


  if(s.COMP202T=='S')
  {
    marks[1]=10;
  }
  else if(s.COMP202T=='A')
  {
    marks[1]=9;
  }
  else if(s.COMP202T=='B')
  {
    marks[1]=8;
  }
  else if(s.COMP202T=='C')
  {
    marks[1]=7;
  }
  else
  {
    marks[1]=6;
  }


   if(s.COMP203T=='S')
  {
    marks[2]=10;
  }
  else if(s.COMP203T=='A')
  {
    marks[2]=9;
  }
  else if(s.COMP203T=='B')
  {
    marks[2]=8;
  }
  else if(s.COMP203T=='C')
  {
    marks[2]=7;
  }
  else
  {
    marks[2]=6;
  }
  

   if(s.COMP204T=='S')
  {
    marks[3]=10;
  }
  else if(s.COMP204T=='A')
  {
    marks[3]=9;
  }
  else if(s.COMP204T=='B')
  {
    marks[3]=8;
  }
  else if(s.COMP204T=='C')
  {
    marks[3]=7;
  }
  else
  {
    marks[3]=6;
  }
  
  int i;
  float sum=0;
  for(i=0;i<4;i++)
  {
    sum=sum+marks[i];
  }
  
  sum=sum/4;
  s.gpa=sum;
  lol[count]=s.gpa;
  count++;
 
  fprintf(ptr,"GPA %f\n",s.gpa);
  fprintf(ptr,"CGPA %f\n",s.gpa);
  
  fprintf(ptr,"\n");
  
  if(count==4)
  {
    break;
  }
}  
 
 fclose(ptr); 
 

  int choice;
printf("Enter 1 if you want to search for a record based on name initials ");
scanf("%d",&choice);
if(choice==1)
{
  int size;
char string[2];
printf("Enter the initials ");
scanf("%s",string);
size=sizeof(string);
ptrx=fopen("x5.txt","r+");

int k;
char l[20],l1[20],l2[20],target[20], redu[11][20];
int red;
float redun[2];
for(k=0;k<4;k++)
{

fscanf(ptrx,"%s%s",l,l1);
fscanf(ptrx,"%s%s",l2,target);
fscanf(ptrx,"%s%d%s%s%s%s%s%s%s%s%s%f%s%f",redu[0],&red,redu[1],redu[2],redu[3],redu[4],redu[5],redu[6],redu[7],redu[8],redu[9],&redun[0],redu[10],&redun[1]);
getc(ptrx);
if(target[0]==string[0] && target[1]==string[1])
{
  printf("Name: %s RollNumber: %s Age: %d\n",target,l1,red);
}

}

}

int mc;
printf("Enter 1 if you want to know the student details who secured S grade ");
scanf("%d",&mc);
if(mc==1)
{
ptrx=fopen("x1.txt","r+");

int k,z;
char l[20],l1[20],l2[20],target[20], redu[11][20];
int red;
float redun[2];



int course;
printf("Enter the course number (from 1 to 4) ");
scanf("%d",&course);
if(course==1)
{
  for(z=0;z<4;z++)
  {
  fscanf(ptrx,"%s%s",l,l1);
fscanf(ptrx,"%s%s",l2,target);
fscanf(ptrx,"%s%d%s%s%s%s%s%s%s%s%s%f%s%f",redu[0],&red,redu[1],redu[2],redu[3],redu[4],redu[5],redu[6],redu[7],redu[8],redu[9],&redun[0],redu[10],&redun[1]);
getc(ptrx);
 if(strcmp(redu[2],"S")==0)
 {
  printf("%s ",target);
 } 
}
}
else if(course==2)
{
  for(z=0;z<4;z++)
  {
  fscanf(ptrx,"%s%s",l,l1);
fscanf(ptrx,"%s%s",l2,target);
fscanf(ptrx,"%s%d%s%s%s%s%s%s%s%s%s%f%s%f",redu[0],&red,redu[1],redu[2],redu[3],redu[4],redu[5],redu[6],redu[7],redu[8],redu[9],&redun[0],redu[10],&redun[1]);
getc(ptrx);
 if(strcmp(redu[4],"S")==0)
 {
  printf("%s ",target);
 } 
}
}
else if(course==3)
{
  for(z=0;z<4;z++)
  {
  fscanf(ptrx,"%s%s",l,l1);
fscanf(ptrx,"%s%s",l2,target);
fscanf(ptrx,"%s%d%s%s%s%s%s%s%s%s%s%f%s%f",redu[0],&red,redu[1],redu[2],redu[3],redu[4],redu[5],redu[6],redu[7],redu[8],redu[9],&redun[0],redu[10],&redun[1]);
getc(ptrx);
 if(strcmp(redu[6],"S")==0)
 {
  printf("%s ",target);
 } 
}
}
else if(course==4)
{
  for(z=0;z<4;z++)
  {
  fscanf(ptrx,"%s%s",l,l1);
fscanf(ptrx,"%s%s",l2,target);
fscanf(ptrx,"%s%d%s%s%s%s%s%s%s%s%s%f%s%f",redu[0],&red,redu[1],redu[2],redu[3],redu[4],redu[5],redu[6],redu[7],redu[8],redu[9],&redun[0],redu[10],&redun[1]);
getc(ptrx);
 if(strcmp(redu[8],"S")==0)
 {
  printf("%s ",target);
 } 
}



}
}

 
 ptr2=fopen("x6.txt","a+");
 int j;
 for(j=0;j<4;j++)
  {

  fprintf(ptr2,"%f ",lol[j]);

  }

  fclose(ptr2);
  
  return 0;
}

