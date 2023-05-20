#include<stdio.h>
#include<string.h>
int main()
{
    // struct student {
    //     char name[20];
    //     char rollid[20];
    //     char email[20];
    //     int grade;
    // };
//     //! i will use this later= -->
//    struct student s1,s2;
//     //struct student s1={"chandu" , "2211981488" , "cmhandan"  ,90};
//     strcpy(s1.rollid,"2211981488");
//     strcpy(s1.email,"flkdjf");
//     strcpy(s1.name,"shyam");
//     s2=s1;
//    s1.grade=89;
    
//     // scanf("%[^\n]",s1.name);
//     // scanf(" %[^\n]",s1.rollid);
//     // scanf(" %[^\n]",s1.email);
//     // scanf("%d",&s1.grade);
//     printf("Name:%s Rollid:%s Emailid:%s Grade:%d\n",s1.name,s1.rollid,s1.email,s1.grade);



//     printf("\n\n I am here to print the next structure of s2:\n\n");
//     strcpy(s2.name, "Kamal");
//      printf("Name:%s Rollid:%s Emailid:%s Grade:%d\n",s2.name,s2.rollid,s2.email,s2.grade);

// ! i want to do this with pointer
// struct student{
//     char* name;
//     char* email;
//     char* rollid;
//     int grade;
// };
//     struct student s1;
//     s1.name = "chandu";
//     s1.email="cmhanda";
//     s1.rollid="2211981499";
//     s1.grade = 98;
//     printf("Name:%s Rollid:%s Emailid:%s Grade:%d\n",s1.name,s1.rollid,s1.email,s1.grade);

// ! here i will make a pointer and point the structure to that pointer
     struct student {
        char name[20];
        char rollid[20];
        char email[20];
        int grade;
    };
    //  struct student s1={"chandu" , "2211981488" , "cmhandan"  ,90},*s2;
    //  s2=s1;
    struct student s1,*s2;
    strcpy(s1.name , "chandu");
    strcpy(s1.rollid,"2211981488");
    strcpy(s1.email,"chmadlkf");
    s1.grade = 90;
    //  struct student *s2={"Kamal" , "22119814","fjaldfj",89};
     s2=&s1;
     printf("Name:%s Rollid:%s Emailid:%s Grade:%d\n",s1.name,s1.rollid,s1.email,s1.grade);
     scanf(" %[^\n]",s2->name);
     printf("\nName:%s Rollid:%s Emailid:%s Grade:%d\n",s2->name,s2->rollid,s2->email,s2->grade);
return 0;
}