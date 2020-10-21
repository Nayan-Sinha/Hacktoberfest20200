#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data ;
    struct node *next;
};
struct node *create_node(struct node *head)
{
    int i,ele,num;
    printf("enter the number of elements : ");
    scanf("%d",&num);
    struct node *new_node,*temp;
    if(head!=NULL)
    {
        printf("the list already exists ");
    }
    else
    {
        for(i=0;i<num;i++)
        {
            printf("enter the element : ");
            scanf("%d",&ele);
            new_node=(struct node*)malloc(sizeof(struct node));
            new_node->data=ele;
            new_node->next=NULL;
            if(head==NULL)
            {
               head=new_node;
               temp=new_node;
            }
            else
            {
                temp->next=new_node;
                temp=temp->next;
            }
         }
    }
    printf("list is created successfully");
    return head;
}
void display(struct node *head)
{
    if(head==NULL)
    {
        printf("no list is created");
    }
    else
    {
        struct node *temp;
        temp=head;
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }

}
struct node *insert_at_beg(struct node *head)
{
    if(head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        struct node *new_node;
        int value;
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("enter data : ");
        scanf("%d",&value);
        new_node->data=value;
        new_node->next=head;
        head=new_node;
        printf("node is inserted successfully");
        return head;
    }
}
struct node *insert_at_end(struct node *head)
{
    if(head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        struct node *new_node,*temp;
        int value;
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("enter data : ");
        scanf("%d",&value);
        new_node->data=value;
        new_node->next=NULL;
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new_node;
        printf("node is inserted successfully");
        return head;
    }
}
struct node *delete_at_beg(struct node *head)
{
    if(head==NULL)
    {
        printf("list is empty");
        return head;
    }
    else
    {
        struct node *temp=head;
        head=head->next;
        free(temp);
        printf("node id deleted successfully");
        return head;
    }
}
struct node *delete_at_end(struct node *head)
{
    struct node *temp=head,*loc;
    if(head==NULL)
    {
        printf("list is empty");
        return head;
    }
    else
    {
        while(temp->next!=NULL)
        {
            loc=temp;
            temp=temp->next;
        }
        loc->next=NULL;
        free(temp);
        printf("node id deleted successfully");

        return head;
    }
}
struct node* reverse(struct node *head)
{
    struct node*current,*next,*prev=NULL;
    current=head;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    return prev;
}
int count(struct node *head)
{
    int c=0;
    struct node *temp=head;
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
    return c;
}
int main()
{
    struct node *s1=NULL;
    int i;
    int num;
    while(1)
    {
        printf("\nenter 1 to create node\nenter 2 to insert at beginning\nenter 3 to insert at ending\nenter 5 to delete at beginning\nenter 6 to delete at end\nenter 7 to reverse the list\nenter 4 to display\nenter 0 to exit\nenter your choise : ");
        scanf("%d",&num);
        switch(num)
        {
            case 1:
                s1=create_node(s1);
                break;
            case 2:
                s1=insert_at_beg(s1);
                break;
            case 3:
                s1=insert_at_end(s1);
                break;
            case 4:
                display(s1);
                break;
            case 5:
                s1=delete_at_beg(s1);
                break;
            case 6:
                s1=delete_at_end(s1);
                break;
            case 7:
                s1=reverse(s1);
                break;
            case 8:
                i=count(s1);
                printf("%d",i);
                break;
            case 0:
                exit(0);
            default:printf("enter a valid number");
        }
    }
    return 0;
}

