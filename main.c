int addTwoDigits(int n) {

    int digit_2 = (n % 10);
    int digit_1 = (n - digit_2) / 10; 
        
    int sum = digit_1 +digit_2;
    return(sum);
}

