--ex23

--a

aprox1 :: Int -> Double
aprox1 n = 4 * (sum [ (-1)^x / fromIntegral ((2*x) + 1) | x <- [0..n] ])

aprox2 :: Int -> Double
aprox2 n = 4 * (sum [f x | x <- [0..n] ])
  where f x = (-1)^x / fromIntegral ((2*x) + 1)

--b

aprox' :: Int -> Double
aprox' n = sqrt (12 * sum [ f x | x <- [0..n] ])
  where f x = (-1)^x / fromIntegral ((x + 1)^2)


-------------------------------------------------------------------------

--ex24

divprop :: Int -> [Int]
divprop n = [ x | x <- [1..(n-1)], n`mod`x == 0]


-------------------------------------------------------------------------

--ex25

perfeitos :: Int -> [Int]
sumn n = sum [x | x <- [1..n], n`mod`x == 0, x /= n]
perfeitos n = [x | x <- [1..n], sumn x == x ]


-------------------------------------------------------------------------

--ex26

primo :: Int -> Bool
primo 1 = False
primo 2 = True
primo n = if (length [ x | x <- [2..(n-1)], n`mod`x == 0] > 0)then False
           else True

primo1 :: Int -> Bool
primo1 n = (divprop n) == [1]


-------------------------------------------------------------------------

--ex27
 
binom :: Int -> Int -> Int
binom n k = (product [(k+1)..n]) `div` (product ([1..(n-k)]))

linha :: Int -> [Int]
linha n = [ binom n k | k <- [0..n] ]

pascal :: Int -> [[Int]]
pascal n = [ [binom n x | x <- [0..n]] | x <- [0..n] ]


















