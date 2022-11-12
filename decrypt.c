#include <stdio.h>
#include <stdint.h>

#define ENC "project.bin"
#define DEC "project.zip"

#define PASSWORD password

#define PAUSE 1

#define ISENC 0

int main() {
	#if ISENC
	int ret = encrypt();
	#else
	int ret = decrypt();
	#endif
	
	#if PAUSE
	printf("按任意键退出。\n");
	getchar();
	#endif
	
	return ret;
}

int encrypt() {
	FILE *in =  fopen(DEC, "rb");
	if (!in) {
		printf("打开文件失败!\n");
		perror("fopen");
		return -1;
	}
	
	FILE *out = fopen(ENC, "wb");
	if (!out) {
		printf("创建文件失败!\n");
		perror("fopen");
		fclose(in);
		return -1;
	}
	
	#define BUFFERSIZE 256
	
	uint32_t buffer[BUFFERSIZE];
	int read;
	while (read = fread(buffer, 4, BUFFERSIZE, in)) {
		for (int i = 0; i < BUFFERSIZE; i++) {
			buffer[i] ^= PASSWORD;
		}
		fwrite(buffer, 4, read, out);
	}
	
	fclose(in);
	fclose(out);
	
	return 0;
}

int decrypt() {
	FILE *in =  fopen(ENC, "rb");
	if (!in) {
		printf("打开文件失败!\n");
		perror("fopen");
		return -1;
	}
	
	FILE *out = fopen(DEC, "wb");
	if (!out) {
		printf("创建文件失败!\n");
		perror("fopen");
		fclose(in);
		return -1;
	}
	
	#define BUFFERSIZE 256
		
	uint32_t buffer[BUFFERSIZE];
	int read;
	while (read = fread(buffer, 4, BUFFERSIZE, in)) {
		for (int i = 0; i < BUFFERSIZE; i++) {
			buffer[i] ^= PASSWORD;
		}
		fwrite(buffer, 4, read, out);
	}
		
	fclose(in);
	fclose(out);
		
	return 0;
}
