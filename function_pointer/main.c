#include <stdio.h>

typedef void(*voidReturnType)(const char *);
typedef int(*intReturnType)(const char *);

void voidReturn(const char *message) {
    printf("voidReturn: %s\n", message);
}

int intReturn(const char *message) {
    printf("intReturn: %s\n", message);
    return 1;
}

void voidReturnNoParam() {
    printf("voidReturnNoParam:\n");
}

void voidReturnNoParamAdapter(const char *message) {
  voidReturnNoParam();
}


void callFunctions(const voidReturnType *funcs, size_t size) {
    size_t current = 0;
    while (current < size) {
        if ( current == 1 ) {
          ((intReturnType)funcs[current])("hello world"); // Special-case cast
        } else {
          funcs[current]("hello world");
        }
        current++;
    }
}

int main() {
    voidReturnType functionList[3];
    functionList[0] = voidReturn;
    functionList[1] = (voidReturnType)intReturn;
    functionList[2] = voidReturnNoParamAdapter;

    callFunctions(functionList, 3);
}
