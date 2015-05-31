# prints x^0 * a_0 \n x^1 * a_1 ... x is from argv and a_n from stdin
gcc -o con con.c -lm
# bin(n, r) prints binomial coefficients 
gcc -o bin -I ~/proj/hw/ ~/proj/hw/comb/cm.c bin.c
# cmg(n, r) |n| < 1
gcc -o cmg cmg.c -lm
# sum all stdin
gcc -o sm sm.c
