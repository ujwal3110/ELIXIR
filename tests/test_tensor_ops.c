#include "../include/elixir/tensor.h"
#include "../include/elixir/tensor_ops.h"

int main()
{
    Tensor a =
        tensor_create(1,1,1,4);

    Tensor b =
        tensor_create(1,1,1,4);

    Tensor out =
        tensor_create(1,1,1,4);

    for (int i = 0; i < 4; i++)
    {
        a.data[i] = i;
        b.data[i] = i * 10;
    }

    tensor_add(&a, &b, &out);

    printf("TEST ADD\n");

    tensor_print(&out);

    tensor_free(&a);
    tensor_free(&b);
    tensor_free(&out);

    return 0;
}