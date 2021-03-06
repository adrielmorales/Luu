#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include "functions.h"

int authenticityChecker(FILE* fp) {
	int sizeCUR = 0;
	int sizeEND = 0;
	while (1) {
		fputs("0", fp);
		fputs("0", fp);
		fseek(fp, 0L, SEEK_END);
			sizeEND = ftell(fp);
			if (sizeEND == sizeCUR) {
				break;
			}
		sizeCUR = ftell(fp);
	}
	return ftell(fp);
}
