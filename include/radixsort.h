#include <cstdint>
#include <iostream>

namespace edu { namespace vcccd { namespace vc { namespace csv15 {

    int getMax (size_t array[], size_t n){
        int max = array[0];
        for(int i = 1; i < n; i++){
            if (array[i] > max)
                max = array[i];
        }
    }

    template<class T>
    void radixsort(T array[], size_t size) {
        maxLength(array, arraySize) {
            maxDigits = 0;
            for (i = 0; i < arraySize; i++) {
                digitCount = RadixGetLength(array[i]);
                if (digitCount > maxDigits) {
                    maxDigits = digitCount;
                }
            }
            return maxDigits;
        }
    }
}}}}