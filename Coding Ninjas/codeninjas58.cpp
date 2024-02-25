#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int info;
    struct node *link;
};

struct node *create(struct node *start);
struct node *Addatend(struct node *start, int data);
struct node *reverse(struct node *start);
bool isPalindrome(struct node *start);

int main()
{
    struct node *start = NULL;
    int a, data;
    while (1)
    {
        printf("1. Create\n");
        printf("2. Add at the end\n");
        printf("3. Check Palindrome\n");
        printf("4. Exit\n");

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
            start = Addatend(start, data);
            break;
        case 3:
            if (isPalindrome(start))
                printf("The linked list is a palindrome.\n");
            else
                printf("The linked list is not a palindrome.\n");
            break;
        case 4:
            exit(0);
        default:
            printf("INVALID CHOICE\n");
        }
    }
    return 0;
}

struct node *Addatend(struct node *start, int data)
{
    struct node *p, *tmp;
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

struct node *reverse(struct node *start)
{
    struct node *prev = NULL, *next, *current;
    current = start;
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

bool isPalindrome(struct node *start)
{
    if (start == NULL || start->link == NULL)
        return true;

    struct node *slow = start;
    struct node *fast = start;
    struct node *prev_slow = start;

    while (fast != NULL && fast->link != NULL)
    {
        fast = fast->link->link;
        prev_slow = slow;
        slow = slow->link;
    }

    struct node *second_half = reverse(slow);
    struct node *first_half = start;

    while (second_half != NULL)
    {
        if (first_half->info != second_half->info)
            return false;

        first_half = first_half->link;
        second_half = second_half->link;
    }

    return true;
}

