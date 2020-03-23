/*Time Limit: 1000 ms
Memory Limit: 256 mb
喜欢数学的Lucy经常向哥哥LF请教一些题目，哥哥总能很快就帮她解决。这不，Lucy又有难题要请教哥哥了Lucy的难题。

Lucy的难题是有关翻转数的：

翻转数就是把一个数的所有数字以相反顺序写出来，即原来的第一个数字成为最后一个，而原来的最后一个则成为第一个。我们把未翻转的数称为翻转数的原数。
例 如：6789的翻转数是9876，而6789就是9876的原数。
你一定注意到了，一个翻转数的原数可以有很多个，例如18的原数可以是81、810、8100等等。因此我们假定：通过翻转数求原数时，所求得的原数的个 位不为零。即18的原数就是81。
Lucy现在给出2个翻转数A、B。
这两个翻转数各自对应的原数是C、D，C 与D的和为 S ，Lucy想知道 S是多少？*/
#include <stdio.h>
int reverse(int x);//函数声明 
int main(){
	int a,b;
	while((scanf("%d %d",&a,&b))!=EOF){
		int s = reverse(a) + reverse(b); 
		printf("%d\n",s);
	} 
	
	return 0;
}

int reverse(int x){//实现翻转函数 
	int result = 0;
	while(x){
		result = result * 10 + x % 10; //x%10表示取个位 
		x /= 10;//表示舍去个位 
	}
	return result;
} 
