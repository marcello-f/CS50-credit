#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //declare variables
    long long car_num, div16, div15, div14, div13, div12, div11, div10, div9, div8, div7, div6, div5, div4, div3, div2, div1;

    //get number
    car_num = get_long("Number: ");
    
    //divisors
    div16 = 10000000000000000;
    div15 = 1000000000000000;
    div14 = 100000000000000;
    div13 = 10000000000000;
    div12 = 1000000000000;
    div11 = 100000000000;
    div10 = 10000000000;
    div9 = 1000000000;
    div8 = 100000000;
    div7 = 10000000;
    div6 = 1000000;
    div5 = 100000;
    div4 = 10000;
    div3 = 1000;
    div2 = 100;
    div1 = 10;
    
    //for 16 digit card
    if ((car_num / div15) >= 1)
    {
        //find each digit
        long a1 = car_num % div1;
        long a2 = ((car_num % div2) - (car_num % div1)) / div1;
        long a3 = ((car_num % div3) - (car_num % div2)) / div2;
        long a4 = ((car_num % div4) - (car_num % div3)) / div3;
        long a5 = ((car_num % div5) - (car_num % div4)) / div4;
        long a6 = ((car_num % div6) - (car_num % div5)) / div5;
        long a7 = ((car_num % div7) - (car_num % div6)) / div6;
        long a8 = ((car_num % div8) - (car_num % div7)) / div7;
        long a9 = ((car_num % div9) - (car_num % div8)) / div8;
        long a10 = ((car_num % div10) - (car_num % div9)) / div9;
        long a11 = ((car_num % div11) - (car_num % div10)) / div10;
        long a12 = ((car_num % div12) - (car_num % div11)) / div11;
        long a13 = ((car_num % div13) - (car_num % div12)) / div12;
        long a14 = ((car_num % div14) - (car_num % div13)) / div13;
        long a15 = ((car_num % div15) - (car_num % div14)) / div14;
        long a16 = ((car_num % div16) - (car_num % div15)) / div15;
        
        //products digits
        int a2b = a2 * 2;
        int ar2 = a2b % div1;
        int aq2 = (a2b - ar2) / div1;
        
        int a3b = a3 * 2;
        int ar3 = a3b % div1;
        int aq3 = (a3b - ar3) / div1;
        
        int a4b = a4 * 2;
        int ar4 = a4b % div1;
        int aq4 = (a4b - ar4) / div1;
        
        int a5b = a5 * 2;
        int ar5 = a5b % div1;
        int aq5 = (a5b - ar5) / div1;
        
        int a6b = a6 * 2;
        int ar6 = a6b % div1;
        int aq6 = (a6b - ar6) / div1;
        
        int a7b = a2 * 2;
        int ar7 = a7b % div1;
        int aq7 = (a7b - ar7) / div1;
        
        int a8b = a8 * 2;
        int ar8 = a8b % div1;
        int aq8 = (a8b - ar8) / div1;
        
        int a9b = a9 * 2;
        int ar9 = a9b % div1;
        int aq9 = (a9b - ar9) / div1;
        
        int a10b = a10 * 2;
        int ar10 = a10b % div1;
        int aq10 = (a10b - ar10) / div1;
        
        int a11b = a11 * 2;
        int ar11 = a11b % div1;
        int aq11 = (a11b - ar11) / div1;
    

        int a12b = a12 * 2;
        int ar12 = a12b % div1;
        int aq12 = (a12b - ar12) / div1;
        
        int a13b = a13 * 2;
        int ar13 = a13b % div1;
        int aq13 = (a13b - ar13) / div1;
    

        int a14b = a14 * 2;
        int ar14 = a14b % div1;
        int aq14 = (a14b - ar14) / div1;
        
        int a15b = a15 * 2;
        int ar15 = a15b % div1;
        int aq15 = (a15b - ar15) / div1;
    

        int a16b = a16 * 2;
        int ar16 = a16b % div1;
        int aq16 = (a16b - ar16) / div1;
        
        //add all 
        int a = a1 + a3 + a5 + a7 + a9 + a11 + a13 + a15 + ar2 + ar4 + ar6 + ar8 + ar10 
                + ar12 + ar14 + ar16 + aq2 + aq4 + aq6 + aq8 + aq10 + aq12 + aq14 + aq16;
        
        //categorise
        int rem_a = a % div1;
        
        if (a16 == 4 && rem_a == 0)
        {
            printf("VISA\n");
        }
        
        else if (a16 == 5 && rem_a == 0 && (a15 == 1 || a15 == 2 || a15 == 3 || a15 == 4 || a15 == 5))
        {
            printf("MASTERCARD\n");
        }
        
        else
        {
            printf("INVALID\n");
        }
    
    }
    //for 15 digit card
    else if ((car_num / div14) >= 1)
    {
        //find each digit
        long b1 = car_num % div1;
        long b2 = ((car_num % div2) - (car_num % div1)) / div1;
        long b3 = ((car_num % div3) - (car_num % div2)) / div2;
        long b4 = ((car_num % div4) - (car_num % div3)) / div3;
        long b5 = ((car_num % div5) - (car_num % div4)) / div4;
        long b6 = ((car_num % div6) - (car_num % div5)) / div5;
        long b7 = ((car_num % div7) - (car_num % div6)) / div6;
        long b8 = ((car_num % div8) - (car_num % div7)) / div7;
        long b9 = ((car_num % div9) - (car_num % div8)) / div8;
        long b10 = ((car_num % div10) - (car_num % div9)) / div9;
        long b11 = ((car_num % div11) - (car_num % div10)) / div10;
        long b12 = ((car_num % div12) - (car_num % div11)) / div11;
        long b13 = ((car_num % div13) - (car_num % div12)) / div12;
        long b14 = ((car_num % div14) - (car_num % div13)) / div13;
        long b15 = ((car_num % div15) - (car_num % div14)) / div14;



        //products digits
        int b2b = b2 * 2;
        int br2 = b2b % div1;
        int bq2 = (b2b - br2) / div1;
        
        int b3b = b3 * 2;
        int br3 = b3b % div1;
        int bq3 = (b3b - br3) / div1;
        
        int b4b = b4 * 2;
        int br4 = b4b % div1;
        int bq4 = (b4b - br4) / div1;
        
        int b5b = b5 * 2;
        int br5 = b5b % div1;
        int bq5 = (b5b - br5) / div1;
        
        int b6b = b6 * 2;
        int br6 = b6b % div1;
        int bq6 = (b6b - br6) / div1;
        
        int b7b = b2 * 2;
        int br7 = b7b % div1;
        int bq7 = (b7b - br7) / div1;
        
        int b8b = b8 * 2;
        int br8 = b8b % div1;
        int bq8 = (b8b - br8) / div1;
        
        int b9b = b9 * 2;
        int br9 = b9b % div1;
        int bq9 = (b9b - br9) / div1;
        
        int b10b = b10 * 2;
        int br10 = b10b % div1;
        int bq10 = (b10b - br10) / div1;
        
        int b11b = b11 * 2;
        int br11 = b11b % div1;
        int bq11 = (b11b - br11) / div1;
    

        int b12b = b12 * 2;
        int br12 = b12b % div1;
        int bq12 = (b12b - br12) / div1;
        
        int b13b = b13 * 2;
        int br13 = b13b % div1;
        int bq13 = (b13b - br13) / div1;
    

        int b14b = b14 * 2;
        int br14 = b14b % div1;
        int bq14 = (b14b - br14) / div1;
        
        int b15b = b15 * 2;
        int br15 = b15b % div1;
        int bq15 = (b15b - br15) / div1;
        
        //add all 
        int b = b1 + b3 + b5 + b7 + b9 + b11 + b13 + b15 + br2 + br4 + br6 + br8 + br10 
                + br12 + br14 + bq2 + bq4 + bq6 + bq8 + bq10 + bq12 + bq14;
        
        //categorise
        int rem_b = b % div1;
        
        if (b15 == 3 && rem_b == 0 && (b14 == 4 || b14 == 7))
        {
            printf("AMEX\n");
        }
        
        else
        {
            printf("INVALID\n");
        }

    }
    
    //for 13 digit card
    else if ((car_num / div12) >= 1)
    {
        //find each digit
        long d1 = car_num % div1;
        long d2 = ((car_num % div2) - (car_num % div1)) / div1;
        long d3 = ((car_num % div3) - (car_num % div2)) / div2;
        long d4 = ((car_num % div4) - (car_num % div3)) / div3;
        long d5 = ((car_num % div5) - (car_num % div4)) / div4;
        long d6 = ((car_num % div6) - (car_num % div5)) / div5;
        long d7 = ((car_num % div7) - (car_num % div6)) / div6;
        long d8 = ((car_num % div8) - (car_num % div7)) / div7;
        long d9 = ((car_num % div9) - (car_num % div8)) / div8;
        long d10 = ((car_num % div10) - (car_num % div9)) / div9;
        long d11 = ((car_num % div11) - (car_num % div10)) / div10;
        long d12 = ((car_num % div12) - (car_num % div11)) / div11;
        long d13 = ((car_num % div13) - (car_num % div12)) / div12;
        
        //products digits
        int d2b = d2 * 2;
        int dr2 = d2b % div1;
        int dq2 = (d2b - dr2) / div1;
        
        int d3b = d3 * 2;
        int dr3 = d3b % div1;
        int dq3 = (d3b - dr3) / div1;
        
        int d4b = d4 * 2;
        int dr4 = d4b % div1;
        int dq4 = (d4b - dr4) / div1;
        
        int d5b = d5 * 2;
        int dr5 = d5b % div1;
        int dq5 = (d5b - dr5) / div1;
        
        int d6b = d6 * 2;
        int dr6 = d6b % div1;
        int dq6 = (d6b - dr6) / div1;
        
        int d7b = d2 * 2;
        int dr7 = d7b % div1;
        int dq7 = (d7b - dr7) / div1;
        
        int d8b = d8 * 2;
        int dr8 = d8b % div1;
        int dq8 = (d8b - dr8) / div1;
        
        int d9b = d9 * 2;
        int dr9 = d9b % div1;
        int dq9 = (d9b - dr9) / div1;
        
        int d10b = d10 * 2;
        int dr10 = d10b % div1;
        int dq10 = (d10b - dr10) / div1;
        
        int d11b = d11 * 2;
        int dr11 = d11b % div1;
        int dq11 = (d11b - dr11) / div1;
    

        int d12b = d12 * 2;
        int dr12 = d12b % div1;
        int dq12 = (d12b - dr12) / div1;
        
        int d13b = d13 * 2;
        int dr13 = d13b % div1;
        int dq13 = (d13b - dr13) / div1;
        
        //add all 
        int d = d1 + d3 + d5 + d7 + d9 + d11 + d13 + dr2 + dr4 + dr6 + dr8 + dr10 
                + dr12 + dq2 + dq4 + dq6 + dq8 + dq10 + dq12;
        
        //categorise
        int rem_d = d % div1;
        
        if (d13 == 4 && rem_d == 0)
        {
            printf("VISA\n");
        }
        
        else
        {
            printf("INVALID\n");
        }

    }
    
    //invalid cards
    else
    {
        printf("INVALID\n");
    }
}
