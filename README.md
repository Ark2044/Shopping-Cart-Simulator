# Shopping Cart Simulator

## Project Description

This C++ project simulates a shopping cart for an online store. The store offers three categories of items: Mobiles, Laptops, and Programming Courses. Users can browse items in each category, add them to their cart, and checkout to see the total bill.

### Features

- **Browse Items**: Users can view available items in each category with their prices.
- **Add to Cart**: Users can add selected items to their shopping cart.
- **Checkout**: Users can checkout to see the total bill for the items added to the cart.

### Item Categories

1. **Mobiles**
   - Samsung: Rs. 15000
   - Redmi: Rs. 12000
   - Apple: Rs. 100000

2. **Laptops**
   - HP: Rs. 40000
   - Lenovo: Rs. 35000
   - Macbook: Rs. 250000

3. **Programming Courses**
   - C: Rs. 1000
   - C++: Rs. 3000

## How to Run

### Prerequisites

- C++ Compiler (GCC or equivalent)
- Terminal/Command Prompt

### Steps

1. **Clone the Repository**

   ```
   git clone <repository-url>
   cd <repository-directory>
   ```
2. **Compile the Code**

   Use the following command to compile the C++ code:
   ```
   g++ main.cpp -o shopping
   ```
   This will create an executable file named `shopping`.

3. Run the Executable

   ```sh
   ./shopping
   ```
4. Interact with the Program

   Follow the on-screen instructions to browse items, add them to your cart, and checkout.

### Example Usage
```

                 Menu
 -----------------------------------------
1.Mobile
2.Laptop
3.Programming Courses
4.Checkout

 -----------------------------------------
Please select an option to proceed further. If you choose to checkout, shopping will end and bill will be generated for the items bought so far...
1

- - - - - - - - - - - - - -
Item    Cost
1. Samsung --- Rs. 15000/-
2. Redmi --- Rs. 12000/-
3. Apple --- Rs. 100000/-
- - - - - - - - - - - - -

These are the smartphone categories we have....
Enter your selection
1

PURCHASE SUCCESSFUL!! Samsung IS ADDED TO THE CART
```

When you choose to checkout:
```
-------------------------------
Purchased Items:
Mobile - Samsung: Rs. 15000/-
-------------------------------
Total amount: Rs. 15000/-
-------------------------------
***** THANK YOU & HAPPY ONLINE SHOPPING *****
```
