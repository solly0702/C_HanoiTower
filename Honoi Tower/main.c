//
//  main.c
//  Honoi Tower
//
//  Created by Han Sol Lee on 9/13/16.
//  Copyright © 2016 Solly. All rights reserved.
//

// objective: move n*circles from A to C    => hanoiTowerMove(num, A, B, C)
// 1. move n-1 circles from A to B          => hanoiTowerMove(num-1, A, C, B)
// 2. move biggerst circle A to C           => printf(...)
// 3. move n-1 circles from B to C          => hanoiTowerMove(num-1, B, A, C)

#include <stdio.h>

void hanoiTowerMove(int num, char from, char by, char to);

int main(int argc, const char * argv[]) {
    // insert code here...
    hanoiTowerMove(3, 'A', 'B', 'C');
    return 0;
}

void hanoiTowerMove(int num, char from, char by, char to) {
    if(num == 1) {
        printf("Moved Circle 1 from %c to %c \n", from, to);
    } else {
        hanoiTowerMove(num-1, from, to, by);
        printf("Moved Circle %d from %c to %c \n", num, from, to);
        hanoiTowerMove(num-1, by, from, to);
    }
}
