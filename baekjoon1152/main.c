//
//  main.c
//  baekjoon1152
//
//  Created by 이승섭 on 2018. 11. 6..
//  Copyright © 2018년 이승섭. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int i, count = 0;
    char arr[1000001];
    
    fgets(arr, sizeof(arr), stdin);
    
    for(i = 0; i < strlen(arr); i++)
    {
        if (arr[i - 1] == ' ' && arr[i] != ' ' && arr[i] != '\n')
        {
            count++;
            //printf("count++ at : %d %d\n",arr[i-1], arr[i]);
        }
    }
    
    if (arr[0] != ' ')
        count++;
    
    printf("%d \n", count);
    return 0;
}


//    if (arr[strlen(arr) - 2] == ' ') count--;
