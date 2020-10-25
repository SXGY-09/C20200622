# C20200622
## p0622
+ `TwoSum` 给出一个整数数组，请在数组中找出两个加起来等于目标值的数
+ `MedianNumber` 有两个大小分别为m和n的有序数组A和B。请找出这两个数组的中位数。你需要给出时间复杂度在O(log (m+n))以内的算法。
+ `LongestSubstr` 给定一个字符串，找出最长的不具有重复字符的子串的长度。
+ `AddTwo` 给定两个代表非负数的链表，数字在链表中是反向存储的（链表头结点处的数字是个位数，第二个结点上的数字是十位数...），求这个两个数的和，结果也用链表表示。
+ `LongestPalindrome` 找出给出的字符串S中最长的回文子串。
+ `ZigZag` 将字符串转化为指定行数的Z字形字符串。
+ `ReverseInt` 将给出的整数x翻转。
+ `Str2Int` 将字符串转化为整数
+ `PalindromeInt` 在不使用额外的内存空间的条件下判断一个整数是否是回文
+ `RegexMatch` 实现支持'.'and'*'的通配符模式匹配。<br>
  '.' Matches any single character.<br>
  '*' Matches zero or more of the preceding element.<br>
  The matching should cover theentireinput string (not partial).
+ `RegexMatch2` 实现支持'?'and'*'.的通配符模式匹配。<br>
  '?' 可以匹配任何单个字符。'*' 可以匹配任何字符序列（包括空序列）。

## p0623
+ `MaxArea` 给定n个非负整数a1，a2，…，an，其中每个数字表示坐标(i, ai)处的一个点。<br>
  以（i，ai）和（i，0）（i=1,2,3...n）为端点画出n条直线。
  你可以从中选择两条线与x轴一起构成一个容器，最大的容器能装多少水？
+ `Int2Roman` 将给出的整数转化为罗马数字。保证输入数字的范围在1 到 3999之间。
+ `Roman2Int` 将给出的罗马数字转化为整数。保证输入的数字范围在1 到 3999之间。
+ `CommonPrefix` 查找字符串数组中的最长公共前缀。
+ `ThreeSum` 给出一个有n个元素的数组S，S中是否有元素a,b,c满足a+b+c=0？找出数组S中所有满足条件的三元组。
+ `ThreeSumClosest` 给出含有n个整数的数组s，找出s中和加起来的和最接近给定的目标值的三个整数。返回这三个整数的和。
+ `FourSum` 给出一个有n个元素的数组S，S中是否有元素a,b,c,d满足a+b+c+d=目标值？找出数组S中所有满足条件的四元组。
+ `LetterCombination` 给出一个仅包含数字的字符串，给出所有可能的字母组合。
+ `NthFromEnd` 给定一个链表，删除链表的倒数第n个节点并返回链表的头指针
+ `ParenthesisCheck` 给出一个仅包含字符'(',')','{','}','['和']',的字符串，判断给出的字符串是否是合法的括号序列
+ `ParenthesisGenerator` 给出n对括号，请编写一个函数来生成所有的由n对括号组成的合法组合。
+ `ParenthesisSubstring` 给出一个仅包含字符'('和')'的字符串，计算最长的格式正确的括号子串的长度。

## p0624
+ `MergeList` 合并k个已排序的链表并将其作为一个已排序的链表返回。分析并描述其复杂度。
+ `SwapNode` 将给定的链表中每两个相邻的节点交换一次，返回链表的头指针
+ `ReverseNode` 将给出的链表中的节点每k个一组翻转，返回翻转后的链表。如果链表中的节点数不是k的倍数，将最后剩下的节点保持原样
+ `RemoveDuplicate` 给定一个已排序的数组，使用就地算法将重复的数字移除，使数组中的每个元素只出现一次，返回新数组的长度。
+ `RemoveElement` 给定一个数组和一个值，使用就地算法将数组中所有等于这个值的元素删除，并返回新数组的长度。
+ `StrStr` 实现函数 strStr。
+ `DivideInt` 在不使用乘法运算符，除法运算符和取余运算符的情况下对两个数进行相除操作
+ `SubstringIndex` 给出一个字符串S和一组单词L，L中单词的长度都相等，找出S中的符合以下要求的子串在S中的起始位置索引：子串为L中所有单词串联在一起(单词的顺序随意)，L中的每个单词只出现一次，中间不能有其他的字符。
+ `PermutationNext` 将排列中的数字重新排列成字典序中的下一个更大的排列。
+ `PermutationAll` 给出一组数字，返回该组数字的所有排列；不考虑重复和考虑重复
+ `PermutationNum` 现在给出n和k，请返回0-n的第k个排列
+ `RotatedArray` 给出一个转动过的有序数组，你事先不知道该数组转动了多少。在数组中搜索给出的目标值，如果能在数组中找到，返回它的索引，否则返回-1。假设数组中不存在重复项。
+ `SearchRange` 给出一个有序数组，请在数组中找出目标值的起始位置和结束位置
+ `SearchInsert` 给出一个有序的数组和一个目标值，如果数组中存在该目标值，则返回该目标值的下标。如果数组中不存在该目标值，则返回如果将该目标值插入这个数组应该插入的位置的下标
+ `SudokuValid` 根据数独的规则Sudoku Puzzles - The Rules.判断给出的局面是不是一个符合规则的数独局面。数独盘面可以被部分填写，空的位置用字符'.'.表示
+ `SudokuSolve` 给数独中的剩余的空格填写上数字。空格用字符'.'表示。假设给定的数独只有唯一的解法
+ `CountAndSay` count-and-say数列的前几项如下：
  + 1, 11, 21, 1211, 111221, ...
  + 1读作“1个1”或11
  + 11读作“2个1“或者21
  + 21读作”1个2，1个1“或者1211
  
  给出一个整数n，请给出序列的第n项
