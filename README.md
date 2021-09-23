# collatz
...

Some foolery with the Collatz conjecture

### possible uses
Messing around with key generation;
k0 = abs_sum(series), k1 = k0/n in series

This could be solved with the pre-value, but verification is kind of non-existant

Maybe use equivalence rule to create sibling keys?

#### changelog
- 09/23/21
	- Added series generation (could be faster, but cpp doesn't have an equivalence operator, which isn't vanilla collatz anyway, but whatever)
