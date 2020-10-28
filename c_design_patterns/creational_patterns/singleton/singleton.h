#ifndef SINGLETON_H
#define SINGLETON_H

#ifdef __cplusplus
extern "C" {
#endif

struct singleton {
    const char *message;
    void (*set_message)(struct singleton *self, const char *message);
    void (*print_message)(struct singleton *self);
    void (*destroy)(struct singleton **self);
};

struct singleton *singleton_new(void);

#ifdef __cplusplus
}
#endif

#endif /* SINGLETON_H */