+ `CombinationSum` 给出一组候选数C和一个目标数T，找出候选数中加起来和等于T的所有组合。C中的数字在组合中可以被无限次使用。所有的数字（包括目标数T）都是正整数
+ `CombinationSum2` 给出一组候选数C和一个目标数T，找出候选数中加起来和等于T的所有组合。C中的每个数字在一个组合中只能使用一次。所有的数字（包括目标数T）都是正整数
+ `MissingPositive` 给出一个无序的整数型数组，求不在给定数组里的最小的正整数

## p0626
+ `TrapWater` 给出n个数字，表示一个高程图，高程图中每一条的宽度为1，请计算下雨之后这个地形可以存储多少水
+ `StringMultiply` 给出两个用字符串表示的数字，将两个数字的乘积作为字符串返回。
+ `JumpGame` 给出一个非负整数数组，你最初在数组第一个元素的位置，数组中的元素代表你在这个位置可以跳跃的最大长度。你的目标是用最少的跳跃次数来到达数组的最后一个元素的位置
  判断你是否能到达数组最后一个元素的位置
+ `RotateImage` 给出一个用二维矩阵表示的图像。返回该图像顺时针旋转90度的结果。原地算法
+ `QueenPermutation` N皇后问题是把N个皇后放在一个N×N棋盘上，使皇后之间不会互相攻击。
+ `SubArray` 请计算给出的数组（至少含有一个数字）中具有最大和的子数组（子数组要求在原数组中连续）
+ `SpiralMatrix` 给定一个m x n大小的矩阵（m行，n列），按螺旋的顺序返回矩阵中的所有元素。<br>
  给定一个整数n，将数字1到n~2~按螺旋的顺序填入n×n的矩阵
+ `IntervalMerge` 给出一组区间，请合并所有重叠的区间。
+ `IntervalInsert` 给定一组不重叠的时间区间，在时间区间中插入一个新的时间区间(如果有重叠的话就合并区间)。这些时间区间初始是根据它们的开始时间排序的。
+ `UniquePath` 一个机器人在m×n大小的地图的左上角（起点，下图中的标记“start"的位置）。机器人每次向下或向右移动。机器人要到达地图的右下角。（终点，下图中的标记“Finish"的位置）。可以有多少种不同的路径从起点走到终点？<br>
  如果在图中加入了一些障碍，有多少不同的路径？

## p0711
+ `PathMin` 给定一个由非负整数填充的m x n的二维数组，现在要从二维数组的左上角走到右下角，请找出路径上的所有数字之和最小的路径。
+ `PathStairs` 你在爬楼梯，需要n步才能爬到楼梯顶部。每次你只能向上爬1步或者2步。有多少种方法可以爬到楼梯顶部？

## p0919
+ `MinDepth` 求给定二叉树的最小深度。最小深度是指树的根结点到最近叶子结点的最短路径上结点的数量。
+ `PostfixExp` 计算逆波兰式（后缀表达式）的值。运算符仅包含"+","-","*"和"/"，被操作数可能是整数或其他表达式
    > ["2", "1", "+", "3", "*"] -> ((2 + 1) * 3) -> 9<br>
    ["4", "13", "5", "/", "+"] -> (4 + (13 / 5)) -> 6
+ `PointsInOneLine` 对于给定的n个位于同一二维平面上的点，求最多能有多少个点位于同一直线上
+ `LinkedListSort` 在O(n log n)的时间内使用常数级空间复杂度对链表进行排序。
+ `InsertionSort` 使用插入排序对链表进行排序。
+ `PostorderTraversal` 求给定的二叉树的后序遍历。
+ `PreorderTraversal` 求给定的二叉树的前序遍历。
+ `ReorderList` 重排链表<br>
L(0),L(1)...L(n)-->L(0),L(n),L(1),L(n-1)...
+ `RetectCycle` 对于一个给定的链表，返回环的入口节点，如果没有环，返回null
+ `JudgeCycle` 判断给定的链表中是否有环
+ `WordBreak` 拆分词句
  + 给定一个字符串s和一组单词dict，判断s是否可以用空格分割成一个单词序列，使得单词序列中所有的单词都是dict中的单词（序列可以包含一个或多个单词）。
  + 给定一个字符串s和一组单词dict，在s中添加空格将s变成一个句子，使得句子中的每一个单词都是dict中的单词。返回所有可能的结果。
+ `CopyRandomList` 现在有一个这样的链表：链表的每一个节点都附加了一个随机指针，随机指针可能指向链表中的任意一个节点或者指向空。请对这个链表进行深拷贝。
+ `SingleNumber` 出现一次的数字
  + 现在有一个整数类型的数组，数组中素只有一个元素只出现一次，其余的元素都出现两次。
  + 现在有一个整数类型的数组，数组中只有一个元素只出现一次，其余元素都出现三次。你需要找出只出现一次的元素。

