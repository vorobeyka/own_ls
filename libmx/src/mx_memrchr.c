#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
	unsigned char *s1 = (unsigned char*)s;
	while (*s1) s1++;
	for (; n--;) {
		if (*s1 == c) return s1;
		s1--;
	}
	return NULL;
}
