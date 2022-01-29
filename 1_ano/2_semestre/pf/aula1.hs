inc x = x + 1
dobro x = x + x
quadrado x = x * x
media x y = (x+y)/2


triangulo a b c = a < (b + c) &&
                  b < (a + c) &&
                  c < (a + b)


area  a b c = sqrt( s*(s - a)*(s - b)*(s -c))
              where s = (a+b+c) / 2


metades xs = (pp , sp)
  where mc = (length xs) `div` 2
        pp = take mc xs
        sp = drop mc xs


last1 xs = head (reverse xs)

last2 xs = xs !! ((length xs) - 1)


binomial1 n k = (product [1..n]) / ((product [1..k]) * (product [1..(n-k)]))

binomial2 n k = product [1..n] / ( product ([1..k] ++ [1..(n-k)]))


max3 a b c = if a >= b && a>=c then a else
              if b >= a && b >=c then b else c

min3 a b c = if a <= b && a<=c then a else
              if b <= a && b <=c then b else c

max3b a b c = max (max a b) c

min3b a b c = min (min a b) c


nota :: Int -> String
nota n = if n <= 9 then "reprovado" else
         if n >= 10 && n <= 12 then "suficiente" else
         if n >= 13 && n <= 15 then "bom" else
         if n >= 16 && n <= 18 then "muito bom" else "muito muito bom"
