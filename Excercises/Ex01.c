#include <stdio.h>          

int main() {

    int age = 32;
    float height = 1.89;
    char name = 'E'; // Signle Character, singles quotes and no []
    char full_name[] = "Édipo Marques de Lima"; // String (array of characters), thats why we use double quotes and []

    printf("I am %d years old.\n", age);
    printf("I am %.1f meters tall.\n", height);
    printf("I am %d years old and %.1f meters tall.\n", age, height);
    printf("My first name starts with the letter %c.\n", name); // %c for single characters
    printf("My name is %s.\n", full_name); // %s for strings

    int x = 4; // Integer
    int y = 6; // Integer
    int z = 4.45; // Float assigned to an integer variable, the decimal part will be truncated

    printf("The sum of %d and %d is %d.\n", x, y, x + y);
    printf("The division of %d by %d is %d.\n", y, x, y / x); // Integer division
    
    return 0;
}