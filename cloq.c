// Here you C cloq:

T,w;char*s,*h="T,w;char*s,*h=#,*Q=#,v,c;C[9];I,m[],q,a,k,i,b,n,z;main(int A,char**V){T=A-1?atoi(V[1]):T;for"
"(;;){T%=86400;s=h;k=w=i=b=0;a=2~;q=n=1;C[8]=1+T%10;C[1]=1+T/36000;C[7]=1+T%60/10;C[2]=1+T/3600%10;C[4]=1+T"
"/60%60/10;C[5]=1+T/60%10;while((v=~h[w])){printf($`e[;$);z=(Q[2*(9*C[(i+1)/2]+k-2)+!(i%2)]-38)>>b;b-=(v==1"
"26&&(v=10,1))-1;z=(i&&i-17&&k>1&&k<11~&&z&1)&&(putchar(57),1);printf($2m$);I=i+=!(b%=6);k+=(I!=(i%=18))?(i"
"--,1):0;z=*s||v-35?0:(v=34,q=1,a=14,n=*s~||(s=n?Q:s,n));putchar(v==35?(q?(--q?10:34):a==109?(a=0,q=2,b--,3"
"4):*s++):(w++,v==36?34:v-96?v:92));a++;};T;~printf($%5i;m[]=L`$`e[m%ls`e[2m`$;`n`e[14A$,T,m);usleep(0xf424"
"0);T++;}}T=",*Q="V)^-V)&&&&&&V)^-V)V)B4,>,>,>,>,>B4V)F'V'^'R'L'F'F'F'dEb-,2&>&>&2F)^&2&dEb-,2&>&2F5&2&>,2b"
"-&4&5F3V2>222dE&2&2d5,&,&d)V5&>&>,2b-&)F'V&^-B4,>,>B4V)dE&2&,&)b5F'F'F'F'^-B4,>22^-22,>B4V)V)B4,>,>B4^-&)F"
"'V&",v,c;C[9];I,m[],q,a,k,i,b,n,z;main(int A,char**V){T=A-1?atoi(V[1]):T;for(;;){T%=86400;s=h;k=w=i=b=0;a=2
;q=n=1;C[8]=1+T%10;C[1]=1+T/36000;C[7]=1+T%60/10;C[2]=1+T/3600%10;C[4]=1+T/60%60/10;C[5]=1+T/60%10;while((v=
h[w])){printf("\e[;");z=(Q[2*(9*C[(i+1)/2]+k-2)+!(i%2)]-38)>>b;b-=(v==126&&(v=10,1))-1;z=(i&&i-17&&k>1&&k<11
&&z&1)&&(putchar(57),1);printf("2m");I=i+=!(b%=6);k+=(I!=(i%=18))?(i--,1):0;z=*s||v-35?0:(v=34,q=1,a=14,n=*s
||(s=n?Q:s,n));putchar(v==35?(q?(--q?10:34):a==109?(a=0,q=2,b--,34):*s++):(w++,v==36?34:v-96?v:92));a++;};T;
printf("%5i;m[]=L\"\e[m%ls\e[2m\";\n\e[14A",T,m);usleep(0xf4240);T++;}}T=43200;m[]=L"  c-cloq (c) chri-k  ";

// This is the first quine i've ever made using C, and i have to say, C is the worst language for quines.
// inspired by https://aem1k.com/qlock

/* ============================================  INSTRUCTIONS  =========================================== */
/*

(1) To compile it:
    - Use gcc or clang with the -Wno-all flag. C standard must be C89 or C99.
    - Only works on POSIX systems (because usleep)
(2) To set the time:
    - Pass the number of seconds as a command line argument
(3) To pause your c-cloq:
    - Exit the program
    - Be careful to not lose your c-cloq
(4) To resume your c-cloq:
    - Take the c-cloq you saved in (3) and use it to repeat (1).

*/

/* ============================================  EXPLANATION  ============================================ */

// Filling this section is left as a mandatory exercise to the reader
