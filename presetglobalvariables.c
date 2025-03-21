#include <stdio.h>

int preset_volume = 75;
char preset_mode[] = "Stereo";

int main() {
    printf("Volume: %d\n", preset_volume);
    printf("Mode: %s\n", preset_mode);
    return 0;
}
