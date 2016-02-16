-- Definition of Fibonacci sequence. fib(n) is fib(n-1)+fib(n-2), except if
-- 0<n<=2.
fib :: Int -> Int
fib n  |  n>2       = fib(n-1) + fib(n-2)
       |  otherwise = 1


-- The sum of numbers 1 to n is equal to n plus the sum of numbers 1 to n-1.
sum :: Int -> Int
sum n = if (n>1) then (n + Main.sum(n - 1)) else 1 


-- n is divisible by m if  n mod m  is not equal to 0
isDivisible :: Int -> Int -> Bool
isDivisible n m = ((n `mod` m) == 0)


-- n is composite if it is divisible by any number less than
-- itself and greater than 1
isComposite :: Int -> Int -> Bool
isComposite n m | m==1              = False
                | (isDivisible n m) = True
                | otherwise         = isComposite n (m-1)


-- n is prime if not composite
isPrime :: Int -> Bool
isPrime n = not (isComposite n (n-1))


main = do 
  print(Main.sum(10))
  print(fib(5))
  print(map fib     [1, 2, 3, 4, 5, 6, 7, 8, 9 ])
  print(map isPrime [2, 3, 4, 5, 6, 7, 8, 9, 10])
