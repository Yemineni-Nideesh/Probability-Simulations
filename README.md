# Probability Simulations in C

Programs where I use random numbers to estimate things, by repeating a random experiment many times and averaging the results. I made these to understand probability and expected value better.

**Author:** Yemineni Nideesh, B.Tech CSE, IIT Bhubaneswar (2025–2029)

## Programs

### `PiEstimate.c`: estimating π

The program picks random points inside a 1 × 1 square. Some land inside the quarter circle drawn in the corner, and the rest land outside. The fraction that land inside is close to π/4, so multiplying it by 4 gives an estimate of π. I use 10,000,000 points.

With this many points, the answer is usually off by only about 0.0005.

### `simple_bet_expected_value.c`: average result of a simple bet

This program plays a simple game 10,000,000 times. It picks a random number from 1 to 10,000. If the number is odd, I win 100. If it is even, I lose 50.

Half the numbers are odd and half are even, so the average result per play should be:

0.5 × 100 + 0.5 × (−50) = **25**

The program prints the average result it got, and it usually lands within about 0.02 of 25.

## Example results

I ran each program three times. The answers change slightly every run because the random numbers are different each time.

| Program | Run 1 | Run 2 | Run 3 | Exact answer |
|---|---|---|---|---|
| `PiEstimate.c` | 3.141210 | 3.141180 | 3.141801 | 3.141593 |
| `simple_bet_expected_value.c` | 25.010860 | 24.991435 | 24.979795 | 25 |

## What I learned

- More random samples give a more accurate answer, but the improvement is slow. Using 100 times more samples makes the error only about 10 times smaller.
- The expected value of a game can be worked out with a formula, and a simulation of the same game should agree with it.

## Build and run

```bash
gcc PiEstimate.c -o pi_estimate
./pi_estimate

gcc simple_bet_expected_value.c -o simple_bet
./simple_bet
```

## What's missing

- The programs only print the answer. They don't show how far it is from the true value.
- I only tried one number of samples (10,000,000). I haven't yet tested how the error changes with fewer or more samples.
- The random numbers come from C's built-in `rand()`, which is fine for learning but not the best quality. I want to try a better one later.
- The random numbers change every run, so I can't repeat an exact run.

## Next steps

- Print the true value and the error next to each estimate.
- Test different numbers of samples and make a chart of how the error changes.
- Simulate betting with a starting amount of money, to see how often I go broke.
- Later: try pricing a simple stock option with a simulation.
