// In-line Intel Assembly Language Program
// by Your Name B00...


#include "stdafx.h"
#include <iostream>

using namespace std;


int main(int argc, char* argv[])
{
// Part A - counts the number of zeros in my ID

// Expected results
// Part A - N zeros in my ID

//  your properly formatted assembly language data here
unsigned char MyIDA[9] = {0xBB,0x00,0x00,0x11,0x22,0x33,0x44,0x55,0x66};
unsigned char zeros = 0;

     __asm {
//  your syntactically correct assembly language code here
//  column alignment markers below (to guide you)
//      |       |               |


        nop                     ;nop for breakpoint
    }

// Part B - counts the number even and odd numbers in my ID

// Expected results
// Part B - N even N odd in my ID Note: zero is even

//  your properly formatted assembly language data here
unsigned char MyIDB[9] = {0xBB,0x00,0x00,0x22,0x55,0x55,0x00, 0x88,0x33};
unsigned char two = 2; //Divisor to help determine if a value is even or odd
unsigned char evens = 0;
unsigned char odds = 0;

     __asm {

//  your syntactically correct assembly language code here
//  column alignment markers below (to guide you)
//      |       |               |


        nop                     ;nop for breakpoint
      }

// Part C - counts the number positive and negative numbers in my ID

// Expected results
// Part C - N positive N negative in my ID Note: zero is neither positive nor negative


//  your properly formatted assembly language data here
unsigned char MyIDC[9] = {0xBB,0x00,0x00,0x11,0x22,0x33,0x44,0x55,0x66};
unsigned char poss = 0; 
unsigned char negs = 0;
unsigned char rem = 0;

    __asm {
//  your syntactically correct assembly language code here
//  column alignment markers below (to guide you)
//      |       |               |
        mov     eax,0           ;clear eax reg
        mov     ebx,0           ;clear ebx reg
        mov     ecx,0           ;clear ecx reg
        mov     edx,0           ;clear edx reg
        mov     esi,0           ;clear esi reg
       
        mov    cx,0x9           ;repeat 9 times
partA:  mov    ax,byte ptr MyIDC[esi]    ;move next number to ax
        div    2h               ;divide by 2 to see if there is a remainder.
        cmp, ah,0h               ;check for even number  
        jnz    isodd         ;jump in rhe condition that the number us odd
        add     bl,0x1          ;tally up zeroes      

isodd:inc     esi             ;move to the next number
        loop    partA           ;loop if cx > zero
        mov     zeros, bl       ;store counter
        nop                     ;nop for breakpoint
    }

    return(0);
}
