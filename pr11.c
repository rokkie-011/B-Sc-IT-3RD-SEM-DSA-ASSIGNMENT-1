#include<stdio.h>
#include<stdlib.h>

int top = -1;

void push(int s, int *st, int value) {
    if (top == s - 1) {
        printf("Stack Overflow\n");
    } else {
        top++;
        st[top] = value;
    }
}

int pop(int *st) {
    if (top == -1) {
        printf("No element to be popped out\n");
        return -999;
    } else {
        int value = st[top];
        top--;
        return value;
    }
}

void peep(int *st, int size) {
    int pos;
    if (top == -1) {
        printf("Stack is underflow\n");
    } else {
        printf("Enter the position for which you want to peep: ");
        scanf("%d", &pos);
        if (pos > top + 1 || pos <= 0) {
            printf("Peep not possible. Enter a valid position\n");
        } else {
            printf("Element at position %d is %d\n", pos, st[top - pos + 1]);
        }
    }
}

void display(int *st, int val) {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    if (val == 1) {
        for (int i = top; i >= 0; i--) {
            printf("%d\t", st[i]);
        }
        printf("\n");
    } else if (val == 2) {
        for (int j = 0; j <= top; j++) {
            printf("%d\t", st[j]);
        }
        printf("\n");
    } else {
        printf("Invalid choice\n");
    }
}

int main() {
    int size;
    int *st;
    int ans;
    int ch, val;

    printf("Enter the size of stack you want: ");
    scanf("%d", &size);

    st = (int *)malloc(size * sizeof(int)); // Corrected memory allocation

    do {
        printf("\nBelow are the operations of the stack:\n");
        printf("Enter 1 for push\n");
        printf("Enter 2 for pop\n");
        printf("Enter 3 for peep\n");
        printf("Enter 4 for display\n");
        printf("Enter 5 for exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter the data you want to insert: ");
                scanf("%d", &val); // Corrected scanf usage
                push(size, st, val);
                break;

            case 2:
                ans = pop(st);
                if (ans != -999) {
                    printf("The popped value is %d\n", ans);
                }
                break;

            case 3:
                peep(st, size);
                break;

            case 4:
                printf("Enter 1 to display from top to bottom and 2 for bottom to top: ");
                scanf("%d", &val);
                display(st, val);
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Please enter a correct choice\n");
        }
    } while (ch != 5);

    free(st); // Free allocated memory
    return 0;
}
