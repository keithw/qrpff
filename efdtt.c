#include <unistd.h>
#define K(i) (k[i]^s[i+84])
u_int r(u_int);int main(){u_char*x="\331\231\321\0I\tA\220&\6\202\0$\4\200\2",y
=0,z,t[256],k[5],s[2048];do z=x[y&7]^x[y>>4|8]^(y/8&17)*11&161,t[y]=z^(z&z*2&34
)*6;while(++y);read(0,k,5);while(read(0,s,2048)){if(s[20]&48){u_int a=r(K(1)<<9
^256^K(0))>>15,b=r((K(4)<<17^K(3)<<9^K(2)*2)+8-(K(2)&7))>>7,c=0,i=128;for(;i<
2048;i++){y=a^a>>14;y^=y*8^y<<6;z=b^b/8^b>>4^b>>12;a=a>>8|y<<9;b=b>>8|z<<17;s[i
]=t[s[i]]^z+c+~y;c=z+c>y;}s[20]&=143;}write(1,s,2048);}}
