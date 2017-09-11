/* #FH #CC //z 17-07-14 14:58:07 L.170'32513 T2965614173.K.F3427031612+----+----+----+----+----+
+  0.FileInfo: +----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+
        File : E:\MyDoc\GitHub\Zds\ds\stl\algo\algo17.cpp.F3427031612-+----+----+----+----+----+
       Motto : No one can make you feel inferior without your consent.+----+----+----+----+----+
       Motto : The death of fear is in doing what you fear to do.+----+----+----+----+----+----+
       Motto : It's hard to beat a person who never gives up.----+----+----+----+----+----+----+
       Motto : Take what you do seriously. Not yourself.----+----+----+----+----+----+----+----+
       Motto : Life begins where your comfort zone ends.----+----+----+----+----+----+----+----+
       Motto : To know and not do, is not yet to know.-+----+----+----+----+----+----+----+----+
       Motto : The more you do , the more you can do.--+----+----+----+----+----+----+----+----+
       Motto : Do what you do best, better.--+----+----+----+----+----+----+----+----+----+----+
       Motto : Get Your Hands Dirty.----+----+----+----+----+----+----+----+----+----+----+----+
      Author : CopyRight (C) 2017 126.org@gmail.com (K->30,T5,M&M,W)--+----+----+----+----+----+

+  1.ID & Desc: ----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+

+  2.Req & Repro: --+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+

+  3.Folder & File: +----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+

+  4.Cause & Solution: --+----+----+----+----+----+----+----+----+----+----+----+----+----+----+

+  5.Todo & Done: --+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+

+  6.Commit: --+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+

+  7.Issue: ---+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+

+  8.Summary: -+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+

+  9.Misc: ----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+

***********************************************************************************************/

