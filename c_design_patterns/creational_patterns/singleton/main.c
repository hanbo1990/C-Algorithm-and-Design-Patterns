#include "../../../utils/print.h"

#include "singleton.h"

int main(void)
{
    struct singleton *singleton;
    static const char *msg = "haha";

    singleton = singleton_new();

    singleton->print_message(singleton);
    singleton->set_message(singleton, msg);
    singleton->print_message(singleton);

    singleton = singleton_new();
    singleton->print_message(singleton);

    singleton->destroy(&singleton);

    PRINT("singleton ptr is %p\n", singleton);

    singleton = singleton_new();
    singleton->print_message(singleton);

    return 0;
}