// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.

#include "poseidon/seal/memorymanager.h"

using namespace std;

namespace poseidon
{
#ifndef _M_CEE
    mutex MemoryManager::switch_mutex_;
#else
#pragma message("WARNING: MemoryManager compiled thread-unsafe and MMProfGuard disabled to support /clr")
#endif
} // namespace poseidon
