#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahrenheit = 0, 20, ..., 300 */

int tempConvertFloat()

{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /*lower limit of table*/
    upper = 300;    /*upper limit of table*/
    step = 20;      /*step size*/

    fahr = lower;

    printf(" ºF \t   ºC\n");

    while (fahr <= upper) {

        celsius = 5.0 / 9.0 * (fahr-32.0);
        printf("%3.0f \t %3.2f \n", fahr, celsius);
        fahr = fahr + step;

    }

    /*
    %d decimal
    %f floating point
    %o octal
    %x hexadecimal
    %c character
    %s character string
    %% % percentage
    */

    return 0;

}

