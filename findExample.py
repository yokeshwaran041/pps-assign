def is_odd(number): 

    return number % 2 != 0 

 

# Function to find the product of two odd numbers and check if it's odd 

def check_product_of_odds(): 

    for i in range(1, 20, 2):  # Generate odd numbers up to 20 

        for j in range(1, 20, 2): 

            product = i * j 

            if not is_odd(product): 

                print(f"Found an even product: {i} * {j} = {product}") 

                return 

    print("No even product found. The product of two odd numbers is always odd.") 

 

check_product_of_odds() 
