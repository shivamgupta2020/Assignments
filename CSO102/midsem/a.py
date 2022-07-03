
import numpy as np 
def signfn(ix,vx):
	if ix<0:
		print(f"the current through battery {vx} is {ix} and is consuming power : {vx*ix}")
	else :
		print(f"the current through battery {vx} is {ix} and is supplying power : {vx*ix}")

def all_cr_values(m1,m2):
	my=np.linalg.inv(m1)
	mx=np.dot(my,m2)
	return mx 
print("enter last three digits of your goddamn roll number:")

x=int(input())
# for x in range(1,200):
m1=np.array([[1,-1,0,0,-1,0],[1,0,-1,0,0,-1],[0,1,-1,-1,0,0],[0,3,0,0,-7,0],[0,0,-3,0,0,2],[x,3,6,0,0,0]])
m2=np.array([[0],[0],[0],[-4],[8],[10]])

m3=np.linalg.inv(m1)
print("we are solving equation of the form Ax=B from the classes of linear algebra")
print("the matrix A is:")
print(m1)
print("the matrix B is:")
print(m2)
print("the A^-1 is:")
print(m3)
m4=np.dot(m3,m2)
# print(m4)
print("the answer for part (iv)")
print(f"the answer for roll {x} is as follows from I1 to I6 is as follows:")
print(m4)
ia=m4[0]
ib=m4[4]
ic=m4[5]
print("the answer for part (iii) is:")
print(f"THE VALUE OF Ia IS : {m4[0]}")
print(f"THE VALUE OF Ib IS : {m4[4]}")
print(f"THE VALUE OF Ic IS : {m4[5]}")
print("the answer for part (ix): ")
print(f"the power consumed by r1 is : {m4[0]*x*m4[0]}")
print(f"the power consumed by r2 is : {2*m4[4]*m4[4]}")
print(f"the power consumed by r3 is : {3*m4[1]*m4[1]}")
print(f"the power consumed by r4 is : {4*m4[5]*m4[5]}")
print(f"the power consumed by r5 is : {5*m4[4]*m4[4]}")
print(f"the power consumed by r6 is : {6*m4[2]*m4[2]}")
signfn(ia,10)
signfn(-m4[3],4)
signfn(m4[5],20)
v3=10
v1=4
v2=20
print(f"the total power supply is: {ia*10+20*m4[5]+4*(-m4[3])}")
# i_all=all_cr_values(m1,m2)
# print(i_all)
r3=3
r6=6
r5=5
r2=2
r4=4
v1=4
v2=20
v3=10
final_mx=np.array([[1,-1,0,0,-1,0],[0,1,-1,-1,0,0],[1,0,-1,0,0,-1],[0,r3,0,0,-(r2+r5),0],[0,0,r6,0,0,-r4],[x,r3,r6,0,0,0]])
v1=0
v2=0
final_my=np.array([[0],[0],[0],[-v1],[v1-v2],[v3]])
final_ans1=all_cr_values(final_mx,final_my)[0]
v1=0
v3=0
v2=20
final_my=np.array([[0],[0],[0],[-v1],[v1-v2],[v3]])
final_ans2=all_cr_values(final_mx,final_my)[0]
v1=4
v2=0
v3=0
final_my=np.array([[0],[0],[0],[-v1],[v1-v2],[v3]])
final_ans3=all_cr_values(final_mx,final_my)[0]
print("the answer for part (vi) is: ")
print("the value of ia_1:")
print(final_ans1)
print("the value of ic_1:")
print(final_ans2)
print("the value of ib_1:")
print(final_ans3)

print("for part (ix) will be calculated through summing all values from part (ix) and equating it to the line of power supply output line ")
print("THIS FILE IS CREATED BY THE BRANCH CSE FOR QUESTION ONE OF THE EO EXAM")