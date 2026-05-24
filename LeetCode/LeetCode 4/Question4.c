#include <stdio.h>

struct Box {
    int length;
    int width;
    int height;
};

int main() {
    int n, tunnel_height, i;
    printf("Enter the number of boxes: ");
    scanf("%d", &n);
    printf("Enter the tunnel height: ");
    scanf("%d", &tunnel_height);
    struct Box boxes[n]; 
    for (i = 0; i < n; i++) {
        printf("Enter length of box %d: ", i + 1);
        scanf("%d", &boxes[i].length);
        printf("Enter width of box %d: ", i + 1);
        scanf("%d", &boxes[i].width);
        printf("Enter height of box %d: ", i + 1);
        scanf("%d", &boxes[i].height);
    }
    printf("\nVolumes of boxes that can pass through the tunnel:\n");
    for (i = 0; i < n; i++) {
        if (boxes[i].height < tunnel_height) {
            int volume = boxes[i].length * boxes[i].width * boxes[i].height;
            printf("%d\n", volume);
        }
    }
    return 0;
}

