/* Write a function which is called "get_fibonacci_number". It returns the "N"th
 * Fibonacci number, where "N" is received as a paramter.
 * For example:
 *  - get_fibonacci_number(1) returns 0
 *  - get_fibonacci_number(2) returns 1
 *  - get_fibonacci_number(3) returns 1
 *  - get_fibonacci_number(4) returns 2
 *  - get_fibonacci_number(5) returns 3
 *  - get_fibonacci_number(6) returns 5
 *
 *  If the function gets invalid parameter it returns -1.
 */
int get_fibonacci_number(int);


int main(){

    int Nth_fib_num = get_fibonacci_number (6);
    printf("%d", Nth_fib_num );

    return 0;
}
int get_fibonacci_number(int N){

    if(N <= 1){
        return N;
     return int(N-1) + int(N-2);

    }
}
