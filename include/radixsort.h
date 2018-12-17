#include <cstdint>
#include <iostream>

namespace edu { namespace vcccd { namespace vc { namespace csv15 {

    template<typename T>
    void radixsort(T array[], size_t arraySize) {

        size_t max = 0;
        size_t maxDigits = 0;

        for(size_t i = 1; i < arraySize; i++){
            if (array[i] > max)
                max = array[i];             //Find max value in the array
        }
        while (max != 0){
            maxDigits++;         //Find number of digits for max value
            max = max/10;
        }

        /**for(size_t i = 0; i < maxDigits; i++){
            for(){}

            if (maxDigits )
        }*/


    }
}}}}