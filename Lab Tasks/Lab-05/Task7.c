#include <stdio.h>

int main() {
    int permissions;
    printf("Enter permissions value (1=READ, 2=WRITE, 4=EXECUTE, combinations allowed): ");
    scanf("%d", &permissions);
    if (permissions & 4) {  
        printf("Access granted: full control\n");
    }
    else {
        if ((permissions & 1) && (permissions & 2)) {  
            printf("Access granted: read and write\n");
        }
        else {
            if (permissions & 1) {  
                printf("Access granted: read-only\n");
            }
            else {
                printf("Access denied\n");
            }
        }
    }
    return 0;
}

