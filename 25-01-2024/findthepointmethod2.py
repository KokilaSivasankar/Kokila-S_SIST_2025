n=int(input())
for i in range(n):
    px,py,qx,qy=map(int,input().split())
    print(2*qx-px,2*qy-py)
