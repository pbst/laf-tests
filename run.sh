#!/bin/bash

set -eu

for t in test_*.c; do
	echo
	echo "==== $t ===="

	LAF_SPLIT_SWITCHES=1 LAF_TRANSFORM_COMPARES=1 LAF_SPLIT_COMPARES=1 AFL_HARDEN=1 afl-clang-fast -c "$t" -o "$t.o"

	rm -fv "$t.o"
done
