// $ gcc -fPIC -shared -o libgc.so gc.c
// $ LD_PRELOAD=$(pwd)/libgc.so ghci

#include <stdlib.h>

void GarbageCollect() {
    exit(1);
}

void hs_main() {
    exit(1);
}
void hs_init() {
    exit(1);
}
void hs_init_ghc() {
    exit(1);
}

