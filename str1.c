#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("\n === String Length ,Copy,Compare ===\n\n");

    char my_string[] = "I love programming in C!";
    printf("The string : \"%s\"\n", my_string);

    /* String Length */
    int i;
    for (i = 0; my_string[i] != '\0'; i++)
        ;
    printf("String Length(from scratch): %d\n ", i);
    printf("Sizeof string :%11d\n", sizeof(my_string));

    /* String Length : Built In Method*/
    printf("String length (built in): %d\n",strlen(my_string));

    printf("\n\n=== ByteGarage ===\n\n");
     printf("\n\n=== Test ===\n\n");

    return 0;
}

int p3()
{
    printf("\n === String Length ,Copy,Compare ===\n\n");

    char my_string[] = "I love programming in C!";
    printf("The string : \"%s\"", my_string);

    /* String Length */
    int i;
    for (i = 0; my_string[i] != '\0'; i++)
        ;
    printf("String Length(from scratch): %d\n ", i);

    printf("\n\n=== ByteGarage ===\n\n");

    return 0;
}
int p2()
{
    char str[] = "This course is interesting";

    printf("%s\n", str);
    printf("%s\n", &str[15]);
    printf("%.4s\n", str);

    return 0;
}

int p1()
{

    const char str[] = "Hello!";
    // str[0] = 'y'; // Error

    char *str1 = "Hello!";
    // str1[0] = 'y'; //Error (runtime)

    str1 = "Another string"; // Allowed

    printf("%s", str1);

    return 0;
}