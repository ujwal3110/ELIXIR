#include "../include/elixir/tensor.h"
#include "../include/elixir/tensor_ops.h"

int main()
{
    Tensor a =
        tensor_create(1, 1, 2, 2);

    Tensor b =
        tensor_create(1, 1, 2, 2);

    Tensor out =
        tensor_create(1, 1, 2, 2);

    /*
        Fill tensor A
    */

    tensor_set(&a, 0, 0, 0, 0, 1.0f);
    tensor_set(&a, 0, 0, 0, 1, 2.0f);
    tensor_set(&a, 0, 0, 1, 0, 3.0f);
    tensor_set(&a, 0, 0, 1, 1, 4.0f);

    /*
        Fill tensor B
    */

    tensor_set(&b, 0, 0, 0, 0, 10.0f);
    tensor_set(&b, 0, 0, 0, 1, 20.0f);
    tensor_set(&b, 0, 0, 1, 0, 30.0f);
    tensor_set(&b, 0, 0, 1, 1, 40.0f);

    /*
        ADD
    */

    printf("Tensor Add\n");

    tensor_add(&a, &b, &out);

    tensor_print(&out);

    /*
        SUB
    */

    printf("Tensor Sub\n");

    tensor_sub(&b, &a, &out);

    tensor_print(&out);

    /*
        MUL
    */

    printf("Tensor Mul\n");

    tensor_mul(&a, &b, &out);

    tensor_print(&out);

    /*
        Scalar Add
    */

    printf("Tensor Scalar Add\n");

    tensor_scalar_add(
        &a,
        5.0f,
        &out
    );

    tensor_print(&out);

    /*
        Scalar Mul
    */

    printf("Tensor Scalar Mul\n");

    tensor_scalar_mul(
        &a,
        2.0f,
        &out
    );

    tensor_print(&out);

    tensor_free(&a);
    tensor_free(&b);
    tensor_free(&out);

    return 0;
}