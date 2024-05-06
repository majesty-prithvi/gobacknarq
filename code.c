#include<stdio.h>

int main() {
    int windowsize, sent = 0, ack;
    printf("Enter window size:\n");
    scanf("%d", &windowsize);

    while (1) {
        for (sent = 0; sent < windowsize; sent++) {
            printf("Frame %d has been transmitted.\n", sent);
            if (sent == windowsize - 1)
                break;
        }
        
        printf("\nPlease enter the last Acknowledgement received:\n");
        scanf("%d", &ack);
        
        if (ack == windowsize)
            break;
    }
    return 0;
}
