#include <string.h>

#include "../../../utils/print.h"
#include "adaptee.h"

static void adaptee_sepcific_request(struct adaptee *adaptee)
{
    PRINT("function call from adaptee\n");
}

void adaptee_init(struct adaptee *adaptee)
{
    memset(adaptee, 0, sizeof(struct adaptee));
    adaptee->adaptee_sepcific_request = adaptee_sepcific_request;
}
