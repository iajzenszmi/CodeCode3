#include <stdio.h>

typedef enum {
    MODE_NORMAL,
    MODE_GAME,
    MODE_MOVIE
} PresetMode;

int main() {
    PresetMode currentMode = MODE_GAME;

    switch (currentMode) {
        case MODE_NORMAL:
            printf("Normal mode preset\n");
            break;
        case MODE_GAME:
            printf("Game mode preset\n");
            break;
        case MODE_MOVIE:
            printf("Movie mode preset\n");
            break;
    }

    return 0;
}
// presets.txt
// brightness=70
// contrast=40
// mode=Game
