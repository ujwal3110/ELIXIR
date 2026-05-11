#include "../../include/elixir/tensor.h"

Tensor tensor_create(int n, int c, int h, int w)
{
    Tensor t;

    t.n = n;
    t.c = c;
    t.h = h;
    t.w = w;

    int total = n * c * h * w;

    t.data = (float*)malloc(sizeof(float) * total);

    if (t.data == NULL)
    {
        printf("Tensor allocation failed\n");
        exit(1);
    }

    return t;
}

void tensor_free(Tensor* t)
{
    if (t->data != NULL)
    {
        free(t->data);
        t->data = NULL;
    }
}

void tensor_fill(Tensor* t, float value)
{
    int total =
        t->n *
        t->c *
        t->h *
        t->w;

    for (int i = 0; i < total; i++)
    {
        t->data[i] = value;
    }
}

int tensor_index(
    Tensor* t,
    int n,
    int c,
    int h,
    int w
)
{
    return
        n * (t->c * t->h * t->w) +
        c * (t->h * t->w) +
        h * (t->w) +
        w;
}

void tensor_set(
    Tensor* t,
    int n,
    int c,
    int h,
    int w,
    float value
)
{
    int idx =
        tensor_index(
            t,
            n,
            c,
            h,
            w
        );

    t->data[idx] = value;
}

float tensor_get(
    Tensor* t,
    int n,
    int c,
    int h,
    int w
)
{
    int idx =
        tensor_index(
            t,
            n,
            c,
            h,
            w
        );

    return t->data[idx];
}

void tensor_print(Tensor* t)
{
    for (int n = 0; n < t->n; n++)
    {
        for (int c = 0; c < t->c; c++)
        {
            printf(
                "N=%d C=%d\n",
                n,
                c
            );

            for (int h = 0; h < t->h; h++)
            {
                for (int w = 0; w < t->w; w++)
                {
                    printf(
                        "%.2f ",
                        tensor_get(
                            t,
                            n,
                            c,
                            h,
                            w
                        )
                    );
                }

                printf("\n");
            }

            printf("\n");
        }
    }
}