
forte :: String -> Bool
forte n = and [x,y,w,z]
        where x = (length n) >= 8
              y = or [(x >= 'a') && (x <= 'z') | x <- n]
              w = or [(x >= 'A') && (x <= 'Z') | x <- n]
              z = or [(x >= '0') && (x <= '9') | x <- n]
