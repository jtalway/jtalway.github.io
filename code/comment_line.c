#include <stdio.h>
int main(void) {
    int i=0;
    // A for loop that prints BlahBlehBlih three times.
    for(i = 0; i < 3; i++) {
        printf("Blah");
        printf("Bleh");
        printf("Blih ");
    }
    // End of for loop. Start new line.
    printf("\n");
    // A for loop that prints BlohBluh six times.
    for (i=0; i<6; i++) {
        printf("Bloh");
        printf("Bluh ");
    }
    return 0;
}
