#ifndef ELIXIR_TENSOR_OPS_H
#define ELIXIR_TENSOR_OPS_H

#include "tensor.h"

/*
    Element-wise tensor addition

    out = a + b
*/
void tensor_add(
    Tensor* a,
    Tensor* b,
    Tensor* out
);

/*
    Element-wise tensor subtraction

    out = a - b
*/
void tensor_sub(
    Tensor* a,
    Tensor* b,
    Tensor* out
);

/*
    Element-wise tensor multiplication

    out = a * b
*/
void tensor_mul(
    Tensor* a,
    Tensor* b,
    Tensor* out
);

/*
    Scalar addition

    out = a + scalar
*/
void tensor_scalar_add(
    Tensor* a,
    float scalar,
    Tensor* out
);

/*
    Scalar multiplication

    out = a * scalar
*/
void tensor_scalar_mul(
    Tensor* a,
    float scalar,
    Tensor* out
);

#endif