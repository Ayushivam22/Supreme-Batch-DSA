#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void traverse(struct Node *ptr)
{
    while(ptr != NULL)
    {
        printf("%d: ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
void insertatbegin(struct Node **ptr,int data)
{
    struct Node *next = (struct Node * )malloc(sizeof(struct Node));
    next->data = data;
    next->next = *ptr;
    *ptr=next;
} 
void insertatend(struct Node*ptr,int data)
{
    while(ptr->next != NULL)
    {
        ptr=ptr->next;
    }
    struct Node* next=(struct Node*)malloc(sizeof(struct Node));
    next->data=data;
    ptr->next=next;
    next->next=NULL;
}
void insertatpos(struct Node*ptr, int pos,int data)
{
    if(pos==1){
        insertatbegin(&ptr,data);
        return;
    }
    for(int i=1;i<pos-1;i++)
    {
        ptr=ptr->next;
    }
    struct Node* next = (struct Node*)malloc(sizeof(struct Node));
    next->next=ptr->next;
    ptr->next=next;
    next->data=data;

}

void deleteatstart(struct Node**ptr)
{
    struct Node*temp=*ptr;
    *ptr=(*ptr)->next;
    free(temp);
    
}
void deleteatpos(struct Node**ptr, int pos)
{
    for(int i=1;i<pos-1;i++)
    {
        *ptr=(*ptr)->next;
    }
    struct Node*temp=(*ptr)->next;
    *ptr=temp->next;
    free(temp);
}
int main()
{
    struct Node *head=(struct Node *)malloc(sizeof(struct Node));
    struct Node *second=(struct Node *)malloc(sizeof(struct Node));
    struct Node *third=(struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth=(struct Node *)malloc(sizeof(struct Node));
    struct Node *fifth=(struct Node *)malloc(sizeof(struct Node));
    // struct Node *=(struct Node *)malloc(sizeof(struct Node));
    head->data=5;
    head->next=second;
    second->data=6;
    third->data=7;
    fourth->data=8;
    fifth->data=9;

    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=NULL;

    traverse(head);
    insertatbegin(&head,10);
    traverse(head);
    insertatend(head,11);
    traverse(head);
    insertatpos(head,3,12);
    traverse(head);
    deleteatstart(&head);
    traverse(head);
    deleteatpos(&head,3);
    traverse(head);
    return 0;
}