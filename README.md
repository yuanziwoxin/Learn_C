# Learn_C
It's  the code  of Learning C  language.

# File Catalog 

[TOC]
## Pointer（指针部分练习代码）
* [Pointer_1](#Pointer_1):输入a和b两个整数，按先大后小的顺序输出a和b;
  * 方法一：利用改变指针变量的值来实现（即改变指针的指向）;
  * 方法二：利用交换指针变量指向的变量值（即交换a和b的值）;
  * 方法三：通过执行调用函数来改变实参指针变量所指向变量的值，从而实现a和b的值交换;
* [Pointer_2](#Pointer_2):输入3个整数a,b,c,要求按照从小到大的顺序输出，利用函数的形式;
* [Pointer_3](#Pointer_3):输出一个拥有10个元素的整形数组的全部元素。 
  * 方法一：利用数组下标的方式访问数组元素;
  * 方法二：通过计算数组名计算数组元素地址，从而找出元素的值;
  * 方法三：利用指针变量指向数组元素的方式访问数组元素 （这样不必每次都重新计算地址）;
* [Pointer_4](#Pointer_4):将数组a中n个整数按相反顺序存放.(两头的元素相互交换)
  * 方法一：用数组名作函数参数; 
  * 方法二：用指针变量作形参;
* [Pointer_5](#Pointer_5):用指针方法对10个整数按从小到大顺序排序。 (使用选择排序法)
* [Pointer_6](#Pointer_6):输出二维数组中的有关数据（地址和值）。 （通过指针和数组名引用二维数组的各种表示方式。 ）
* [Pointer_7](#Pointer_7):指向多维数组元素的指针变量
  * （1）指向数组元素的指针变量;
  * （2）**指向m个元素组成的一维数组的指针变量**;如 int (\*p)\[m\];
  * （3）一个需要注意的地方;
* [Pointer_8](#Pointer_8): 查找一门以上课程不及格的学生，并输出他们的全部课程的成绩。
* [Pointer_9](#Pointer_9): 将字符串a复制到字符串，然后输出字符串.
  * 方法一： 使用**下标法**对字符串中字符进行存取;
  * 方法二：使用**指针方法**对字符串中字符进行存取；
* [Pointer_10](#Pointer_10): 用函数调用实现字符串的复制.
  * 方法一：形参和实参都是字符数组名;
  * 方法二：形参和实参都是字符指针变量;
  * 方法三：字符型指针变量作实参，字符数组名作形参;
  * 方法四： 字符数组名作实参，字符型指针变量作形参;
* [Pointer_11](#Pointer_11): 函数调用.
  * 方法一：通过函数名调用函数;
  * 方法二：通过**函数指针变量**调用函数;函数指针变量如 int （\*p）(int x,int y);
* [Pointer_12](#Pointer_12):有两个整数a和b,由用户输入1,2或3.如输入1，程序就给出a和b中较小者；如果输入2，程序就输出a和b中较大者；如输入3，就输出a和b两者的和。 （**功能模块化思想**）
  * 方法一：定义了一个指向函数的指针变量p,根据不同情况，使p指向不同的函数，然后通过该指针变量调用不同的函数
  * 方法二：没有定义指针变量，而是根据不同情况，将不同的函数名作为调用fun函数的实参。
           即把函数入口地址（函数名）传递给函数fun中的形参（该形参是指向函数的指针变量），调用fun函数就分别执行不同的函数。 
* [Pointer_13](#Pointer_13): 有a个学生，每个学生有b门课程的成绩。要求在用户输入学生序号以后，能输出该学生的全部成绩。用指针函数来实现。 
* [Pointer_14](#Pointer_14): 有a个学生，每个学生有b门课程的成绩。（**很不错的例子**）
  *  (1) 要求在用户输入学生序号以后，能输出该学生的全部成绩。用指针函数来实现;
  *  (2) 从其中的学生中，找出其中有不及格课程的学生及其学生号;(法一)
* [Pointer_15](#Pointer_15): 有a个学生，每个学生有b门课程的成绩。 从其中的学生中，找出其中有不及格课程的学生及其学生号。 (相对于Pointer_14的另一种方法，即法二) 
* [Pointer_16](#Pointer_16): 将若干字符串按字母顺序（从小到大）输出。利用**指针数组**的方法。
