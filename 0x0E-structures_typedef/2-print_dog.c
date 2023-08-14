#include "dog.h"

/**
 * print_dog - Prints a struct dog
 * @d: The dog to print
 */
void print_dog(struct dog *d)
{
        if (d != NULL) {
                printf("Name: ");
                d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);

                printf("Age: ");
                printf("%.6f\n", d->age);

                printf("Owner: ");
                d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
        }
}
