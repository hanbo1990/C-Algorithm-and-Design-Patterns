#include <stdlib.h>
#include <string.h>

#include "../../../utils/print.h"
#include "singleton.h"

static struct singleton *singleton_buf = NULL;

static void set_message(struct singleton *self, const char *msg)
{
    PRINT("message changed to %s\n", msg);
    self->message = msg;
}

static void print_message(struct singleton *self)
{
    if (NULL == self->message) {
        PRINT("singleton has no message\n");
    } else {
        PRINT("singleton has message %s\n", self->message);
    }
}

static void destroy(struct singleton **self)
{
    PRINT("singleton destroyed\n");
    // thread safe missing in the file for singletton_buf
    free(singleton_buf);
    singleton_buf = NULL;
    *self = NULL;
}

struct singleton *singleton_new(void)
{
    // below is not thread safe!
    if (NULL == singleton_buf) {
        PRINT("Creating new singleton\n");
        singleton_buf = calloc(1, sizeof(struct singleton));
        singleton_buf->set_message = set_message;
        singleton_buf->print_message = print_message;
        singleton_buf->destroy = destroy;
    } else {
        PRINT("Return existing singleton\n");
    }

    return singleton_buf;
}
