#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *create(struct node *start);
struct node *Addatbeg(struct node *start, int data);
struct node *Addatend(struct node *start, int data);
struct node *Addatpos(struct node *start, int data, int position);
struct node *Addbefore(struct node *start, int data, int element);
struct node *Display(struct node *start);
struct node *Count(struct node *start);
struct node *del(struct node *start, int data);
struct node *Search(struct node *start, int data);
struct node *reverse(struct node *start);
struct node *kreverse(struct node *start, int position);

int main()
{
    struct node *start = NULL;
    int a, data,k;
    while (1)
    {
        printf("1. Create\n");
        printf("2. Add at the beginning\n");
        printf("3. Add at the end\n");
        printf("4. Display\n");
        printf("5. Count\n");
        printf("6. Search\n");
        printf("7. Add Before\n");
        printf("8. Add at Position\n");
        printf("9. Delete\n");
        printf("10. Reverse\n");
        printf("11. K-Reverse\n");
        printf("12. Exit\n");

        printf("Enter the Choice: ");
        scanf("%d", &a);

        switch (a)
        {
        case 1:
            start = create(start);
            break;
        case 2:
            printf("Enter data: ");
            scanf("%d", &data);
            start = Addatbeg(start, data);
            break;
        case 3:
            printf("Enter data: ");
            scanf("%d", &data);
            start = Addatend(start, data);
            break;
        case 4:
            start = Display(start);
            break;
        case 5:
            start = Count(start);
            break;
        case 6:
            printf("Enter data to search: ");
            scanf("%d", &data);
            start = Search(start, data);
            break;
        case 7:
            printf("Enter data to add: ");
            scanf("%d", &data);
            printf("Enter element before which to add: ");
            int element;
            scanf("%d", &element);
            start = Addbefore(start, data, element);
            break;
        case 8:
            printf("Enter data to add: ");
            scanf("%d", &data);
            int position;
            printf("Enter position at which to add: ");
            scanf("%d", &position);
            start = Addatpos(start, data, position);
            break;
        case 9:
            printf("Enter data to delete: ");
            scanf("%d", &data);
            start = del(start, data);
            break;
        case 10:
            start = reverse(start);
            break;
        case 11:
            printf("Enter k for k-reverse: ");
            scanf("%d", &k);
            start = kreverse(start, k);
            break;
        case 12:
            exit(0);
        default:
            printf("INVALID CHOICE\n");
        }
    }
    return 0;
}

struct node *create(struct node *start)
{
    int n, data;
    printf("Enter the number of elements to be added: ");
    scanf("%d", &n);

    printf("Enter the elements to be added: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data);
        start = Addatend(start, data);
    }
    return start;
}

struct node *Addatend(struct node *start, int data)
{
    struct node *p, *tmp;
    printf("Enter the number to be added: ");
    scanf("%d", &data);

    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    tmp->link = NULL;

    if (start == NULL)
    {
        start = tmp;
    }
    else
    {
        p = start;
        while (p->link != NULL)
        {
            p = p->link;
        }
        p->link = tmp;
    }

    return start;
}

struct node *Addatbeg(struct node *start, int data)
{
    printf("Enter the number to be added: ");
    scanf("%d", &data);
    struct node *tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    tmp->link = start;
    start = tmp;
    return start;
}

struct node *Display(struct node *start)
{
    struct node *p = start;
    if (p == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        while (p != NULL)
        {
            printf("%d ", p->info);
            p = p->link;
        }
        printf("\n");
    }
    return start;
}

struct node *Count(struct node *start)
{
    int count = 0;
    struct node *p = start;
    while (p != NULL)
    {
        count++;
        p = p->link;
    }
    printf("Number of elements in the list: %d\n", count);
    return start;
}

struct node *Search(struct node *start, int data)
{
    struct node *p = start;
    int position = 1;
    while (p != NULL)
    {
        if (p->info == data)
        {
            printf("Element %d found at position %d\n", data, position);
            return start;
        }
        p = p->link;
        position++;
    }
    printf("Element not found\n");
    return start;
}

struct node *Addatpos(struct node *start, int data, int position)
{
    if (position < 1)
    {
        printf("Invalid position\n");
        return start;
    }

    if (position == 1)
    {
        return Addatbeg(start, data);
    }

    struct node *p = start;
    int i = 1;

    while (p != NULL && i < position - 1)
    {
        p = p->link;
        i++;
    }

    if (p == NULL)
    {
        printf("Invalid position\n");
        return start;
    }

    struct node *tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    tmp->link = p->link;
    p->link = tmp;
    return start;
}

struct node *Addbefore(struct node *start, int data, int element)
{
    if (start == NULL)
    {
        printf("List is empty\n");
        return start;
    }

    if (start->info == element)
    {
        start = Addatbeg(start, data);
        return start;
    }

    struct node *p = start;
    while (p->link != NULL)
    {
        if (p->link->info == element)
        {
        struct node *tmp = (struct node *)malloc(sizeof(struct node));
        tmp->info = data;
        tmp->link = p->link;
        p->link = tmp;
        return start;
    }

    printf("Element not found in the list\n");
    return start;
}

struct node *del(struct node *start, int data)
{
    if (start == NULL)
    {
        printf("List is empty\n");
        return start;
    }

    if (start->info == data)
    {
        struct node *tmp = start;
        start = start->link;
        free(tmp);
        return start;
    }

    struct node *p = start;
    while (p->link != NULL)
    {
        if (p->link->info == data)
        {
            struct node *tmp = p->link;
            p->link = tmp->link;
            free(tmp);
            return start;
        }
        p = p->link;
    }

    printf("Element not found in the list\n");
    return start;
}

struct node *reverse(struct node *start)
{
    struct node *prev = NULL;
    struct node *current = start;
    struct node *next;

    while (current != NULL)
    {
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }

    start = prev;
    return start;
}

struct node *kreverse(struct node *start, int k)
{
    if (k <= 1)
    {
        printf("Invalid k for k-reverse\n");
        return start;
    }

    struct node *prev = NULL;
    struct node *current = start;
    struct node *next;
    int count = 0;

    // Count the number of nodes in the list
    struct node *temp = start;
    while (temp != NULL)
    {
        count++;
        temp = temp->link;
    }

    if (k > count)
    {
        printf("k is greater than the number of elements in the list\n");
        return start;
    }

    // Reverse the first k nodes
    int reversed = 0;
    while (current != NULL && reversed < k)
    {
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
        reversed++;
    }

    // Recursively reverse the rest of the list
    if (next != NULL)
    {
        start->link = kreverse(next, k);
    }

    return prev;
}
}
