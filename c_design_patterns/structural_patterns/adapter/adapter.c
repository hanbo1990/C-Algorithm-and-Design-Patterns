#include <string.h>

#include "../../../utils/print.h"
#include "adapter.h"

static void adapter_request(struct adapter *adapter)
{
    PRINT("Adapter can do something here\n");
    adapter->adaptee->adaptee_sepcific_request(adapter->adaptee);
}

void adapter_init(struct adapter *adapter, struct adaptee *adaptee)
{
    memset(adapter, 0, sizeof(struct adapter));
    adapter->adaptee = adaptee;
    adapter->adapter_request = adapter_request;
}
