#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
	
 FILE *ptrx=fopen(argv[4],"r");
 FILE *ptrx1=fopen(argv[4],"r");

 char data[15][20];
 int datax;
 float dat[2];



if(strcmp(argv[1],"select")!=0 || strcmp(argv[3],"from")!=0)
 {
 	printf("The input format is incorrect \n");
     return 0;
 }

if(strcmp(argv[4],"x1.txt")!=0)
{
   printf("The file you are trying to access is invalid \n ERROR");
   return 0;
}


if(strcmp(argv[1],"select")==0 && strcmp(argv[2],"*")==0 && strcmp(argv[3],"from")==0 && strcmp(argv[4],"x1.txt")==0 && argc<=5)
 {
 	  
      while(!feof(ptrx))
 		{
 		fscanf(ptrx,"%s%s%s%s%s%d%s%s%s%s%s%s%s%s%s%f%s%f",data[0],data[1],data[2],data[3],data[4],&datax,data[5],data[6],data[7],data[8],data[9],data[10],data[11],data[12],data[13],&dat[0],data[14],&dat[1]);
 		getc(ptrx);
 		printf(" %s %s \n %s %s \n %s% d \n %s %s \n %s %s \n %s %s \n %s %s \n %s %f \n %s %f",data[0],data[1],data[2],data[3],data[4],datax,data[5],data[6],data[7],data[8],data[9],data[10],data[11],data[12],data[13],dat[0],data[14],dat[1]);
 		printf("\n \n");
 		}
 		 return 0;
 		
    
 }









 if(strcmp(argv[2],"age,rollno")==0)
 {

 	while(!feof(ptrx))
 	{
 		fscanf(ptrx,"%s%s%s%s%s%d%s%s%s%s%s%s%s%s%s%f%s%f",data[0],data[1],data[2],data[3],data[4],&datax,data[5],data[6],data[7],data[8],data[9],data[10],data[11],data[12],data[13],&dat[0],data[14],&dat[1]);
 		getc(ptrx);
 		printf("Age:%d RollNo:%s \n",datax,data[1]);

 	}
 	return 0;

 }

 if(strcmp(argv[2],"rollno,age")==0)
 {

 	while(!feof(ptrx))
 	{
 		fscanf(ptrx,"%s%s%s%s%s%d%s%s%s%s%s%s%s%s%s%f%s%f",data[0],data[1],data[2],data[3],data[4],&datax,data[5],data[6],data[7],data[8],data[9],data[10],data[11],data[12],data[13],&dat[0],data[14],&dat[1]);
 		getc(ptrx);
 		printf("RollNo:%s Age:%d \n",data[1],datax);

 	}
 	return 0;
 }

 if(strcmp(argv[2],"rollno,name")==0)
 {

 	while(!feof(ptrx))
 	{
 		fscanf(ptrx,"%s%s%s%s%s%d%s%s%s%s%s%s%s%s%s%f%s%f",data[0],data[1],data[2],data[3],data[4],&datax,data[5],data[6],data[7],data[8],data[9],data[10],data[11],data[12],data[13],&dat[0],data[14],&dat[1]);
 		getc(ptrx);
 		printf("RollNo:%s Name:%s \n",data[1],data[3]);

 	}
 	return 0;
 }

 if(strcmp(argv[2],"name,rollno")==0)
 {

 	while(!feof(ptrx))
 	{
 		fscanf(ptrx,"%s%s%s%s%s%d%s%s%s%s%s%s%s%s%s%f%s%f",data[0],data[1],data[2],data[3],data[4],&datax,data[5],data[6],data[7],data[8],data[9],data[10],data[11],data[12],data[13],&dat[0],data[14],&dat[1]);
 		getc(ptrx);
 		printf("Name:%s RollNo:%s \n",data[3],data[1]);

 	}
 	return 0;

 }

if(strcmp(argv[2],"name,age")==0)
 {

 	while(!feof(ptrx))
 	{
 		fscanf(ptrx,"%s%s%s%s%s%d%s%s%s%s%s%s%s%s%s%f%s%f",data[0],data[1],data[2],data[3],data[4],&datax,data[5],data[6],data[7],data[8],data[9],data[10],data[11],data[12],data[13],&dat[0],data[14],&dat[1]);
 		getc(ptrx);
 		printf("Name:%s Age:%d \n",data[3],datax);

 	}
 	return 0;

 }

if(strcmp(argv[2],"age,name")==0)
 {

 	while(!feof(ptrx))
 	{
 		fscanf(ptrx,"%s%s%s%s%s%d%s%s%s%s%s%s%s%s%s%f%s%f",data[0],data[1],data[2],data[3],data[4],&datax,data[5],data[6],data[7],data[8],data[9],data[10],data[11],data[12],data[13],&dat[0],data[14],&dat[1]);
 		getc(ptrx);
 		printf("Age:%d Name:%s \n",datax,data[3]);

 	}
 	return 0;

 }

 if(strcmp(argv[2],"age,name,rollno")==0 || strcmp(argv[2],"name,age,rollno")==0 || strcmp(argv[2],"age,rollno,name")==0 || strcmp(argv[2],"name,rollno,age")==0 || strcmp(argv[2],"rollno,age,name")==0 || strcmp(argv[2],"rollno,name,age")==0 )
 {

 	while(!feof(ptrx))
 	{
 		fscanf(ptrx,"%s%s%s%s%s%d%s%s%s%s%s%s%s%s%s%f%s%f",data[0],data[1],data[2],data[3],data[4],&datax,data[5],data[6],data[7],data[8],data[9],data[10],data[11],data[12],data[13],&dat[0],data[14],&dat[1]);
 		getc(ptrx);
 		printf("RollNo:%s Name:%s Age:%d\n",data[1],data[3],datax);

 	}
 	return 0;

 }


  if(strcmp(argv[5],"where")==0 && strcmp(argv[6],"cgpa")==0 )
 	{
 		float a;
 		char check[3];
 		strcpy(check,argv[8]); 

 		
 			 if(strcmp(check,"9")==0)
 				{
 					a=9.0;
 				}

 			else if (strcmp(check,"8")==0)
 				{
 					a=8.0;
 				}

 			else if (strcmp(check,"7")==0)
 				{
 					a=7.0;
 				}

 			else if (strcmp(check,"6")==0)
 				{
 					a=6.0;
 			 	}

 			else if (strcmp(check,"5")==0)
 				{
 					a=5.0;
 				}
 			else if (strcmp(check,"10")==0)
 				{
 					a=10.0;
 				}
 		

 		while(!feof(ptrx1))
 	{
 		fscanf(ptrx1,"%s%s%s%s%s%d%s%s%s%s%s%s%s%s%s%f%s%f",data[0],data[1],data[2],data[3],data[4],&datax,data[5],data[6],data[7],data[8],data[9],data[10],data[11],data[12],data[13],&dat[0],data[14],&dat[1]);
 		getc(ptrx1);
 		if(dat[1]>=a)
 		{
 			printf("Name:%s RollNo:%s \n",data[1],data[3]);
 		}

 	}
 	return 0;
}

 else
 {
 	printf("Wrong Input Format \n");
 	printf("ERROR");
 }



 return 0;
}

 