#region 07-14 R#.0    @Ver.Info
	   Zey_S : //z 17-07-14 14:58:07 L.170'32513 T2965614173.K ~0   --+----+----+----+----+----+
	  	R#
	  	znote
	   Zey_E : //z 17-07-14 14:58:07 L.170'32513 T2965614173.K ~0   --+----+----+----+----+----+
	   Zcl_S : //z 17-07-14 14:58:07 L.170'32513 T2965614173.K ~0   --+----+----+----+----+----+
	   Zcl_E : //z 17-07-14 14:58:07 L.170'32513 T2965614173.K ~0   --+----+----+----+----+----+
	  ZdoIdx : //z 17-07-14 16:26:02 L.170'27238 T1249953173.K ~1   --+----+----+----+----+----+
      KmtIdx : //z 17-09-08 10:06:24 L.114'50016 T2785725078.K ~6   --+----+----+----+----+----+
	 TimeCnt : //z 17-07-14 15:51:13 L.170'29327 T4256830612.K ~3   --+----+----+----+----+----+
     Reg.Cnt : //z 17-09-08 10:05:14 L.114'50086 T2785689108.K ~13  --+----+----+----+----+----+
	 File.Op : //z 17-07-14 14:58:07 L.170'32513 T2965614173.K ~0   --+----+----+----+----+----+
     Version : //z 17-09-11 16:40:32 L.111'26368 T3711962195.K ~386     R+.3    L+.324  --+----+
     #20  V+ : //z 17-09-08 10:14:21 L.114'49539 T2786839122.K ~380     R+.8    L+.556  
     #19  V+ : //z 17-09-08 10:09:52 L.114'49808 T2785832986.K ~361     R+.13   L+.787  
     #18  V+ : //z 17-09-08 10:06:23 L.114'50017 T2785725077.K ~342     R+.13   L+.732  
     #17  R+ : //z 17-09-08 10:05:14 L.114'50086 T2785689108.K ~336     R+.13   L+.720  V+.336  
	 #17  V+ : //z 17-07-14 16:44:18 L.170'26142 T1252253180.K ~323     R+.11   L+.134  
	 #16  V+ : //z 17-07-14 16:29:08 L.170'27052 T1250060990.K ~304     R+.12   L+.693  
	 #15  R+ : //z 17-07-14 16:27:50 L.170'27130 T1249989273.K ~285     R+.12   L+.642  V+.285  
	 #14  R+ : //z 17-07-14 16:25:53 L.170'27247 T1249917402.K ~268     R+.11   L+.141  V+.268  
	 #14  V+ : //z 17-07-14 16:25:49 L.170'27251 T1249917375.K ~266     R+.10   L+.118  
	 #13  R+ : //z 17-07-14 16:25:49 L.170'27251 T1249917375.K ~265     R+.10   L+.117  V+.265  
	 #13  V+ : //z 17-07-14 16:02:05 L.170'28675 T1247437586.K ~247     R+.9    L+.531  
	 #12  R+ : //z 17-07-14 16:00:44 L.170'28756 T1247365843.K ~236     R+.9    L+.522  V+.236  
	 #12  V+ : //z 17-07-14 15:59:24 L.170'28836 T4257118142.K ~228     R+.8    L+.471  
	 #11  R+ : //z 17-07-14 15:58:00 L.170'28920 T4257082135.K ~215     R+.8    L+.468  V+.215  
	 #11  V+ : //z 17-07-14 15:56:22 L.170'29018 T4257010329.K ~209     R+.7    L+.419  
	 #10  V+ : //z 17-07-14 15:51:49 L.170'29291 T4256830717.K ~190     R+.7    L+.429  
	 #9   R+ : //z 17-07-14 15:51:10 L.170'29330 T4256830609.K ~182     R+.7    L+.415  V+.182  
	 #9   V+ : //z 17-07-14 15:48:23 L.170'29497 T4255896283.K ~171     R+.6    L+.371  
	 #8   R+ : //z 17-07-14 15:48:14 L.170'29506 T4255896251.K ~168     R+.6    L+.370  V+.168  
	 #8   V+ : //z 17-07-14 15:44:58 L.170'29702 T4255752639.K ~152     R+.5    L+.303  
	 #7   R+ : //z 17-07-14 15:44:54 L.170'29706 T4255752635.K ~150     R+.5    L+.303  V+.150  
	 #7   V+ : //z 17-07-14 15:42:03 L.170'29877 T4255680595.K ~133     R+.4    L+.239  
	 #6   R+ : //z 17-07-14 15:41:47 L.170'29893 T4255644794.K ~128     R+.4    L+.236  V+.128  
	 #6   V+ : //z 17-07-14 15:32:11 L.170'30469 T4254494705.K ~114     R+.3    L+.224  
	 #5   V+ : //z 17-07-14 15:20:52 L.170'31148 T4253237043.K ~95      R+.3    L+.182  
	 #4   R+ : //z 17-07-14 15:19:58 L.170'31202 T4252374561.K ~87      R+.3    L+.177  V+.87   
	 #4   V+ : //z 17-07-14 15:18:28 L.170'31292 T4252338525.K ~76      R+.2    L+.146  
	 #3   R+ : //z 17-07-14 15:15:36 L.170'31464 T4252230745.K ~72      R+.2    L+.144  V+.72   
	 #3   V+ : //z 17-07-14 15:09:27 L.170'31833 T4251188540.K ~57      R+.1    L+.120  
	 #2   V+ : //z 17-07-14 15:05:52 L.170'32048 T4251044886.K ~38      R+.1    L+.83   
	 #1   V+ : //z 17-07-14 15:03:13 L.170'32207 T4250972881.K ~19      R+.1    L+.75   
	 #0   R+ : //z 17-07-14 14:58:13 L.170'32507 T2965614202.K ~5       R+.1    L+.64   V+.5    
	 Zndex_S : //z 17-07-14 14:58:07 L.170'32513 T2965614173.K ~0   --+----+----+----+----+----+
      L109,  1: 07-14 R#.10   @第2017年总结
      L143,  2: 07-14 R#.11   @第2017.07月总结
      L153,  3: 2017-07-14 todo zn#1 todo algo 算法 给了解一遍：功能；实现；例程。z%5 zsub 2017-07-14
      L154,  4: 2017-07-14 todo zn#1 todo algo 算法
      L168,  5: 07-14 R#.1    @lower_bound
      L245,  6: 07-14 R#.2    @upper_bound
      L276,  7: 07-14 R#.3    @equal_range
      L278,  8: 07-14 znote 使用时要求数组已排序。
      L331,  9: 07-14 R#.4    @is_partitioned
      L396, 10: 07-14 R#.5    @partition
      L461, 11: 07-14 R#.6    @reverse
      L504, 12: 07-14 R#.7    @reverse_copy
      L554, 13: 07-14 R#.8    @min_element max_element
      L606, 14: 07-14 R#.9    @binary_search
      L662, 15: 07-14 R#.12   @for_each
      L722, 16: 09-08 R#.13   @std::max_element min_element ，这里给出了max_element，min类似max
     Zndex_E : //z 17-09-11 16:40:32 L.111'26368 T3711962195.K ~373 --+----+----+----+----+----+
	 K   Ter : //z 17-07-14 14:58:07 L.170'32513 T2965614173.K ~0   --+----+----+----+----+----+
	 K  Mers : //z 17-07-14 14:58:07 L.170'32513 T2965614173.K ~0   --+----+----+----+----+----+
	 K Kersi : //z 17-07-14 14:58:07 L.170'32513 T2965614173.K ~0   --+----+----+----+----+----+
	 KVersio : //z 17-07-14 14:58:07 L.170'32513 T2965614173.K ~0   --+----+----+----+----+----+
	 K Versi : //z 17-07-14 14:58:07 L.170'32513 T2965614173.K ~0   --+----+----+----+----+----+
     K  Vers : //z 17-09-08 10:06:59 L.114'49981 T2785725182.K ~347     R+.13   L+.729  
	 K   Ver : //z 17-07-14 16:25:45 L.170'27255 T1249917371.K ~263     R+.0    L+.84
	 K    Ve : //z 17-07-14 15:44:01 L.170'29759 T4255752467.K ~149     R+.4    L+.258
	 K     V : //z 17-07-14 15:15:37 L.170'31463 T4252230746.K ~73      R+.2    L+.145
	 KaizenZ : //z 17-07-14 14:58:07 L.170'32513 T2965614173.K ~0   --+----+----+----+----+----+
