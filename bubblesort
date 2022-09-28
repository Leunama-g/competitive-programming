function countSwaps(a: number[]): void {
    let buffer, counter = 0;
    for (let i = 0; i < a.length; i++) {
    
        for (let j = 0; j < a.length - 1; j++) {
            // Swap adjacent elements if they are in decreasing order
            if (a[j] > a[j + 1]) {
                counter++;
                buffer = a[j];
                a[j] = a[j + 1];
                a[j + 1] = buffer;
            }
        }
    
    }
    
    console.log('Array is sorted in', counter ,'swaps.');
    console.log('First Element:', a[0]);
    console.log('Last Element:', a[a.length - 1]);

}
