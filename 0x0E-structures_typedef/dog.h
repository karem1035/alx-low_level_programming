#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - data type for dogs info.
 * @name: its name.
 * @age: its age.
 * @owner: ins owner.
 *
 * Description: this is a new data type for dogs and its info.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif