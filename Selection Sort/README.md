## Pseudocode

for (0 to number_of_elements - 1)

minimum_index = i

    for (i+1 to number_of_elements)
        if (arr[j] < arr[minimum_index])
            minimum_index = j;


    swap(arr[minimum_index], arr[i])
