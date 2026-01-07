//Que-3-> If we have only 5 bits, How 13 and -16 will be written in 5 bits.

// for 13-> 01101

// for -16->
// 16            -> 10000
//1st complement -> 01111
//2nd complement ->    +1
// -16           -> 10000

//So how computer get know it is -16 for 10000 and not 16? as for both binary number is same.
//Answer->
//The same hardware can treat the same bits as signed or unsigned
//The difference is how the instruction interprets them