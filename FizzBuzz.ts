function fizzBuzz(n: number): string[] {
    let result: string[] = [];
    for(let i = 1; i <= n; i++){
        let val: string = "";
        if (i % 3 == 0) {
            val += "Fizz";
        }
        if (i % 5 == 0) {
            val += "Buzz";
        }
        if (i % 3 != 0 && i % 5 != 0) {
            val = String(i);
        }
        result.push(val);
    }
    return result
};
