#ifndef ELIXIR_TENSOR_H
#define ELIXIR_TENSOR_H

#include "common.h"

typedef struct
{
    float* data;

    int n;
    int c;
    int h;
    int w;

} Tensor;

/*
    Create tensor
*/
Tensor tensor_create(int n, int c, int h, int w);

/*
    Free tensor memory
*/
void tensor_free(Tensor* t);

/*
    Fill tensor with constant value
*/
void tensor_fill(Tensor* t, float value);

/*
    Print tensor contents
*/
void tensor_print(Tensor* t);

/*
    Get flat index
*/
int tensor_index(
    Tensor* t,
    int n,
    int c,
    int h,
    int w
);

/*
    Set tensor value
*/
void tensor_set(
    Tensor* t,
    int n,
    int c,
    int h,
    int w,
    float value
);

/*
    Get tensor value
*/
float tensor_get(
    Tensor* t,
    int n,
    int c,
    int h,
    int w
);

#endif