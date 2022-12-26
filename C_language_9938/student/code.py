import clrprint

i_s = int(input("Enter start ord  : "))
j_s = int(input("Enter start ord  : "))
lenght = int(input("Enter lenght : "))
point = i_s+j_s;
point_me = 0;
n=point


for i in range(10):
	for j in range(10):
		if(point==i+j and i>=i_s and i<(i_s+lenght)):
			clrprint.clrprint(" ",i,",",j,end=" ",clr='r')
		else:
			print(" ",i,",",j,end=" ")
		point_me = point_me+2;

	print()