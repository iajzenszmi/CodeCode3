#include <stdio.h>

typedef struct {
    int brightness;
    int contrast;
    char mode[10];
} DisplaySettings;

int main() {
    DisplaySettings preset1 = {80, 60, "Normal"};
    
    printf("Brightness: %d\n", preset1.brightness);
    printf("Contrast: %d\n", preset1.contrast);
    printf("Mode: %s\n", preset1.mode);

    return 0;
}
