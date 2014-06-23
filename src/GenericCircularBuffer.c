#include "GenericCircularBuffer.h"
#include <malloc.h>


CircularBuffer *circularBufferNew(int length , int sizeOfType)
{
	CircularBuffer *cb = malloc(sizeof(CircularBuffer));
	cb->length = length;
	cb->size = 0 ;
	cb->sizeOfType = sizeOfType;
	cb->head = cb->tail = cb->buffer = malloc(sizeOfType *length);
	return cb;
}

CircularBuffer *circularBufferAdd(CircularBuffer *cb, void *obj, void(*copy)(void*,void*));
{
	if(cb->size == cb->length)
		Throw(ERR_BUFFER_IS_FULL);
	else
	{
		if( cb->size == 0)
		{
			copy(cb->buffer, &obj);
			printf("Buffer is %i \n",*((int*)*buffer));
			cb->size++;
		}

}

// CircularBuffer *circularBufferRemove(CircularBuffer *cb, void *obj, void(*copy)(void*,void*));
// {



// }

CircularBuffer *circularBufferDel(CircularBuffer *cb)
{
	if(cb)
	{
		if(cb->buffer)
			free(cb->buffer);
		free(cb);
	}
}



