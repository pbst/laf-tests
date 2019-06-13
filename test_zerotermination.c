#include <stdio.h>
#include <string.h>

/*
 * c strings are zero terminated. strcmp/strncmp/memcmp/... work on c strings.
 * we have to be careful to not ignore the last byte.
 */

int test_everythingisfine(char *str) {
	return strncmp(str, "yolo", 4);
}

int test_strcmp(char *str) {
	return strcmp(str, "yolo") | strcmp(str, "yolo\0");
}

int test_strncmp1(char *str) {
	return strncmp(str, "yolo", 5) | strncmp(str, "yolo\0", 5);
}
