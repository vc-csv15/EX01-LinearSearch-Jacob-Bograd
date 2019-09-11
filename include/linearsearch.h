//
// Created by bothe on 9/11/2019.
//

#ifndef EX01_LINEARSEARCH_JACOB_BOGRAD_LINEARSEARCH_H
#define EX01_LINEARSEARCH_JACOB_BOGRAD_LINEARSEARCH_H
#include <cstdint>

namespace edu { namespace vcccd { namespace vc { namespace csv15 {

                template <class T>
                int64_t find(const T& value, T array[], size_t size) {
                    // put your code here
                    if (array == nullptr) return -1;
                    for (size_t i = 0; i < size; i++) {
                        if (value == array[i]) return i;
                    }
                    return -1;
                }

            }}}}
#endif EX01_LINEARSEARCH_JACOB_BOGRAD_LINEARSEARCH_H