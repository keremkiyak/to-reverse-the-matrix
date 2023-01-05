//
//  main.c
//  calisma15aralik
//
//  Created by kerem on 15.12.2022.
//

#include <stdio.h>

int reverse();
int main() {
    int matris [10];
    for(int i=0;i<10;i++)
    {
        matris[i]=i;
    }
    reverse(matris);
    for(int i=0;i<10;i++)
    {
        printf("%d-",matris[i]);
    }
   
    return 0;
}
int reverse(int matris[10])
{
    for(int i=0;i<5;i++)
    {
        int temp = matris[9-i];
        matris[9-i] = matris[i];
        matris[i] = temp;
    }
    return matris;
}
