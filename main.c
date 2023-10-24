#include <stdio.h>
#include <x86intrin.h>
#include <stdint.h>

#define MFENCE _mm_mfence();
#define LFENCE _mm_lfence();


int main() {
    uint64_t start, end;
    uint32_t ui;
    MFENCE
    start = __rdtscp(&ui);
    LFENCE
    /********
     * Add code to be tested here:
     * START:
     * ********/



    /* END
     * ***************/
    MFENCE
    end = __rdtscp(&ui);
    LFENCE
    printf("%lu ", (end - start));
    return EXIT_SUCCESS;
}
