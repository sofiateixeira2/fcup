
plusplus :: [a] -> [a] -> [a]
plusplus [] xs = xs
plusplus (x:y) xs = x : (plusplus y xs)

--(x:y) = (h:t) -> head : tail


insert :: (Ord a) => a -> [a] -> [a]
insert v [] = [v]
insert v (h:t) | (v > h) = h : (insert v t)
               | otherwise = (v:h:t)


isort :: (Ord a) => [a] -> [a]
isort [] = []
isort (h:t) = insert h (isort t)


minimum2 :: (Ord a) => [a] -> a
minimum2 [x] = x
minimum2 (h:t) = min h (minimum2 t)


delete :: (Eq a) => a -> [a] -> [a]
delete v [] = []
delete v (h:t) | (h == v) = t
               | otherwise = h : (delete v t)

ssort :: (Ord a) => [a] -> [a]
ssort [] = []
ssort l = n : (ssort (delete n l))
       where n = minimum2 l



merge :: (Ord a) => [a] -> [a] -> [a]
merge l [] = l
merge [] l = l
merge (x:xs) (y:ys) | (x > y) = y:(merge (x:xs ) ys)
                    | otherwise = x:(merge xs (y:ys))


metades :: [a] -> ([a], [a])
metades l = (l1, l2)
         where l1 = take s l
               l2 = drop s l
               s = div (length l) 2

msort :: (Ord a) => [a] -> [a]
msort [] = []
msort [v] = [v]
msort l = merge (msort l1) (msort l2)
       where (l1,l2) = metades l



























