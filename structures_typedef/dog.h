#ifndef dog_H
#define dog_H
/**
 * struct dog - nbaskd
 * @name: sadsas
 * @owner: asdfasd
 * @age: sadas
 *
 * Description: asdasd
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* dog_H */
