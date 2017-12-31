

#include <osapi.h>

/* Compiler was generating calls to memcpy for structure copies.
 * This was causing the standard library with memcpy to be linked
 * and using up too much instruction ram. So define this here. */
void *memcpy(void *dst, const void *src, size_t n)
{
    return os_memcpy(dst, src, n);
}
