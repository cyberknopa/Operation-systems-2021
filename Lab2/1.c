#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <memoryapi.h> 
#include "windows.h" 
#define SIZE 4096 
int main(void) { 
while (1) { 
void *pa = VirtualAlloc(NULL, SIZE, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE); memset(pa, 0, SIZE); 
} 
return 0; 
} 
