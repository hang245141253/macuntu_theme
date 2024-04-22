#include <stdio.h>
#include <stdlib.h>

int main() {
    // Execute the first command
    printf("Executing: xinput map-to-output $(xinput | grep G2TSP | awk '{print $7}' | cut -c 4-5) DP-1-1\n");
    system("xinput map-to-output $(xinput | grep G2TSP | awk '{print $7}' | cut -c 4-5) DP-1-1");

    // Execute the second command
    printf("Executing: xinput map-to-output $(xinput | grep MPI5001 | awk '{print $5}' | cut -c 4-5) HDMI-0\n");
    system("xinput map-to-output $(xinput | grep MPI5001 | awk '{print $5}' | cut -c 4-5) HDMI-0");

    return 0;
}
