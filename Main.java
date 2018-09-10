package com.company;

import java.util.Date;

public class Main {
    public static void main(String[] args) {
        /*int a, b=1554345, c=23434534;
        long start = System.nanoTime();
        a = b+c;
        long end = System.nanoTime();
        long res = end - start;
        System.out.println(res);*/

        long a1=0, a2=0, a3=0, a4=0, b1=1, b2=2, b3=3, b4=45, c1=1, c2=2, c3=3, c4=45;
        int num=0;
        long start, end;
        for(long i=0; i<1000000;){
            start = System.nanoTime();
            a1=b1+c1;
            a2=b2+c2;
            a3=b3+c3;
            a4=b4+c4;
            b1=a1+b2;
            b2=a2+b3;
            b3=a3+b4;
            b4=a4+c1;
            end = System.nanoTime();
            if( a1>2147483647 || a2>2147483647 || a3>2147483647  ) {
                System.out.println("End");
                break;
            }
            i += end - start;
            num++;
        }
        System.out.println(num*8*1000);
        System.out.println( a1 +"  "+ a2 +"  "+a3+"  "+a4+"  "+b1+"  "+b2+"  "+b3+"  "+b4+"  ");
        System.out.println("i="+num);
    }
}
