# Probability Simulations in C

Monte Carlo simulations written in C: estimating a quantity by repeating a random experiment many times and averaging the results. I wrote these to build intuition for probability, expected value, and how estimation error behaves.

**Author:** Yemineni Nideesh, B.Tech CSE, IIT Bhubaneswar (2025–2029)

## Programs

### `PiEstimate.c`: estimating π

Picks random points (x, y) in the unit square. The fraction that land inside the quarter circle x² + y² ≤ 1 approaches π/4, the ratio of the two areas, so π ≈ 4 × (points inside) / (total points). The program uses 10,000,000 points.

At this sample size the standard error is about 0.0005, so the estimate should land within a few thousandths of π.

### `simple_bet_expected_value.c`: expected payoff of a simple bet

Simulates this game: draw a random integer from 1 to 10,000. If it is odd, win 100. If it is even, lose 50. Half of the numbers are odd, so the exact expected value is

0.5 × 100 + 0.5 × (−50) = **25 per play**.

The program plays 10,000,000 times and prints the average payoff. The payoff has a standard deviation of 75, so the standard error is 75 / √10,000,000 ≈ 0.024.

## Example results

Three runs of each program (results differ every run because the seed comes from the clock):

| Program | Run 1 | Run 2 | Run 3 | Exact value |
|---|---|---|---|---|
| `PiEstimate.c` | 3.141210 | 3.141180 | 3.141801 | 3.141593 |
| `simple_bet_expected_value.c` | 25.010860 | 24.991435 | 24.979795 | 25 |

All six results are within the expected error of the exact values.

## Why the error shrinks

Each estimate is an average of random samples. By the central limit theorem, the typical error of such an average shrinks in proportion to 1/√N. Using 100 times more samples cuts the error by only 10 times, which is why Monte Carlo methods need very large sample sizes for high accuracy.

## Build and run

```bash
gcc PiEstimate.c -o pi_estimate
./pi_estimate

gcc simple_bet_expected_value.c -o simple_bet
./simple_bet
```

## Known limitations

- Both programs use `rand()`, a weak generator whose `RAND_MAX` varies by platform. `rand() % 10000` also has a slight bias, negligible here but worth knowing.
- The seed comes from the clock, so a run can't be reproduced exactly. There is no fixed-seed option yet.
- The programs print only the estimate, not the exact value, the error, or a confidence interval.
- Each program uses a single sample size, so the 1/√N behavior above is stated from theory and not yet measured here.

## Roadmap

- Print the exact value, the error, and a 95% confidence interval.
- Run each simulation many times at several sample sizes and chart error against N to show the 1/√N trend.
- Add a fixed-seed option and a better random number generator.
- Betting simulation with a bankroll: probability of ruin, and bet sizing with the Kelly criterion.
- Later: option pricing with a binomial tree, compared against Black–Scholes and Monte Carlo.
