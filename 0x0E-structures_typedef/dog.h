#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines dogs nameans its owner
 * @name: name of the dog char pointer
 * @owner: name of the owner of the dog
 * @age: age of the dog  float type.
 *
 * Description: defines the dogs name and age  and its owner  name.
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void  free_dog(dog_t *d);

#endif
