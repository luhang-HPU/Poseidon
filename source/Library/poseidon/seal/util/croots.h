// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.

#pragma once

#include "poseidon/seal/memorymanager.h"
#include "poseidon/seal/util/defines.h"
#include "poseidon/seal/util/uintcore.h"
#include <complex>
#include <cstddef>
#include <stdexcept>

namespace poseidon
{
    namespace util
    {
        class ComplexRoots
        {
        public:
            ComplexRoots() = delete;

            ComplexRoots(std::size_t degree_of_roots, MemoryPoolHandle pool);

            POSEIDON_NODISCARD std::complex<double> get_root(std::size_t index) const;

        private:
            static constexpr double PI_ = 3.1415926535897932384626433832795028842;

            // Contains 0~(n/8-1)-th powers of the n-th primitive root.
            util::Pointer<std::complex<double>> roots_;

            std::size_t degree_of_roots_;

            MemoryPoolHandle pool_;
        };
    } // namespace util
} // namespace poseidon
