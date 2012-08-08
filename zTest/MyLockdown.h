#ifndef __MY_LOCKDOWNSHA1_H__
#define __MY_LOCKDOWNSHA1_H__

typedef struct
{
	int bitlen[2];
	int state[32];
} SHA1_CTX;

void sha1_tweedle(int *ptr_rotator, int bitwise, int bitwise2, int bitwise3, int *ptr_adder, int *ptr_ret);
void sha1_twitter(int *ptr_rotator, int bitwise, int rotator2, int bitwise2, int *ptr_rotator3, int *ptr_ret);

void sha1_init(SHA1_CTX *ctx);
void sha1_update(SHA1_CTX *ctx, char *data, int len);
void sha1_final(SHA1_CTX *ctx, int *hash);

void sha1_transform(int *data, int *state);

BOOL CalculateValueString(unsigned char *str, int len, unsigned char *buffer);
void WordShifter(unsigned short *str1, unsigned short *str2);
int StringCombine(char *str1, int *length, char *str2);

int NumberCompare(int *num1, int *num2);

#endif;