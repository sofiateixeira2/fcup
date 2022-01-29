
--EX31

pot :: Integer -> Integer
pot 0 = 1
pot n = 2 * (pot (n-1))


--EX32

--a

and' :: [Bool] -> Bool
and' [] = True
and' (h:t) = h && (and' t)

and'' :: [Bool] -> Bool
and'' [] = True
and'' (True:t) = and'' t
and'' (False:t) = False


--d

replicate' :: Int -> a -> [a]
replicate' 0 _ = []
replicate' n e = e : (replicate' (n-1) e)


--c

concat' :: [[a]] -> [a]
concat' [] = []
concat' (h:t) = h ++ concat' t

concat'' :: [[a]] -> [a]
concat'' [] = []
concat'' ([]:t) = concat'' t
concat'' ((x:xs):t) = x : concat'' (xs:t)

concat''' :: [[a]] -> [a]
concat''' xss = [ x | xs <- xss, x <- xs ]


--f

elem' :: Eq a => a -> [a] -> Bool
elem' x [] = False
elem' x (h:t) | x == h = True
              | otherwise = elem' x t

























