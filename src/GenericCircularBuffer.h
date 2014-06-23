#ifndef GenericCircularBuffer_H
#define GenericCircularBuffer_H


typedef struct
{
	void *head;
	void *tail;
	int length;				//total number of item allowable in the buffer
	int size;				// current number of item in the buffer
	int sizeOfType;
	void *buffer;
}CircularBuffer;

CircularBuffer *circularBufferNew(int length , int sizeOfType);
void CircularBuffer *circularBufferAdd(CircularBuffer *cb, void *obj, void(*copy)(void*,void*));
void CircularBuffer *circularBufferRemove(CircularBuffer *cb, void *obj, void(*copy)(void*,void*));
void CircularBuffer *circularBufferDel(CircularBuffer *cb);

#endif // GenericCircularBuffer_H
