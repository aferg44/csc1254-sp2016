from sympy import *

init_printing()

print "Equation:"
x = Symbol('x')
eq = log(x)/x
pprint(eq)

print "\nLimits as x approaches 0 and infinity:" 
pprint(limit(eq, x, 0))
pprint(limit(eq, x, oo))

print "\nIntegral:"
pprint(integrate(eq, x))

print "\nSolution to eq=0:"
pprint(solve(eq, x))
