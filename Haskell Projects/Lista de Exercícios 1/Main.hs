-- Nome: Hugo Shiniti Nishimoto
-- RA: 32048416


--Ex1
eh_minu :: Char -> Bool

eh_minu x = if x == 'a' then True else 
            if x == 'b' then True else
            if x == 'c' then True else
            if x == 'd' then True else
            if x == 'e' then True else
            if x == 'f' then True else False

--Ex2
potencia :: Float -> Integer -> Float 

potencia x y = if y == 0 then 1 else x * (potencia x (y-1))


--Ex3
eh_par :: Integer -> Bool

eh_par x = if x `mod` 2 /= 1 then True else False

--Ex4
media :: Integer -> Integer -> Integer
media x y = x `div`y

--ex5
fahr_para_celsius :: Float -> Float
fahr_para_celsius x = x * 1.8 

--ex6
menor :: Integer -> Integer -> Integer -> Integer
menor a b c = if a > b  then a else
              if a > c then a else 
              if b > a then b else
              if b > c then b else
              if c > a then c else c
              

main = do

  print(eh_minu 'a')
  print(potencia 4 2)
  print(eh_par 2)
  print(media 4 2)
  print(fahr_para_celsius 20)
  print(menor 18 4 2)



  
