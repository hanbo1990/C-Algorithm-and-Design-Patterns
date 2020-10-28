#ifndef ADAPTEE_H
#define ADAPTEE_H

#ifdef __cplusplus
extern "C" {
#endif

struct adaptee {
    void (*adaptee_sepcific_request)(struct adaptee *self);
};

void adaptee_init(struct adaptee *self);

#ifdef __cplusplus
}
#endif

#endif /* ADAPTEE_H */
