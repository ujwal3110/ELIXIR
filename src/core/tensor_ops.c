#include "../../include/elixir/tensor_ops.h"

static int tensor_total_elements(Tensor* t)
{
    return
        t->n *
        t->c *
        t->h *
        t->w;
}

void tensor_add(
    Tensor* a,
    Tensor* b,
    Tensor* out
)
{
    int total =
        tensor_total_elements(a);

    for (int i = 0; i < total; i++)
    {
        out->data[i] =
            a->data[i] +
            b->data[i];
    }
}

void tensor_sub(
    Tensor* a,
    Tensor* b,
    Tensor* out
)
{
    int total =
        tensor_total_elements(a);

    for (int i = 0; i < total; i++)
    {
        out->data[i] =
            a->data[i] -
            b->data[i];
    }
}

void tensor_mul(
    Tensor* a,
    Tensor* b,
    Tensor* out
)
{
    int total =
        tensor_total_elements(a);

    for (int i = 0; i < total; i++)
    {
        out->data[i] =
            a->data[i] *
            b->data[i];
    }
}

void tensor_scalar_add(
    Tensor* a,
    float scalar,
    Tensor* out
)
{
    int total =
        tensor_total_elements(a);

    for (int i = 0; i < total; i++)
    {
        out->data[i] =
            a->data[i] + scalar;
    }
}

void tensor_scalar_mul(
    Tensor* a,
    float scalar,
    Tensor* out
)
{
    int total =
        tensor_total_elements(a);

    for (int i = 0; i < total; i++)
    {
        out->data[i] =
            a->data[i] * scalar;
    }
}