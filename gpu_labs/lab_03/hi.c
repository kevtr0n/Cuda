/**
 * @author: Kevin Hayden
 * @file:   hi.c
 * @date:   September 13th, 2018
 * -------------------------------------
 * This program computes the heat index given
 * a dry-bulb temperature  between 80-110 °F
 * and 40%-100% humidity using the formula:
 * 
 * HI = c₁ + c₂T + c₃R + c₄TR + c₅T² + c₆R² + c₇T²R + c₈TR² + c₉T²R²
 * 
 * HI = Heat index (in degrees Fahrenheit)
 * T  = Ambient dry-bulb temperatur (in degrees Fahrenheit)
 * R  = Relative humidity (percentage value between 0 and 100)
 * 
 * c₁= -42.379         c₂= 2.04901523       c₃= 10.14333127
 * c₄= -0.22475541     c₅= -6.83783e-3f     c₆= -5.481717e-2f
 * c₇= 1.22874e-3f     c₈= 8.5282e-4f       c₉= -1.99e-6f
 */

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
void generateChart();

// Main Method:
int main(int argc, char const *argv[]) {
    
    generateChart();
    return 0;
}

/**
 * Function: calculateHeatIndex
 * ----------------------------
 * Computes the heat index given a dry temp and a humidity value.
 * 
 * @param t: The dry bulb temperature.
 * @param r: The humidity in the form of a whole number percentage.
 * 
 * @returns: The heat index rounded to the nearest integer.
 */
int calculateHeatIndex(float t, float r) {
    double hi = c1 + (c2 * t) + (c3 * r) + (c4 * t * r) + (c5 * (t * t)) + (c6 * (r * r)) + (c7 * (t * t) * r) + (c8 * t * (r * r)) + (c9 * (t * t) * (r * r));
    return (int) (hi + 0.5);
}

/**
 * Function: generateChart
 * ----------------------------
 * Prints the formatted heat index chart to the console.
 */
void generateChart() {

    printf("Heat Index\n%7s", "Rv F>");

    for (int t = 80; t <= 110; t += 2) {
        printf("%6d", t);
    }

    for (int r = 40; r <= 100; r += 5) {
        printf("\n%6d%%", r);
        for (int t = 80; t <= 110; t += 2) {
            int index = calculateHeatIndex((int) t, (int) r);
            printf("%6d", index);
        }
    }
}