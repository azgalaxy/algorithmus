#include <stdio.h>
#include <stdlib.h>

struct following_node
{
    int val;
    struct following_node *next;
};
typedef struct following_node node;

// Function to create a linked list of n nodes
node *create_linked_list(int n)
{
    node *start = NULL;
    node *new_node, *temp;
    int i;
    for (i = 0; i < n; i++)
    {
        new_node = (node *)malloc(sizeof(node));
        if (new_node == NULL)
        {
            printf("Memory allocation failed.\n");
            exit(1);
        }
        printf("Enter the value for node %d: ", i + 1);
        scanf("%d", &(new_node->val));
        new_node->next = NULL;
        if (start == NULL)
        {
            start = new_node;
        }
        else
        {
            temp = start;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new_node;
        }
    }
    return start; 
}

// Function to reverse and print the linked list
void reverse_reading(node *st)
{
    if (st == NULL)
    {
        return;
    }
    else
    {
        reverse_reading(st->next);
        printf("%d  ", st->val);
    }
}

int main()
{
    int list_size;
    printf("Enter the List Size: ");
    scanf("%d", &list_size);
    node *start = create_linked_list(list_size);
    printf("Reversed List is: ");
    reverse_reading(start);
    printf("\n");
    return 0;
}
