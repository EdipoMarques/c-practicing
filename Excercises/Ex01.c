#include <stdio.h>          

int main() {

    //int age = 32;
    //float height = 1.89;
    //char name = 'E'; // Signle Character, singles quotes and no []
    //char full_name[] = "Édipo Marques de Lima"; // String (array of characters), thats why we use double quotes and []

    //printf("I am %d years old.\n", age);
    //printf("I am %.1f meters tall.\n", height);
    //printf("I am %d years old and %.1f meters tall.\n", age, height);
    //printf("My first name starts with the letter %c.\n", name); // %c for single characters
    //printf("My name is %s.\n", full_name); // %s for strings

    // Aritimetic operations + - * / % (modulus - remainder of a division)

    // z = x + y; // Addition
    // z = x - y; // Subtraction
    // z = x * y; // Multiplication
    // z = x / y; // Division
    // z = x % y; // Modulus

    //int x = 4; // Integer
    //int y = 6; // Integer
    //int z = 4; // Float assigned to an integer variable, the decimal part will be truncated
    
    //printf(" %d.\n", z); // Will print 4
    //printf("The sum of %d and %d is %d.\n", x, y, x + y);
    //printf("The division of %d by %d is %d.\n", y, x, y / x); // Integer division

    //Augmented assignments
    
    // x += 2; // x = x + 2;
    // x -= 2; // x = x - 2;
    // x *= 2; // x = x * 2;
    // x /= 2; // x = x / 2;
    // x %= 2; // x = x % 2;    

    // Input FROM USER , scanf function

    //int age; // I am just delcared the variable
    // int age = 24; // I am declaring and initializing the variable

    //int age;
    //float height;
    //char name[30]; // Array of characters (string) with a limit of 30. I nedd to specify the size of the array
    //char full_name[50]; // Array of characters (strings) with a limit of 50. I nedd to specify the size of the array
    
    int age = 0;
    float height = 0;
    printf("Enter your age: ");
    scanf("%d", &age); // & is the address operator, it gives the memory address of the variable
    printf("You are %d years old.\n", age);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("You are %.2f meters tall.\n", height);
    //printf("Enter your name: ");
    //scanf("%s", name); // No need to use & for strings, because the name of the array is already a pointer to the first element of the array
    //printf("Your name is %s.\n", name);
    //printf("Enter your full name: ");
    //scanf(" %[^\n]s", full_name); // %[^\n]s - This format specifier allows to read a string with spaces until a newline is encountered
    //printf("Your full name is %s.\n", full_name);
    
  
    return 0;
}