int test(char *str) {
	switch(str[0] & 0x7) {
	//            ^-- this bit wise and causes clang to emit
	//                a i3 (3 bit integer) type
	case 0:
		return 23;
	case 1:
		return 42;
	default:
		return 0;
	}
}
