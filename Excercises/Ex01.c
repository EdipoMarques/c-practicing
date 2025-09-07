#include <stdio.h>          

int main() {

    int age = 32;
    float height = 1.89;
    char name = 'Edipo'; // Character, singles quotes and no []
    char full_name[] = "Édipo Marques de Lima"; // String (array of characters), thats why we use double quotes and []

    printf("I am %d years old.\n", age);
    printf("I am %.1f meters tall.\n", height);
    printf("I am %d years old and %.1f meters tall.\n", age, height);
    printf("My name is %s.\n", full_name); // %s for strings
    
    return 0;
}