#ifndef MAIN_H
#define MAIN_H
/**
  * struct dog - structure for dog
  * @name: name of the dog
  * @age: age of the dog
  * @owner: name of the owner
* Description: A struct to hold values for a dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