#endregion #HE //z 2017-07-14 14:58:07 L.170'32513 BG57IV3 T2965614173.K.F3427031612-+----+----+

#region 07-14 R#.10   @第2017年总结
Year.Plan
01.
Year.Done
01.
Year.Kaizen
01.

M2017.01
01.
M2017.02
01.
M2017.03
01.
M2017.04
01.
M2017.05
01.
M2017.06
01.
M2017.07
01.
M2017.08
01.
M2017.09
01.
M2017.10
01.
M2017.11
01.
M2017.12
01.
#endregion //z 2017-07-14 16:25:49 L.170'27251 BG57IV3 T1249917375.K.F3427031612+----+----+----+

#region 07-14 R#.11   @第2017.07月总结
Month.Plan
01.
Month.Done
01.
Month.Kaizen
01.

W26，07-01[六] - 07-02[日]:2
01.
2017-07-14 todo zn#1 todo algo 算法 给了解一遍：功能；实现；例程。z%5 zsub 2017-07-14
2017-07-14 todo zn#1 todo algo 算法

W27，07-03[一] - 07-09[日]:7
01.
W28，07-10[一] - 07-16[日]:7
01.
W29，07-17[一] - 07-23[日]:7
01.
W30，07-24[一] - 07-30[日]:7
01.
W31，07-31[一] - 07-31[一]:1
01.
#endregion //z 2017-07-14 16:25:53 L.170'27247 BG57IV3 T1249917402.K.F3427031612+----+----+----+

