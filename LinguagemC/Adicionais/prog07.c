#include <stdio.h>
#include <math.h> /* Used for function 'sqrt' */

main()
{

float num1, num2, num3, discriminant, root1, root2, imaginary;

    printf("Input a: ");    scanf("%f", &num1);
    printf("Input b: ");    scanf(" %f", &num2);
    printf("Input c: ");    scanf(" %f", &num3);

    discriminant = num2 * num2 - 4 * num1 * num3;

    switch(discriminant > 0)
    {
        case 1 : root1 = (-num2 + sqrt(discriminant)) / (2 * num1);
                 root2 = (-num2 - sqrt(discriminant)) / (2 * num1);
                 printf("Two distinct and real roots exists: %.2f and %.2f\n", root1, root2);
                 break;
        
        case 0 : switch(discriminant == 0)
                 {
                    case 1 : root1 = root2 = -(num2 / (2 * num1));
                    printf("Two equal and real roots exists: %.2f and %.2f\n", root1, root2);
                    break;

                    case 0 : root1 = root2 = (-num2 / (2 * num1)) + imaginary * (sqrt(-discriminant)/(2 * num1));
                             imaginary = sqrt(-discriminant);
                    printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f\n", root1, imaginary, root2, imaginary);
                 }
    }

}