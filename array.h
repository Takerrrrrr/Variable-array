#ifndef __ARRAY_H_
#define __ARRAY_H_

typedef struct 
{
    int *array;
    int size;
}Array;

Array array_create(int init_size);
void array_free(Array *a);
int array_size(const Array *a);
int* array_at(Array *a,int index);
int array_get(const Array *a,int index);
int array_set(Array *a,int index,int value);
void array_inflate(Array *a,int more_size);

// a new change 


#endif // !__ARRAY_H_
