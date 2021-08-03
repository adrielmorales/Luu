#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include "src\functions.h"

int main() {
	FILE* fp;
	int fileSize = 0;
	char directory[300];

	printf("Luu. MIT LICENSE.\n");

#ifdef _WIN32
	Sleep(2000);
#else
	sleep(2);
#endif

	printf("Type in the directory of where your drive is.\n");
	fgets(directory, 300, stdin);
	directory[strlen(directory) - 1] = 0;
	int flag = 0;
	for (int i = 0; i < 300; i++) {
		flag = flag + 1;
		if (directory[i] == NULL) {
			directory[i++] = 't';
			directory[i++] = 'e';
			directory[i++] = 's';
			directory[i++] = 't';
			directory[i++] = '.';
			directory[i++] = 't';
			directory[i++] = 'x';
			directory[i++] = 't';
			directory[i++] = NULL;
			printf("%s", directory);
			break;
		}
	}
	fp = fopen(directory, "a+");
	printf("WARNING! Make sure to format the Drive to get the best size.\n Writing will start in 3\n");
	for (int i = 2; i > 0; i--) {
	#ifdef _WIN32
		Sleep(1000);
	#else
		sleep(1);
	#endif
		printf("%d\n", i);
	}
	printf("ON!\n The program will terminate when done.\n");

	fileSize = authenticityChecker(fp);

	printf("The file size is %d Bytes.\n", fileSize);

	fclose(fp);
	return 0;
}