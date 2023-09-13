#ifndef OBJ_DOG
#define OBJ_DOG

/**
 * struct dog - creates a structure for a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: a structure thatdefines dogs
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
