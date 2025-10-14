#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	FILE* fp, * fpout; // 파일 포인터 선언
	char ch1, ch2; // 파일에서 읽을 2개의 문자를 저장할 변수
	char infile[100], outfile[100];
	printf("Input file outputfile: ");
	scanf("%s%s", infile, outfile);

	fp = fopen(infile, "r");
	if (fp == NULL) {
		printf("파일을 열 수 없습니다.\n");
		return 1;
	}
	fpout = fopen(outfile, "w");
	if (fpout == NULL) {
		printf("파일을 열 수 없습니다.\n");
		return 1;
	}

	while ((ch1 = fgetc(fp)) != EOF)
		fputc(ch1, fpout);


	fclose(fp); fclose(fpout);

	return 0;
}