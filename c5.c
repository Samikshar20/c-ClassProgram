#include <stdio.h>

int main() {
    int num_users, i, total_amount = 0;

    printf("Enter the number of users: ");
    scanf("%d", &num_users);

    int amounts[num_users];
    printf("Enter the amount transferred by each user:\n");
    for (i = 0; i < num_users; i++) {
        printf("User %d: ", i + 1);
        scanf("%d", &amounts[i]);
        total_amount += amounts[i];
    }

    printf("Total amount transferred to single user: %d\n", total_amount);

    return 0;
}
