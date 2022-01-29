
--ex17

ex14a :: [ Char ]
ex14a = ['a', 'b', 'c']

ex14b :: ( Char, Char, Char )
ex14b = ('a', 'b', 'c')

ex14c :: [(Bool, Char)]
ex14c = [(False, '0'), (True, '1')]

ex14d :: ([Bool], [Char])
ex14d = ([False, True], ['0', '1'])

ex14e :: [([a] -> [a])]
ex14e = [tail, init, reverse]

ex14f :: [(Bool -> Bool)]
ex14f = [id, not]


-------------------------------------------------------------------------


--ex17

segundo :: [a] -> a
segundo xs = head (tail xs)

trocar :: (a, b) -> (b, a)
trocar (x,y) = (y,x)

par :: a -> b -> (a, b)
par x y = (x, y)

dobro :: Num a => a -> a
dobro x = 2 * x

metade :: Fractional a => a -> a
metade x = x / 2

minuscula :: Char -> Bool
minuscula x = x >= 'a' && x <= 'z'

intervalo :: Ord a => a -> a -> a -> Bool
intervalo x a b = x >= a && x <= b

palindromo :: Eq a => [a] -> Bool
palindromo xs = (reverse xs) == xs

soma1 x = x + 1
twice :: (a -> a) -> a -> a
twice f x = f (f x)


-------------------------------------------------------------------------


--ex20

--ex20 :: (a, [a]) -> Bool


-------------------------------------------------------------------------


--ex19

ex19a :: Int -> (Int -> Int) -> Int
ex19a x f = f (f x)

ex19b :: Char -> Bool -> Bool
ex19b c b = c >= 'a' && b

ex19c :: (Char -> Char -> Int) -> Char -> Int
ex19c f c = f c 'a'

ex19d :: Eq a => a -> [a] -> Bool
ex19d x xs = x == (head xs)

ex19e :: Eq a => a -> [a] -> [a]
ex19e x [] = []
ex19e x xs | x == (head xs) = tail xs
           | otherwise = xs

ex19f :: Ord a => a -> a -> a
ex19f x y | x > y = x
          | otherwise = y

