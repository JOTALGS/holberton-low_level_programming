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
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* dog_H */
