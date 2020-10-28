#include "../../../utils/print.h"

#include "adaptee.h"
#include "adapter.h"

int main(void)
{
    struct adapter adapter;
    struct adaptee adaptee;

    PRINT("main\n");

    adaptee_init(&adaptee);
    adapter_init(&adapter, &adaptee);

    adapter.adapter_request(&adapter);

    return 0;
}