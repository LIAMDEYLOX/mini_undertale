#include <assert.h>
#include <float.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <allegro5/allegro.h>



#include <allegro5/allegro.h>

int main() {
    if (!al_init()) {
        fprintf(stderr, "Failed to initialize Allegro!\n");
        return -1;
    }

    ALLEGRO_DISPLAY *display = al_create_display(800, 600);
    if (!display) {
        fprintf(stderr, "Failed to create display!\n");
        return -1;
    }

    al_clear_to_color(al_map_rgb(50, 50, 50));
    al_flip_display();

    al_rest(100); // Attend 5 secondes
    al_destroy_display(display);
    return 0;
}
