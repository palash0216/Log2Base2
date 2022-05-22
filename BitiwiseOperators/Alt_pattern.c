// You will be given a positive integer as input. 

// Your task is to check whether the given number has an alternate bit pattern in its binary representation or not. 

// we right shift the given number once and then take the xor 
//  Using the logic of powerof2

int hasAlternateBitPattern(int num)
{
    int rshift = num >> 1;
    int result = num ^ rshift;

    if((result & (result+1)) == 0)
        return 1;

    return 0;
}