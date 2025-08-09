# MultiDimensional Array

The general form of declaring N-dimensional arrays is:  

        data_type array_name[size1][size2]....[sizeN];

    data_type: Type of data to be stored in the array.
    array_name: Name of the array
    size1, size2,… ,sizeN: Sizes of the dimension




### Summary of Methods

| Method                   | Flexibility                | Ease of Use | Performance             |
|--------------------------|----------------------------|-------------|-------------------------|
| Fixed-Size Arrays        | Limited to fixed size      | Simple      | High (cache-friendly)   |
| Omitted First Dimension  | Flexible column size       | Moderate    | High (cache-friendly)   |
| Double Pointers          | Fully dynamic              | Complex     | Low (less cache-friendly) |
| Array of Pointers        | Fully dynamic              | Moderate    | Low (less cache-friendly) |
| STL Array of Vectors     | Fully dynamic rows         | Moderate    | Moderate                |
| STL Vector of Vectors    | Fully dynamic rows/columns | Easy        | Moderate                |


