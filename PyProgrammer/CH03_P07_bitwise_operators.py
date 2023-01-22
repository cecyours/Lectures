
a = 25
b = 12

# bitwise AND &
# 17 : 0001 1001
# 12 : 0000 1100
# &---------------
#      0000 1000 => 8
#
c = a&b
print(a,"&",b,"=",c)

# bitwise OR |
# 17 : 0001 1001
# 12 : 0000 1100
# |---------------
#      0001 1101 => 29
#
c = a|b
print(a,"|",b,"=",c)


# Bitwise Xor : ^
# same -> 0, diff = 1
#  17 : 0001 1001
#  12 : 0000 1100
# &---------------
#       0001 0101 => 21
#
c = a^b
print(a,"^",b,"=",c)

# Bitwise nagation ~
# c = -(a+1)
#   = - (25+1)
#   = -(26)
#   = -26
#
c = ~a
print("~",a,"=",c)

a = 4
b = 2

# Bitwise left shift : <<
# c = a*2^b
# c = 4*2^2
# c = 4*4
# c = 16

#
c = a<<b
print(a,"<<",b,"=",c)

# Bitwise right shift : >>
# c = a/2^b
# c = 4/2^2
# c = 4/4
# c = 1 

#
c = a>>b
print(a,">>",b,"=",c)






