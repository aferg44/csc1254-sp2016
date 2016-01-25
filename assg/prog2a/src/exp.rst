Fast exponentiation
===================

Suppose I wish to compute 2^16. One way is to begin with p=1, then let p=2*p
sixteen times.  But there is a more efficient way.

Notice that log2(16) = 4.  Therefore rather than multiplying p by 2 sixteen
times, I can start with p=2, then multiply p by itself 4 times:

p =   2
p =   2 *  2  = 4
p =   4 *  4  = 16
p =  16 *  16 = 256
p = 256 * 256 = 65536

The same is the case for any 2^n; if I can take log2(n) evenly, then I can do
the exponentiation in log2(n) time. Suppose I had n=19 instead of n=16; then I
could calcuate 2^16 = 65536, then proceed to multiply it by 2 three times.

Notice, however, that this is still an O(n) algorithm, since in the worst cast
I will still need to do n/2-1 operations.  This applies to n=31, n=63, etc.
