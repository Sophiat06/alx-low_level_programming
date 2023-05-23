#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog's basic information
 * @name: first input
 * @age: second input
 * @owner: third input
 *
 * Description: A longer description
 */
struct dog
{
	char *name;
	float *age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
#endif
