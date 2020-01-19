ghc Hi.hs -dynamic
cc -fPIC -shared -o libpreload.so preload.c
LD_PRELOAD=$(pwd)/libpreload.so ./Hi
