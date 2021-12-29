//
//  main.c
//  Io
//
//  Created by Alex on 6/9/21.
//  Copyright © 2021 Alex. All rights reserved.
//

#include <stdio.h>
#include "pointers.h"

int main(int argc, const char * argv[]) {
    int a, b;
    int c;
    float d;
    
    a = 10;
    b = 20;
    
    c = a + b;
    d = 19;
    printf("value of c: %d\n", c);
    printf("value of d: %f\n", d);
    test();
    return 0;
}
