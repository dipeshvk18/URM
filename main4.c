#include<stdio.h>

#define MAX_STUDENT 10
#define SIZE 5

struct STUDENT
{
    int userid;
    char name[MAX_STUDENT];
    char password[50];
    char role[20];

};

struct STUDENT a [SIZE];

void input()
{
    for ( int i = 0; i < SIZE-1; i++)
    {
        printf("Enter your userid\n");
    scanf("%d",&a[i].userid); 
    printf("Enter your name\n");
    scanf("%s",&a[i].name);
    printf("Enter your password\n");
    scanf("%s",&a[i].password);
    printf("Enter your role\n");
    scanf("%s",&a[i].role);  
    }
    
  
}


void output()
{
    for ( int i = 0; i < SIZE-1; i++)
    {
    printf("userid is %d\n",a[i].userid);
    printf("name is %s\n",a[i].name);
    printf("password is %s\n",a[i].password);
    printf("role is %s\n",a[i].role);
    }       
}
void show(int index)
{
    printf("userid is %d\n",a[index].userid);
    printf("name is %s\n",a[index].name);
    printf("password is %s\n",a[index].password);
    printf("role is %s\n",a[index].role);
}

void update(int index)
{
    printf("Enter your userid\n");
    scanf("%d",&a[index].userid); 
    printf("Enter your name\n");
    scanf("%s",&a[index].name);
    printf("Enter your password\n");
    scanf("%s",&a[index].password);
    printf("Enter your role\n");
    scanf("%s",&a[index].role);  
}

int main()
{
    input();
    output();

    int index;
    printf("Enter the index to update: ");
    scanf("%d", &index);
    update(index);
    output();
    
  int choice;
while (1){
printf("\nUser management system\n");
printf("=============================================\n");
printf("1.Add user\n");
printf("2.view all users\n");
printf("3.update user information\n");
printf("4.delete user\n");
printf("5.search user name\n");
printf("6.exit\n");
printf("Enter your choice(1-6)\n");
scanf("%d",&choice);

switch (choice){

    case 1:input(); break;
    case 2:output(); break;
    case 3:update(index); break;
    case 4:delete(index); break;
    case 5:search(index); break;
    case 6:exit(0); break;
    default:printf("Invalid choice\n");
    break;
    
}

    
}






 return 0;

} ;



    
    
    

   





