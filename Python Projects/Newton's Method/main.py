def f(x):
    return x**3 - 5*x - 9

def fprime(x):
    return 3*x**2 - 5


def newtonRaphson(x0,e,N):
    step = 1
    flag = 1
    condition = True
    while condition:
        if fprime(x0) == 0.0:
            break
        
        x1 = x0 - f(x0)/fprime(x0)
      
        print('Iteração-%d, x1 = %f , f(x1) = %f' % (step, x1, f(x1)))
        x0 = x1
        step = step + 1
        
        if step > N:
            flag = 0
            break
        
        condition = abs(f(x1)) > e
    
    if flag==1:
        print('\nA raiz é: %f' % x1)
    else:
        print('A entrada não converge')


x0 = float(input('Valor inicial: '))
e = float(input('Tolerância: '))
N = int(input('Número de interações: '))


newtonRaphson(x0,e,N)
