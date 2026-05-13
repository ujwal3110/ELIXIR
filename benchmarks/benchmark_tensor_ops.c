#include <time.h>

#include "../include/elixir/tensor.h"
#include "../include/elixir/tensor_ops.h"

#define SIZE 1000000

int main()
{
    Tensor a =
        tensor_create(1,1,1,SIZE);

    Tensor b =
        tensor_create(1,1,1,SIZE);

    Tensor out =
        tensor_create(1,1,1,SIZE);

    tensor_fill(&a, 1.0f);
    tensor_fill(&b, 2.0f);

    clock_t start =
        clock();

    tensor_add(&a, &b, &out);

    clock_t end =
        clock();

    double time_taken =
        (double)(end - start)
        / CLOCKS_PER_SEC;

    printf(
        "Tensor Add Time: %f seconds\n",
        time_taken
    );

    tensor_free(&a);
    tensor_free(&b);
    tensor_free(&out);

    return 0;
}