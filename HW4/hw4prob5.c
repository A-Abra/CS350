long arith(long x, long y, long z) {
        long t1,t2,t3,t4;
        t1 = x + y;
        t2 = t1 - z;
        t3 = t1 & t2;
        t4 = t2 * t3;
        
        return t4;
}

/*
arith:
    leaq (%rsi,%rdi), %rcx # t1
    movq %rcx, %rdi
    subq %rdx, %rdi # t2
    movq %rcx, %rsi
    andq %rdi, %rsi # t3
    movq %rdi, %rax
    mulq %rsi, %rax # t4
    re
*/