#include <stdio.h>

typedef struct color{
    int r;
    int g;
    int b;
} Color;

void initColor(Color *c, int r, int g, int b){
    c->r = r;
    c->g = g;
    c->b = b;
    return;
}

Color averageColor(Color c[], int n){
    Color b = {0, 0, 0};
    for(int i=0;i<n;i++){
        b.r += c[i].r;
        b.g += c[i].g;
        b.b += c[i].b;
    }
    b.r /= n;
    b.g /= n;
    b.b /= n;
    return b;
}

double brightness(Color *c){
    return (double) (c->r + c->g + c->b)/3;
}

void printColor(Color *c){
    printf("(%d, %d, %d)  %f\n", c->r, c->g, c->b, brightness(c));
}