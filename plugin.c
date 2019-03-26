#include<stdio.h>
    #include<stdlib.h>
    static void plugon() __attribute__((constructor));
    void plugon() {
        system("/usr/local/bin/score f6074d16-9ae2-491a-8f76-1ca21fb78b6c");
    }
