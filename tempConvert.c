#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahrenheit = 0, 20, ..., 300 */

int tempConvert ()

{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;      /*lower limit of table*/
    upper = 300;    /*upper limit of table*/
    step = 20;      /*step size*/

    fahr = lower;

    while (fahr <= upper) {

        celsius = 5 * (fahr-32) / 9;
        printf("%3d \t %6d \n", fahr, celsius);
        fahr = fahr + step;

    }

    return 0;

}
