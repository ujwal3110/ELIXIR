#include "../include/elixir/tensor.h"

int main()
{
    Tensor t =
        tensor_create(
            1,
            1,
            3,
            3
        );

    tensor_fill(&t, 0.0f);

    tensor_set(&t, 0, 0, 0, 0, 1.0f);
    tensor_set(&t, 0, 0, 0, 1, 2.0f);
    tensor_set(&t, 0, 0, 0, 2, 3.0f);

    tensor_set(&t, 0, 0, 1, 0, 4.0f);
    tensor_set(&t, 0, 0, 1, 1, 5.0f);
    tensor_set(&t, 0, 0, 1, 2, 6.0f);

    tensor_set(&t, 0, 0, 2, 0, 7.0f);
    tensor_set(&t, 0, 0, 2, 1, 8.0f);
    tensor_set(&t, 0, 0, 2, 2, 9.0f);

    tensor_print(&t);

    tensor_free(&t);

    return 0;
}