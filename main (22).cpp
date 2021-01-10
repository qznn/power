#include<iostream>
#include <stdlib.h>
using namespace std;
struct student
{
    int id;
    char name[20];
    char sex;
    int age;
    struct student *next;
};
student *next(student*head)
{
    student *p=NULL,*pr;
    pr=head;
    p=(student *)malloc(sizeof(student));
    if(head==NULL)   head=p;
    else
    {
        while(pr->next!=NULL)
         {
           pr=pr->next;
        }
          pr->next=p;

    }
    cin>>p->id;
    cin>>p->name;
    cin>>p->sex;
    cin>>p->age;
    p->next=NULL;
    return head;
}
void display(student *head)
{
    student *p=head;
    while(p!=NULL)
    {
       cout<<p->id<<" "<<p->name<<" "<<p->sex<<" "<<p->age<<endl;
        p=p->next;
    }
}

int main()
{
    student *head=NULL;
    int i;
    for(i=0;i<5;i++)
    head=next(head);
    display(head);
    return 0;
}


