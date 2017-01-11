/* Invalid_Code.h - Uses 1/8th the memory as the char hash table
   by Mike Slegeir for Mupen64-GC
 */

#ifndef INVALID_CODE_H
#define INVALID_CODE_H
 
////unsigned long invalid_code_get(unsigned long block_num, int val);
// Void inline is the original
void invalid_code_set(int block_num, int value);
////unsigned long invalid_code_set(unsigned long block_num, int val, int value);

#endif
