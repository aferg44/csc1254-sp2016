from sympy import *

init_printing()

print "Equation:"
x = Symbol('x')
eq = sin(x)/x
pprint(eq)

print "\nLimits as x approaches 0 and infinity:" 
pprint(limit(eq, x, 0))
pprint(limit(eq, x, oo))

print "\nDerivative:"
pprint(diff(eq, x))

print "\nIntegral:"
pprint(integrate(eq, x))

print "\nSolution to eq=0:"
pprint(solve(eq, x))

print "\nSolution to eq=0:"
pprint(eq.series(x, 0, 5))