#region 07-14 R#.1    @lower_bound
//z 2017-07-14 14:58:14 L.170'32506 T2965614203.K[T1,L63,R1,V7]
01. 返回下边界；所谓下边界就是不小于被比较值的值。
Return iterator to lower bound
Returns an iterator pointing to the first element in the range [first,last) which does not compare less than val.

返回的 iterator 指向的值可能可以等于 val 。
The elements are compared using operator< for the first version, and comp for the second. The elements in the range shall already be sorted according to this same criterion (operator< or comp), or at least partitioned with respect to val.

The function optimizes the number of comparisons performed by comparing non-consecutive elements of the sorted range, which is specially efficient for random-access iterators.

Unlike upper_bound, the value pointed by the iterator returned by this function may also be equivalent to val, and not only greater.

02. 可能的实现。
template <class ForwardIterator, class T>
ForwardIterator lower_bound (ForwardIterator first, ForwardIterator last, const T& val)
{
    ForwardIterator it;
    iterator_traits<ForwardIterator>::difference_type count, step;

    //k 2017-07-14 15:05 zn#1 计算两个iter之间的元素的量。
    count = distance(first,last);

    while (count>0)
    {
        it = first;
        step=count/2;
        advance (it,step);

        if (*it<val)                   // or: if (comp(*it,val)), for version (2)
        {
            first=++it;
            count-=step+1;
        }
        else
        {
            count=step;
        }
    }

    return first;
}

03. 实例
// lower_bound/upper_bound example
#include <iostream>     // std::cout
#include <algorithm>    // std::lower_bound, std::upper_bound, std::sort
#include <vector>       // std::vector

int main ()
{
    //k 2017-07-14 15:08 zn#2 使用数组初始化 vector
    int myints[] = {10,20,30,30,20,10,10,20};
    //k 2017-07-14 15:09 zn#3 其中8可以使用array_size之类的宏来替代掉
    std::vector<int> v(myints,myints+8);           // 10 20 30 30 20 10 10 20

    //k 2017-07-14 15:09 zn#4 对数组进行排序
    std::sort (v.begin(), v.end());                // 10 10 10 20 20 20 30 30

    std::vector<int>::iterator low,up;
    //k 2017-07-14 15:09 zn#5 找到 20 的下边界，不小于20的值
    low=std::lower_bound (v.begin(), v.end(), 20); //          ^
	//k 2017-09-08 10:11 zn#5 找到第一个大于20的值
    up= std::upper_bound (v.begin(), v.end(), 20); //                   ^

    std::cout << "lower_bound at position " << (low- v.begin()) << '\n';
    std::cout << "upper_bound at position " << (up - v.begin()) << '\n';

    return 0;
}
/*
output:
lower_bound at position 3
upper_bound at position 6
*/
#endregion //z 2017-07-14 14:58:13 L.170'32507 BG57IV3 T2965614202.K.F3427031612+----+----+----+

#region 07-14 R#.2    @upper_bound
01. 返回第一个大于被比较元素的iterator
Return iterator to upper bound
Returns an iterator pointing to the first element in the range [first,last) which compares greater than val.

02. 可能实现
template <class ForwardIterator, class T>
ForwardIterator upper_bound (ForwardIterator first, ForwardIterator last, const T& val)
{
    ForwardIterator it;
    iterator_traits<ForwardIterator>::difference_type count, step;
    count = std::distance(first,last);
    while (count>0)
    {
        it = first;
        step=count/2;
        std::advance (it,step);
        if (!(val<*it))                 // or: if (!comp(val,*it)), for version (2)
        {
            first=++it;
            count-=step+1;
        }
        else count=step;
    }
    return first;
}

03. eg.
见 lower_bound
#endregion //z 2017-07-14 15:15:36 L.170'31464 BG57IV3 T4252230745.K.F3427031612+----+----+----+

