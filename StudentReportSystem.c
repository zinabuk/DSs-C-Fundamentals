//Zinabu Kalayou
#include<stdio.h>
struct courses{
char c_id[10];
char subject[10];
int credit;
float score;
};

struct students{
    char name[10];
    char id[10];
    struct courses course[10];
};

int main(){

int n1,n2,*pointer;
printf("Enter the number of students to be registered:\n");
scanf("%d",&n1);
struct students student[n1];
printf("enter the number of courses:\n");
scanf("%d",&n2);
pointer=(int*)malloc(n1*sizeof(int));
for(int i=0;i<n1;i++){
         printf("Id of student %d:   \n",i+1);
        scanf("%s",&student[i].id);
        printf("Name of student %d: \n",i+1);
        scanf("%s",&student[i].name);

        for(int j=0;j<n2;j++){
        printf("Id of course %d:  \n",j+1);
        scanf("%s",&student[i].course[j].c_id);
        printf("Name of course %d: \n",j+1);
        scanf("%s",&student[i].course[j].subject);
        printf("Credit hour of course %d: \n",j+1);
        scanf("%d",&student[i].course[j].credit);
        printf("Score of course %d: \n",j+1);
        scanf("%f",&student[i].course[j].score);

}
}
display(student,&n1,n2);
free(pointer);
}

void display(struct students stu[],int *x, int y){
    printf("\n");
for(int a=0;a<*x;a++){
     printf("\n\nAxum University\n");
     printf("Student Grade Report\n");
     printf("====================\n");
     printf("Id:    %s\n",stu[a].id);
     printf("Name   %s\n",stu[a].name);
     printf("Code     Grade\n");
    for(int b=0;b<y;b++){

      printf("%s         ",stu[a].course[b].c_id);
      if(stu[a].course[b].score >=85){
         printf("A");
      }
      else if(stu[a].course[b].score>=75){
        printf("B");
      }
      else if(stu[a].course[b].score >=65){
        printf("C");
      }
      else if(stu[a].course[b].score >=55){
        printf("D");
      }
      else{
        printf("F");
      }
      printf("\n");
    }
      printf("\n");

        printf("Course Matrix\n");
        printf("Code     Course name     Credit\n");
        for(int b=0;b<y;b++){

        printf("%s        %s            %d\n",stu[a].course[b].c_id,stu[a].course[b].subject,stu[a].course[b].credit);
    }
       printf("|||||||////////\\\\\\\\\\\\|||||||\n");
}
}

