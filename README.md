# Probability Simulations in C

Programs where I use random numbers to estimate things, by repeating a random experiment many times and averaging the results. I made these to understand probability and expected value better.

**Author:** Yemineni Nideesh, B.Tech CSE, IIT Bhubaneswar (2025–2029)

## Programs

### `PiEstimate.c`: estimating π

The program picks random points inside a 2 × 2 square. Some land inside the quarter circle drawn in the corner, and the rest land outside. The fraction that land inside is close to π/4, so multiplying it by 4 gives an estimate of π. I use 10,000,000 points.

With this many points, the answer is usually off by only about 0.0005.

### `simple_bet_expected_value.c`: average result of a simple bet

This program plays a simple game 10,000,000 times. It picks a random number from 1 to 10,000. If the number is odd, I win 100. If it is even, I lose 50.

Half the numbers are odd and half are even, so the average result per play should be:

0.5 × 100 + 0.5 × (−50) = **25**

The program prints the average result it got, and it usually lands within about 0.02 of 25.
### `Linear_vs_Squared_Payouts.c`: comparing two payouts

Two options with a die:
- **Option A:** roll the die and get paid the number it shows.
- **Option B:** pay $4 first, roll the die, and get paid the square of the number.

Option A averages 3.5 per play. Option B averages (1 + 4 + 9 + 16 + 25 + 36) / 6 − 4 = 91/6 − 4 ≈ 11.17 per play, so it is much better on average. The program plays each option 10,000,000 times and prints the average result of each.

### `Risk_vs_Reward_Simulation.c`: sure money or a coin flip

Two options:
- **Option A:** take $500 for sure.
- **Option B:** flip a coin and get $1200 for heads, nothing for tails.

Option B averages 0.5 × 1200 = $600, which beats $500 if you play many times. For a single play the choice depends on how much risk you are willing to take.
