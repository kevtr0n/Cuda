// Library imports:
#include <stdio.h>

// Define constants:
#define c1 -42.379
#define c2  2.04901523
#define c3  10.14333127
#define c4 -0.22475541
#define c5 -6.83783e-3f
#define c6 -5.481717e-2f
#define c7  1.22874e-3f
#define c8  8.5282e-4f
#define c9 -1.99e-6f 

// Prototypes:
int calculateHeatIndex(float t, float r);

// Main Method:
int main(int argc, char const *argv[]) {
    return 0;
}

// Functions:
int calculateHeatIndex(float t, float r) {
    double hi = c1 + (c2 * t) + (c3 * r) + (c4 * t * r) + (c5 * (t * t)) + (c6 * (r * r)) + (c7 * (t * t) * r) + (c8 * t * (r * r)) + (c9 * (t * t) * (r * r));
    return (int) (hi + 0.5);
}