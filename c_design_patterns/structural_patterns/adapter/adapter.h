#ifndef ADAPTER_H
#define ADAPTER_H

#ifdef __cplusplus
extern "C" {
#endif

#include "adaptee.h"

struct adapter {
    struct adaptee *adaptee;
    void (*adapter_request)(struct adapter *self);
};

void adapter_init(struct adapter *adapter, struct adaptee *adaptee);

#ifdef __cplusplus
}
#endif

#endif /* ADAPTER_H */
