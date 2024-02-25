#include stdio.h
#include stdlib.h  

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *create(struct node* start)
{
    struct node *newnode,*temp;
    int n;
    printf("Enter the number of nodes");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL;
        if(start == NULL)
        {
            start = newnode;
        }
        else
        {
            temp = start;
            while(temp->next!=NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->prev = temp;
        }
    }
    return start;
}
struct node *Addatbeg(struct node *start,int data)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;
    if(start == NULL)
    {
        start = newnode;
    }
    else
    {
        newnode->next = start;
        start->prev = newnode;
        start = newnode;
    }
    return start;
}
struct node *Addatend(struct node *start,int data)
{
    struct node *newnode,*temp;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;
    if(start == NULL)
    {
        start = newnode;
    }
    else
    {
        temp = start;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
    }
    return start;
}
struct node *Addbefore(struct node *start)
{
    struct node *newnode,*temp;
    int data;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;
    printf("Enter the data before which you want to add");
    scanf("%d",&data);
    if(start == NULL)
    {
        start = newnode;
    }
    else
    {
        temp = start;
        while(temp->data!=data)
        {
            temp = temp->next;
        }
        newnode->next = temp;
        newnode->prev = temp->prev;
        temp->prev->next = newnode;
        temp->prev = newnode;
    }
    return start;
}
struct node *Addatpos(struct node *start)
{
    struct node *newnode,*temp;
    int data,pos;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;
    printf("Enter the position");
    scanf("%d",&pos);
    if(start == NULL)
    {
        start = newnode;
    }
    else
    {
        temp = start;
        for(int i=0;i<pos-1;i++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next->prev = newnode;
        temp->next = newnode;
    }
    return start;
}
struct node *del(struct node *start)
{
    struct node *temp;
    int data;
    printf("Enter the data to be deleted");
    scanf("%d",&data);
    if(start == NULL)
    {
        printf("List is empty");
    }
    else
    {
        temp = start;
        while(temp->data!=data)
        {
            temp = temp->next;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }
    return start;
}
void Display(struct node *start)
{
    struct node *temp;
    temp = start;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp = temp->next;
    }
}
void Count(struct node *start)
{
    struct node *temp;
    int count = 0;
    temp = start;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    printf("The number of nodes are %d",count);
}
void Search(struct node *start)
{
    struct node *temp;
    int data;
    printf("Enter the data to be searched");
    scanf("%d",&data);
    temp = start;
    while(temp!=NULL)
    {
        if(temp->data == data)
        {
            printf("The data is found");
            break;
        }
        temp = temp->next;
    }
    if(temp == NULL)
    {
        printf("The data is not found");
    }
}
struct node *Reverse(struct node *start)
{
    struct node *temp;
    temp = start;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp = temp->prev;
    }
}
struct node *del(struct node *start)
{
    struct node *temp;
    temp = start;
    start = start->next;
    start->prev = NULL;
    free(temp);
    return start;
}

int main()
{
    struct node *start = NULL;
    int a,data;
    while(1)
    {
        printf("1. Create");
        printf("2. Addatbeg");
        printf("3. Addatend");
        printf("4. Display");
        printf("5. Count");
        printf("6. Search");
        printf("7. AddBefore");
        printf("8. AddatPos");
        printf("9. Delete");
        printf("10. Exit");
        
        printf("Enter the Choice");
        scanf("%d",&a);
        
        switch(a)
        {
            case 1:
            create(start);
            break;
            case 2:
            Addatend(start,data);
            break;
            case 3:
            Addatbeg(start,data);
            break;
            case 4:
            Display(start);
            break;
            case 5:
            Count(start);
            break;
            case 6:
            Search(start);
            break; 
            case 7:
            Addbefore(start);
            break;
            case 8:
            Addatpos(start);
            break;
            case 9:
            del(start);
            break;
            case 10:
            exit(1);
            default:
            printf("INVALID GAND MARA");
            break;
        }
    }
   return 0;
}