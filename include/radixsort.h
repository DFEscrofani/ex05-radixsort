#include <cstdint>

namespace edu { namespace vcccd { namespace vc { namespace csv15 {

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