#region 07-14 R#.3    @equal_range
//z 2017-07-14 15:20:01 L.170'31199 T4253236877.K[T2,L176,R3,V89]
2017-07-14 znote 使用时要求数组已排序。

01.
Get subrange of equal elements
Returns the bounds of the subrange that includes all the elements of the range [first,last) with values equivalent to val.

02. 实现
template <class ForwardIterator, class T>
pair<ForwardIterator,ForwardIterator>
equal_range (ForwardIterator first, ForwardIterator last, const T& val)
{
    ForwardIterator it = std::lower_bound (first,last,val);
    return std::make_pair ( it, std::upper_bound(it,last,val) );
}

03. eg.
// equal_range example
#include <iostream>     // std::cout
#include <algorithm>    // std::equal_range, std::sort
#include <vector>       // std::vector

bool mygreater (int i,int j)
{
    return (i>j);
}

int main ()
{
    int myints[] = {10,20,30,30,20,10,10,20};
    std::vector<int> v(myints,myints+8);                         // 10 20 30 30 20 10 10 20
    std::pair<std::vector<int>::iterator,std::vector<int>::iterator> bounds;

    // using default comparison:
    std::sort (v.begin(), v.end());                              // 10 10 10 20 20 20 30 30
    bounds=std::equal_range (v.begin(), v.end(), 20);            //          ^        ^

    // using "mygreater" as comp:
    std::sort (v.begin(), v.end(), mygreater);                   // 30 30 20 20 20 10 10 10
    bounds=std::equal_range (v.begin(), v.end(), 20, mygreater); //       ^        ^

    std::cout << "bounds at positions " << (bounds.first - v.begin());
    std::cout << " and " << (bounds.second - v.begin()) << '\n';

    return 0;
}

/*
output:
bounds at positions 2 and 5
首先找到 lower_bound，第一个使得mygreater不为true的值，那么是20，然后找到第一个使得mygreater为true的值。
两者之间的事就equal的值。
*/
#endregion //z 2017-07-14 15:19:58 L.170'31202 BG57IV3 T4252374561.K.F3427031612+----+----+----+

#region 07-14 R#.4    @is_partitioned
01.
is_partitioned
Test whether range is partitioned
Returns true if all the elements in the range [first,last) for which pred returns true precede those for which it returns false.
    区间内的元素是否都按照pred进行了划分。划分的含义是：前面都返回true，后续元素没有或返回false。不会交叉。

02. 实现
template <class InputIterator, class UnaryPredicate>
bool is_partitioned (InputIterator first, InputIterator last, UnaryPredicate pred)
{
    while (first!=last && pred(*first))
    {
        ++first;
    }
    while (first!=last)
    {
        if (pred(*first)) return false;
        ++first;
    }
    return true;
}

03. eg.
// is_partitioned example
#include <iostream>     // std::cout
#include <algorithm>    // std::is_partitioned
#include <array>        // std::array

bool IsOdd (int i)
{
    return (i%2)==1;
}

int main ()
{
    std::array<int,7> foo {1,2,3,4,5,6,7};

    // print contents:
    std::cout << "foo:";
    for (int& x:foo) std::cout << ' ' << x;
    if ( std::is_partitioned(foo.begin(),foo.end(),IsOdd) )
        std::cout << " (partitioned)\n";
    else
        std::cout << " (not partitioned)\n";

    // partition array:
    std::partition (foo.begin(),foo.end(),IsOdd);

    // print contents again:
    std::cout << "foo:";
    for (int& x:foo) std::cout << ' ' << x;
    if ( std::is_partitioned(foo.begin(),foo.end(),IsOdd) )
        std::cout << " (partitioned)\n";
    else
        std::cout << " (not partitioned)\n";

    return 0;
}

Possible output:
foo: 1 2 3 4 5 6 7 (not partitioned)
foo: 1 7 3 5 4 6 2 (partitioned)
#endregion //z 2017-07-14 15:41:47 L.170'29893 BG57IV3 T4255644794.K.F3427031612+----+----+----+

