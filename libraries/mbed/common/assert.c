/* mbed Microcontroller Library
 * Copyright (c) 2006-2013 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <__cross_studio_io.h>
#include "mbed_assert.h"
#include "device.h"

#if DEVICE_STDIO_MESSAGES
#include <stdio.h>
#endif

#include <stdlib.h>
#include "mbed_interface.h"

void mbed_assert_internal(const char *expr, const char *file, int line)
{
#if DEVICE_STDIO_MESSAGES
    debug_printf("mbed assertation failed: %s, file: %s, line %d \n", expr, file, line);
#endif
    mbed_die();
}
