//369.c
//Written by: The Lonely Programmer ©2024

#include <stdio.h>
#include <stdlib.h>

int getSum(int n) {
    int sum = 0;
    while (n != 0) {
        sum = sum + (n % 10);
        n = n / 10;
    }
    return sum;
}

int main() {
    int n = 1;
    int cu;
    char userinput[10];
    printf("                                                                                              \n");
    printf("                                                                                              \n");
    printf("                                                                                              \n");
    printf("--------------------------------------------------------------------------------------------- \n");
    printf("                                                                                              \n");
    printf("                    Welcome to the Univerisal 369 Matrix (u369m)                              \n");
    printf("        This program will find the u369m within an infinite amount of numbers                 \n");
    printf("                                                                                              \n");
    printf("                       Written by: The Lonely Programmer ©2024                                \n");
    printf("                            ASCII Rabbit by: Linda Ball                                       \n");
    printf("                                                                                              \n");
    printf(" three69 scans through the set of numbers starting from 0 adding each digit in each           \n");
    printf(" number within the set of numbers to each other. We call these u369m variables.               \n");
    printf(" u369m variables are found only through addition to break down to ints 3, 6, 9.               \n");
    printf(" Each u369m variable is found every 3 beats. Every known object in the universe               \n");
    printf(" consists of the u369m. u369m is an irrational sequence and is attached to both               \n");
    printf(" Space and Time. u369m can be found in within the 12hr-clock and the 24hr-clock.              \n");
    printf(" The u369m sequence is also attached to 9s stairway to heaven with the number line.           \n");
    printf("                                                                                              \n");
    printf("             369m variable i.e. 3,6,9,1+2=(3), 1+5=(6), 1+8=(9) ...                           \n");
    printf("          u369m sequence = 3,6,9,12,15,18,21,24,27,30,33,36,39,42,45 ...                      \n");
    printf("                                                                                              \n");
    printf("                  This algorithm is a Polynomial Cubic Equation                               \n");
    printf("                                                                                              \n");
    printf("   It will glitch out on certain systems when the input is greater than 7 digits              \n");
    printf("                                                                                              \n");
    printf(" Follow the white rabbit   //   |----------------------------------------------------------|  \n");
    printf("                          ('>   | To thank the programmer one can with a donation sent via |  \n");
    printf("                          /rr   | crypto or BPAY.                                          |  \n");
    printf("                         *\\))_  | Bitcoin adddress   : 176YjSfsQviREFaRjQto3NHB2s7SfAut18  |  \n");
    printf("                                | BPAY - Biller code : 261792                              |  \n");
    printf("                                |        Customer ref: 1007252248                          |  \n");
    printf("                                |----------------------------------------------------------|  \n");
    printf("                                                                                              \n");
    printf(" You live in a Quantum Thermal Dynamic System. Each string of data within the universe        \n");
    printf(" contains the u369m sequence. Using numerical conversion systems such as Binary, Hex,         \n");
    printf(" Base 1-10, and so on, we can convert and calculate everyday objects into in base 10.         \n");
    printf(" By using Mathematical concepts such as theorems, conjectures, and anything else one is       \n");
    printf(" able to apply the u369m within the mathematics of the object while constructing.             \n");
    printf(" Building physical objects takes metaphysical Mathematics such as Particle Mathematics.       \n");
    printf(" One can use this program to enter any number one wants as to find the u369m sequence         \n");
    printf(" Each beat allows for integration within design patterns.                                     \n");
    printf(" i.e. When measuring in millimetres for a design job this program allows for instant          \n");
    printf(" physical and metaphysical connection of u369m variables.                                     \n");
    printf("                                                                                              \n");
    printf(" The Poincare Conjecture is proof of how a 1-Dimensional Object homeomorphs into a            \n");
    printf(" 3-Dimensional Object.                                                                        \n");
    printf("                                                                                              \n");
    printf(" The Human Eye sees between 60-90Hz.                                                          \n");
    printf(" The Human Eye's frame rate is between 30-60fps.                                              \n");
    printf("                                                                                              \n");
    printf(" ___|\\_______|________|_______________________O__________@____________                       \n");
    printf(" ___|/_______|________|_|___|__________|__@__|_____@__|_|____O._______||                      \n");
    printf(" __/|____4___|__O_____|_|___|__O.______|_|@__|____|___|_|___|O.______o||                      \n");
    printf(" _(_/^\\__4__@|_|_____@__|___|_|________|_|@__|____|___|_|___|________o||                     \n");
    printf(" __\\|/'_____@__|________|__@|_|________|_|________|___|_____|_________||                     \n");
    printf("    d          |           @ |          |                                                     \n");
    printf("                                                                                              \n");
    printf("--------------------------------------------------------------------------------------------- \n");
    printf("                                                                                              \n");
    printf("                                                                                              \n");
    printf("                                                                                              \n");
    printf("Just Enter A Number: ");
    fgets(userinput, 10, stdin);
    cu = atoi(userinput);
    printf("\n");
    while (n < cu) {
        int j = n * 3;
        int m = getSum(j);
        int p = getSum(m);
        printf("%d ", getSum(p));
        n++;
    }
    printf("\n");
    return 0;
}