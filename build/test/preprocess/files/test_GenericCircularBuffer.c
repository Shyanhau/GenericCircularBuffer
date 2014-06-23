#include "unity.h"
#include "GenericCircularBuffer.h"


void setUp(void){}



void tearDown(void){}



void test_circularBufferNew_should_create_new_CircularBuffer_object_of_integer_type(void)

{

 CircularBuffer *cb = circularBufferNew(7, sizeof(int));



 if ((((cb)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)12);;};

 if ((((cb->buffer)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)13);;};

 UnityAssertEqualNumber((_U_SINT)(_UP)((cb->buffer)), (_U_SINT)(_UP)((cb->head)), (((void *)0)), (_U_UINT)14, UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((_U_SINT)(_UP)((cb->buffer)), (_U_SINT)(_UP)((cb->tail)), (((void *)0)), (_U_UINT)15, UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((cb->size)), (((void *)0)), (_U_UINT)16, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((7)), (_U_SINT)((cb->length)), (((void *)0)), (_U_UINT)17, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((sizeof(int))), (_U_SINT)((cb->sizeOfType)), (((void *)0)), (_U_UINT)18, UNITY_DISPLAY_STYLE_INT);

 circularBufferDel(cb);



}



void test_circularBufferNew_should_create_new_CircularBuffer_object_of_double_type(void)

{

 CircularBuffer *cb = circularBufferNew(13, sizeof(double));



 if ((((cb)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)27);;};

 if ((((cb->buffer)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)28);;};

 UnityAssertEqualNumber((_U_SINT)(_UP)((cb->buffer)), (_U_SINT)(_UP)((cb->head)), (((void *)0)), (_U_UINT)29, UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((_U_SINT)(_UP)((cb->buffer)), (_U_SINT)(_UP)((cb->tail)), (((void *)0)), (_U_UINT)30, UNITY_DISPLAY_STYLE_HEX32);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((cb->size)), (((void *)0)), (_U_UINT)31, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((13)), (_U_SINT)((cb->length)), (((void *)0)), (_U_UINT)32, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((sizeof(double))), (_U_SINT)((cb->sizeOfType)), (((void *)0)), (_U_UINT)33, UNITY_DISPLAY_STYLE_INT);

 circularBufferDel(cb);



}



void test_circularBufferAddInt_should_add_1_integer(void)

{

 CircularBuffer *cb = circularBufferNew(10, sizeof(int));



 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((cb->size)), (((void *)0)), (_U_UINT)42, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((10)), (_U_SINT)((cb->length)), (((void *)0)), (_U_UINT)43, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)(((int*)cb->head)), (_U_SINT)((&((int *)cb->buffer)[1])), (((void *)0)), (_U_UINT)44, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)(((int*)cb->tail)), (_U_SINT)((&((int *)cb->buffer)[1])), (((void *)0)), (_U_UINT)45, UNITY_DISPLAY_STYLE_INT);

 circularBufferDel(cb);

}
