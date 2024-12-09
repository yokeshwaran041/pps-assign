import cmath 

 

def find_square_root(num): 

    if num < 0: 

        return cmath.sqrt(num)  # Returns the complex square root if num is negative. 

    else: 

        return num**0.5  # Returns the real square root if num is non-negative. 

 

# Test with various non-negative numbers 

test_numbers = [0, 1, 4, 16, 25, 49, 100, -1, -4] 

 

print("Finding square roots:") 

for num in test_numbers: 

    result = find_square_root(num) 

    print(f"Square root of {num}: {result}") 
