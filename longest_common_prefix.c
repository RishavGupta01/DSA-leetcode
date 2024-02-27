#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        return "";
    }

    int minLen = strlen(strs[0]);
    for (int i = 1; i < strsSize; i++) {
        int len = strlen(strs[i]);
        if (len < minLen) {
            minLen = len;
        }
    }
    char* pre = (char*)malloc((minLen + 1) * sizeof(char));
    strncpy(pre, strs[0], minLen);
    pre[minLen] = '\0';

    for (int i = 1; i < strsSize; i++) {
        for (int j = 0; j < minLen; j++) {
            if (pre[j] != strs[i][j]) {
                pre[j] = '\0'; 
                minLen = j;
                break;
            }
        }
    }

    return pre;
}
int main() {
    char* input_strings[] = {"flower", "flow", "flight"};
    int num_strings = sizeof(input_strings) / sizeof(input_strings[0]);
    char* result = longestCommonPrefix(input_strings, num_strings);
    printf("Longest common prefix: %s\n", result);
    free(result);
    return 0;
}
