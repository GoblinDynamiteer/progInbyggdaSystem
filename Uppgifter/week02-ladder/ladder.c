
/*
Ladder
You are attempting to climb up the roof to fix some leaks,
and have to go buy a ladder. The ladder needs to

reach to the top of the wall, which is h centimeters high,
and in order to be steady enough for you to climb it,
the ladder can be at an angle of at most v degrees from
the ground. How long does the ladder have to be?

Input
The input consists of a single line containing two
integers h and v, with meanings as described above. You
may assume that 1≤h≤10000 and that 1≤v≤89.

Output
Write a single line containing the minimum possible
length of the ladder in centimeters, rounded up to the
nearest integer.

Sample Input    Sample Output 1
500 70          533
Sample Input 2  Sample Output 2
1000 10         5759


Johan Kämpe
Mjukvaruutvecklare Inbyggda System

Kurs
Programmering av inbyggda system

*/

#include <stdio.h>
#include <math.h> //M_PI, sin()

int main(int argc, char const *argv[]) {
    int v, h, ladderHeight;
    printf("Input h and v:\n");
    scanf("%i %i", &h, &v);
    ladderHeight = (int)(h / sin((v) * M_PI/180.0) + 1.0);
    printf("Needed ladder height: %i", ladderHeight);
    return 0;
}
