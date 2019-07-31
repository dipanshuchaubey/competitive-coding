## Pseudocode

```bash

for i = 2 to array.length

    key = array[i]
    j = key - 1

    while(j>= 0 and array[j] > key)
        array[j+1] = array[j]
        j = j - 1

    array[j+1] = key

```
