#include <stdio.h>
#include <x86intrin.h>
#include <stdint.h>

#define MFENCE _mm_mfence();
#define LFENCE _mm_lfence();


// see https://www.felixcloutier.com/x86/rdtscp for reference
// https://learn.microsoft.com/de-de/cpp/intrinsics/rdtscp?view=msvc-170
// cycle benchmark template

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
    if (( end - start ) < 0 ) return EXIT_FAILURE;
    return EXIT_SUCCESS;
}
