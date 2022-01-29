
--ex5.b

init1 :: [a] -> [a]
init1 xs = take (length xs - 1) xs

init2 :: [a] -> [a]
init2 xs = reverse (drop 1 (reverse xs))

--ex11

safetail :: [a] -> [a]
safetail [] = []
safetail xs = drop 1 xs

--ex12

curta :: [a] -> Bool
curta xs
      | length xs <= 2 = True
      | otherwise = False

--ex22

sumquadrados :: Int
sumquadrados = sum [ x^2 | x <- [1..100]]

--ex29

pitagoricos :: Int -> [(Int, Int, Int)]
pitagoricos n = [(x, y, z) | x <- [1..n], y <- [1..n], z <- [1..n], x^2 + y^2 == z^2]

--ex30

forte :: String -> Bool
forte n = and [x, y, z, w]
        where x = (length n) >= 8
              y = or [(x >= 'a') && (x <= 'z') | x <- n]
              z = or [(x >= 'A') && (x <= 'Z') | x <- n]
              w = or [(x >= '0') && (x <= '9') | x <- n]

--ex32b

or' :: [Bool] -> Bool
or' [] = False
or' (h:t) = h || (or' t)

--ex34a

leastsquare n = leastsquare' n 0
   where leastsquare' n acc = if (acc * acc >= n) then acc else leastsquare' n (acc + 1)

--ex35a

factorial :: Int -> Int
factorial 0 = 1
factorial n = n * (factorial (n-1))

--ex36

mdc :: (Int, Int) -> Int
mdc (a, b) 
      | b == 0 = a
      | otherwise = mdc(b, a`mod`b)

--ex37

nub' :: (Eq a) => [a] -> [a]
nub' [] = []
nub' (x:xs) = x : filter (/= x) (nub' xs)

--ex38

intersperse' :: a -> [a] -> [a]
intersperse' _ [] = []
intersperse' _ [x] = [x]
intersperse' a (x:xs) = x : a : (intersperse' a xs)

--ex46

permutations :: [a] -> [[a]]
permutations [] = [[]]
permutations (x:xs) = [y | p <- permutations xs, y <- interleave p]
  where 
       interleave [] = [[x]]
       interleave (y:ys) = (x:y:ys) : map (y:) (interleave ys)

--ex47

ex47 :: [a] -> (a -> b) -> (a -> Bool) -> [b]
ex47 xs f p = map f (filter p xs)

--ex48

(+++) :: [a] -> [a] -> [a]
(+++) xs ys = foldr (:) ys xs

reverse' :: [a] -> [a]
reverse' [] = []
reverse' xs = foldr (\a b -> b ++ [a]) [] xs

elem' :: (Eq a) => a -> [a] -> Bool
elem' _ [] = False
elem' v xs | any (v==) xs = True
           | otherwise = False

--ex49

dec2int :: [Int] -> Int
dec2int [] = 0
dec2int xs = foldl (\num d -> 10*num +d) 0 xs

--ex50
zipWith' :: (a -> b -> c) -> [a] -> [b] -> [c]
zipWith' f [] [] = []
zipWith' f _ [] = []
zipWith' f [] _ = []
zipWith' f (x:xs) (y:ys) = f x y : zipWith' f xs ys

--52

shift' :: [a] -> [a]
shift' [] = []
shift' (x:xs) = xs ++ [x]

rotate' :: [a] -> [[a]]
rotate' xs = foldr (\v l -> l ++ [shift' (last l)]) [xs] (tail xs)

--ex53a

maximum' :: Ord a => [a] -> a
--maximum' xs = foldl1 (\x y -> if x > y then x else y) xs
maximum' xs = foldr1 (\x y -> if x > y then x else y) xs

minimum' :: Ord a => [a] -> a
minimum' xs = foldl1 (\x y -> if x < y then x else y) xs


--ex54

add :: Integer -> Integer -> Integer
add i 0 = i
add i j = succ (add i (pred j))


--ex55

mdc' :: (Int, Int) -> Int
mdc' (a, b) | b == 0 = a
            | otherwise = until (==0) `mod`b a












