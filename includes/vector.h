#ifndef vector_H
#define vector_H

#include <stdio.h>
#include <stdlib.h>

#include "util.h"

/**
 * vector_item typedef so we can change
 * the data type if need be
 */
typedef void* VectorItem;

/**
 * Properties of a vector
 */
typedef struct {
	VectorItem *items;
	int maxSize;
	int size;
} Vector;

/**
 * Creates a new instance of vector
 * 
 * @return the vector instance
 */
Vector *createVector();

/**
 * Push a vector_item into the given vector
 * 
 * @param vec the vector to push to
 * @param vector_item the item to push
 */
void pushBackItem(Vector *vec, VectorItem item);

/**
 * Retrieves the vector_item at the given index in
 * the given vector
 * 
 * @param vec vector the retrieve item from
 * @param index the place to check
 * @return the vector Item
 */
VectorItem getVectorItem(Vector *vec, int index);

/**
 * Destroys the given vector
 * 
 * @param vec the vector to destroy
 */
void destroyVector(Vector *vec);

#endif // vector_H
