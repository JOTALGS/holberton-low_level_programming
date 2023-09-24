int linear_search(int *array, size_t size, int value)
{
int i = -1;
size_t elements = size;

if (!array)
return (i);

i++;
printf("Value checked array[%d] = [%d]\n", i, array[i]);
while (i < elements && array[i] != value)
{
i++;
if (i < elements)
printf("Value checked array[%d] = [%d]\n", i, array[i]);
}

if (i == elements)
return (-1);
return (i);
}