#region 07-14 R#.5    @partition
01. 将一组元素分成两个部分：前面一组true；后面一组false。
Partition range in two
Rearranges the elements from the range [first,last), in such a way that all the elements for which pred returns true precede all those for which it returns false. The iterator returned points to the first element of the second group.

02. 实现
template <class BidirectionalIterator, class UnaryPredicate>
BidirectionalIterator partition (BidirectionalIterator first,
                                 BidirectionalIterator last, UnaryPredicate pred)
{
    while (first!=last)
    {
        while (pred(*first))
        {
            ++first;
            if (first==last) return first;
        }
        do
        {
            --last;
            if (first==last) return first;
        }
        while (!pred(*last));
        swap (*first,*last);
        ++first;
    }
    return first;
}

03. eg.
// partition algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::partition
#include <vector>       // std::vector

bool IsOdd (int i)
{
    return (i%2)==1;
}

int main ()
{
    std::vector<int> myvector;

    // set some values:
    for (int i=1; i<10; ++i) myvector.push_back(i); // 1 2 3 4 5 6 7 8 9

    std::vector<int>::iterator bound;
    bound = std::partition (myvector.begin(), myvector.end(), IsOdd);

    // print out content:
    std::cout << "odd elements:";
    for (std::vector<int>::iterator it=myvector.begin(); it!=bound; ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    std::cout << "even elements:";
    for (std::vector<int>::iterator it=bound; it!=myvector.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}
#endregion //z 2017-07-14 15:44:54 L.170'29706 BG57IV3 T4255752635.K.F3427031612+----+----+----+

#region 07-14 R#.6    @reverse
01. 将位于 first 和 last 之间的元素逆序。
Reverse range
Reverses the order of the elements in the range [first,last).

02. 实现
template <class BidirectionalIterator>
    void reverse (BidirectionalIterator first, BidirectionalIterator last)
{
    while ((first!=last)&&(first!=--last))
    {
        std::iter_swap (first,last);
        ++first;
    }
}

03.
// reverse algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::reverse
#include <vector>       // std::vector

int main ()
{
    std::vector<int> myvector;

    // set some values:
    for (int i=1; i<10; ++i) myvector.push_back(i);   // 1 2 3 4 5 6 7 8 9

    std::reverse(myvector.begin(),myvector.end());    // 9 8 7 6 5 4 3 2 1

    // print out content:
    std::cout << "myvector contains:";
    for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}

myvector contains: 9 8 7 6 5 4 3 2 1
#endregion //z 2017-07-14 15:48:14 L.170'29506 BG57IV3 T4255896251.K.F3427031612+----+----+----+

#region 07-14 R#.7    @reverse_copy
//z 2017-07-14 15:51:13 L.170'29327 T4256830612.K[T3,L414,R7,V184]
01. Copy range reversed
Copies the elements in the range [first,last) to the range beginning at result, but in reverse order.

1.1 将[first,last)区间内的元素的拷贝到 result。从后先前拷贝。result也是从后向前。

02. 实现
template <class BidirectionalIterator, class OutputIterator>
OutputIterator reverse_copy (BidirectionalIterator first,
                             BidirectionalIterator last, OutputIterator result)
{
    while (first!=last)
    {
        --last;
        *result = *last;
        ++result;
    }
    return result;
}

03. eg.
// reverse_copy example
#include <iostream>     // std::cout
#include <algorithm>    // std::reverse_copy
#include <vector>       // std::vector

int main ()
{
    int myints[] = {1,2,3,4,5,6,7,8,9};
    std::vector<int> myvector;

    myvector.resize(9);    // allocate space

    std::reverse_copy (myints, myints+9, myvector.begin());

    // print out content:
    std::cout << "myvector contains:";
    for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
        std::cout << ' ' << *it;

    std::cout << '\n';

    return 0;
}

Output:
myvector contains: 9 8 7 6 5 4 3 2 1
#endregion //z 2017-07-14 15:51:10 L.170'29330 BG57IV3 T4256830609.K.F3427031612+----+----+----+

#region 07-14 R#.8    @min_element max_element
01.
2017-09-08 10:14 发现这里记过一次，忘。
min_element 返回区间内的最小值
max_element 返回区间内的最大值

03. eg
// min_element/max_element example
#include <iostream>     // std::cout
#include <algorithm>    // std::min_element, std::max_element

bool myfn(int i, int j)
{
    return i<j;
}

struct myclass
{
    bool operator() (int i,int j)
    {
        return i<j;
    }
} myobj;

int main ()
{
    int myints[] = {3,7,2,5,6,4,9};

    // using default comparison:
    std::cout << "The smallest element is " << *std::min_element(myints,myints+7) << '\n';
    std::cout << "The largest element is "  << *std::max_element(myints,myints+7) << '\n';

    // using function myfn as comp:
    std::cout << "The smallest element is " << *std::min_element(myints,myints+7,myfn) << '\n';
    std::cout << "The largest element is "  << *std::max_element(myints,myints+7,myfn) << '\n';

    // using object myobj as comp:
    std::cout << "The smallest element is " << *std::min_element(myints,myints+7,myobj) << '\n';
    std::cout << "The largest element is "  << *std::max_element(myints,myints+7,myobj) << '\n';

    return 0;
}

04.
Output:
The smallest element is 2
The largest element is 9
The smallest element is 2
The largest element is 9
The smallest element is 2
The largest element is 9
#endregion //z 2017-07-14 15:58:00 L.170'28920 BG57IV3 T4257082135.K.F3427031612+----+----+----+

#region 07-14 R#.9    @binary_search
01. 二分查找。

02. 如果找到返回true，否则返回 false

02.1 可能实现
template <class ForwardIterator, class T>
bool binary_search (ForwardIterator first, ForwardIterator last, const T& val)
{
    //z 返回大于等于 val 的第一个值的位置
    first = std::lower_bound(first,last,val);
    //z 如果值已在最后或值大于val，说明没有找到该值，返回false。
    //z 否则返回 true， 说明在此期间存在该值
    return (first!=last && !(val<*first));
}

03. eg
// binary_search example
#include <iostream>     // std::cout
#include <algorithm>    // std::binary_search, std::sort
#include <vector>       // std::vector

bool myfunction (int i,int j)
{
    return (i<j);
}

int main ()
{
    int myints[] = {1,2,3,4,5,4,3,2,1};
    std::vector<int> v(myints,myints+9);                         // 1 2 3 4 5 4 3 2 1

    // using default comparison:
    std::sort (v.begin(), v.end());

    std::cout << "looking for a 3... ";
    if (std::binary_search (v.begin(), v.end(), 3))
        std::cout << "found!\n";
    else std::cout << "not found.\n";

    // using myfunction as comp:
    std::sort (v.begin(), v.end(), myfunction);

    std::cout << "looking for a 6... ";
    if (std::binary_search (v.begin(), v.end(), 6, myfunction))
        std::cout << "found!\n";
    else std::cout << "not found.\n";

    return 0;
}

Output:
looking for a 3... found!
looking for a 6... not found.
#endregion //z 2017-07-14 16:00:44 L.170'28756 BG57IV3 T1247365843.K.F3427031612+----+----+----+

#region 07-14 R#.12   @for_each
01. 将函数 fn 应用到区间的每个元素。
Applies function fn to each of the elements in the range [first,last).

02. 实现
template<class InputIterator, class Function>
Function for_each(InputIterator first, InputIterator last, Function fn)
{
    while (first!=last)
    {
        fn (*first);
        ++first;
    }
    return fn;      // or, since C++11: return move(fn);
}

03. eg
// for_each example
#include <iostream>     // std::cout
#include <algorithm>    // std::for_each
#include <vector>       // std::vector

void myfunction (int i)    // function:
{
    std::cout << ' ' << i;
}

struct myclass             // function object type:
{
    void operator() (int i)
    {
        std::cout << ' ' << i;
    }
} myobject;

int main ()
{
    std::vector<int> myvector;

    myvector.push_back(10);
    myvector.push_back(20);
    myvector.push_back(30);

    std::cout << "myvector contains:";
    for_each (myvector.begin(), myvector.end(), myfunction);
    std::cout << '\n';

    // or:
    std::cout << "myvector contains:";
    for_each (myvector.begin(), myvector.end(), myobject);
    std::cout << '\n';

    return 0;
}

Output:
myvector contains: 10 20 30
myvector contains: 10 20 30
#endregion //z 2017-07-14 16:27:50 L.170'27130 BG57IV3 T1249989273.K.F3427031612+----+----+----+

#region 09-08 R#.13   @std::max_element min_element ，这里给出了max_element，min类似max
01. 
function template
<algorithm>

std::max_element

default (1)	
template <class ForwardIterator>
  ForwardIterator max_element (ForwardIterator first, ForwardIterator last);
custom (2)
template <class ForwardIterator, class Compare>
  ForwardIterator max_element (ForwardIterator first, ForwardIterator last,
                               Compare comp);

//k 2017-09-08 10:06 zn#6 找出区间的最大元素。
Return largest element in range
Returns an iterator pointing to the element with the largest value in the range [first,last).

The comparisons are performed using either operator< for the first version, or comp for the second; An element is the largest if no other element does not compare less than it. If more than one element fulfills this condition, the iterator returned points to the first of such elements.

The behavior of this function template is equivalent to:
template <class ForwardIterator>
  ForwardIterator max_element ( ForwardIterator first, ForwardIterator last )
{
  if (first==last) return last;
  ForwardIterator largest = first;

  while (++first!=last)
    if (*largest<*first)    // or: if (comp(*largest,*first)) for version (2)
      largest=first;
  return largest;
}

Parameters
first, last
Input iterators to the initial and final positions of the sequence to compare. The range used is [first,last), which contains all the elements between first and last, including the element pointed by first but not the element pointed by last.

comp
Binary function that accepts two elements in the range as arguments, and returns a value convertible to bool. The value returned indicates whether the element passed as first argument is considered less than the second.
The function shall not modify any of its arguments.
This can either be a function pointer or a function object.

Return value
An iterator to largest value in the range, or last if the range is empty.

Example
// min_element/max_element example
#include <iostream>     // std::cout
#include <algorithm>    // std::min_element, std::max_element

bool myfn(int i, int j)
{
    return i<j;
}

struct myclass
{
    bool operator() (int i,int j)
    {
        return i<j;
    }
} myobj;

int main ()
{
    int myints[] = {3,7,2,5,6,4,9};

	//k 2017-09-08 10:09 zn#6 使用默认函数
    // using default comparison:
    std::cout << "The smallest element is " << *std::min_element(myints,myints+7) << '\n';
    std::cout << "The largest element is "  << *std::max_element(myints,myints+7) << '\n';

	//k 2017-09-08 10:09 zn#6 使用函数作为比较函数
    // using function myfn as comp:
    std::cout << "The smallest element is " << *std::min_element(myints,myints+7,myfn) << '\n';
    std::cout << "The largest element is "  << *std::max_element(myints,myints+7,myfn) << '\n';

	//k 2017-09-08 10:09 zn#6 使用仿函数作为比较函数
    // using object myobj as comp:
    std::cout << "The smallest element is " << *std::min_element(myints,myints+7,myobj) << '\n';
    std::cout << "The largest element is "  << *std::max_element(myints,myints+7,myobj) << '\n';

    return 0;
}
Edit & Run

Output:
The smallest element is 2
The largest element is 9
The smallest element is 2
The largest element is 9
The smallest element is 2
The largest element is 9
#endregion //z 2017-09-08 10:05:14 L.114'50086 BG57IV3 T2785689108.K.F655786715 +----+----+----+
