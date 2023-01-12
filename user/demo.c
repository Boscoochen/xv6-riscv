#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
    printf("%d\n",sum_to(atoi(argv[1])));
    return 0;
}