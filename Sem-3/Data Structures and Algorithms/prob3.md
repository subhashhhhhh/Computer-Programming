The output of the provided program will be:

```
10000
```

Here's an explanation of why:

1. `int arr[5] = {1};` initializes the first element of the array `arr` with `1` and the rest of the elements are implicitly initialized to `0`.
2. The loop `for (i = 0; i < 5; i++)` iterates through the array from index 0 to 4.
3. Inside the loop, `printf("%d", arr[i]);` prints the value at each index of the array. So, for index 0, it prints `1`, and for the remaining indices (1, 2, 3, and 4), it prints `0`.
4. The output will be `10000`, where `1` is from the first element of the array and the rest are zeros.