#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 * @name: dog's name(var instance)
 * @age: dog's age(var instance2)
 * @owner: dog's owner(var instance3)
 *
 * Description : alone dog struct
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


