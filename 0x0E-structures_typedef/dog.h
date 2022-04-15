#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog characteristics
 * @name: the first member
 * @age: the second member
 * @owner: the third member
 * 
 * Description: Additional description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_type - typeofdef for struct dog
 * 
 */
typedef struct dog dog_type;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_type *new_dog(char *name, float age, char *owner);
void free_dog(dog_type *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
