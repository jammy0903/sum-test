#include "add.h"
#include <stdio.h>
#include <stdint.h>

uint32_t readConvert(char* filename){  //파일이름은 배열이기 때문에 포인터 사용해야함
    FILE* file = fopen(filename, "rb");
    if (file == NULL) { //파일 열기 실패!
        return 0;
    }
    uint32_t filenum;
    size_t result = fread(&filenum, sizeof(filenum), 1, file);

    while(result){
       result = ((result & 0xFF000000) >> 24) |
          ((result & 0x00FF0000) >> 8) |
          ((result & 0x0000FF00) << 8) |
          ((result & 0x000000FF) << 24);
          break;
    }

    fclose(file);
    return result;

} 

uint32_t Adding(uint32_t num1, uint32_t num2){
    uint32_t sum = num1 + num2;
    printf("%u + %u = %u ",&num1,&num2,&sum);
    return sum;
} // 두 숫자 더하기 


