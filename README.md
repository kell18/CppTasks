CppTasks
========

__Репозиторий Бикеева Альберта по курсу паралелльного программирования 3 курса ИТИС КФУ.__


###Домашние задачи

####Домашка по OpenMP #1
Реализовать:
1. Поэлементное умножение двух векторов используя OpenMP

2. Сумму произведения элементов двух векторов используя OpenMP

3. Произведение двух матриц используя OpenMP


####Домашка по OpenMP #2
1) (Задание на повторение) Вычисление определенного интеграла c помощью квадратурных формул
а) методом левых прямоугольников
б) методом правых прямоугольников
в) методом центральных прямоугольников
все формулы вы можете найти в википедии
с клавиатуры задается a и b и количество отрезков N

2) Взять любую программу с первой лабораторной работы
и используя #pragma omp parallel for if() написать соответствующую программу
а) N>LIMIT где N вводится с клавиатуры, LIMIT это define переменная 100
б) Если N кратно 2 то область распараллеливается, иначе последовательный код

3) Используя управление распределением итераций цикла между потоками
используя schedule(<type>[, chunk])
в цикле в вектор записываем thread[i] = omp_get_thread_num();
а после выводим вне параллельной области в цикле эти значения то есть (Num thread = 1, i = 2)
и разобраться, где какие потоки 
а) schedule(static)
б) schedule(static, 4)
в) schedule(dynamic)
г) schedule(dynamic, 3)


####Домашка по OpenMP #3
1) Используя atomic задать матрицу размерности MxN и посчитать сумму элементов с условием, что: для чётных строк чётные элементы для нечётных строк нечётные

2) Используя критическую секцию, используя вектор посчитать максимальный элемент среди чётных и минимальный элемент среди нечётных индексов

3) Второе задание только с Lock

4) Использовать section, задана 2-мерная матрица - в первой секции вычислить среднее арифметическое, во второй секции - найти макс и мин элемент матрицы, в третей секции - вычислить количество элементов массива кратных трём.


####[Домашка по MPI #1](https://vk.com/doc76751256_335069851?hash=bba6aceb1075333853&dl=c9e52cf030550148ce)



####[Домашка по MPI #2](https://vk.com/doc76751256_336872924?hash=b5059ddee93753c596&dl=443262336fb357a915)


####[Домашка по MPI #3](https://vk.com/doc76751256_338642283?hash=d4be39846049b2f705&dl=ac865985bb21029686)


####[Домашка по CUDA #1](https://docviewer.yandex.ru/?url=ya-disk-public%3A%2F%2FKHApa3Eyfet%2BObY5zH8BivKcao8nKy0hQgOCJQJklQ0%3D&archive-path=%2F%2Fcuda%2FP1Cuda.pdf&name=cuda.rar%2F%2FP1Cuda.pdf&c=552f8b54f559)


####[Домашка по CUDA #2 (2 вариант)](https://docviewer.yandex.ru/?url=ya-disk-public%3A%2F%2FU6Jz5VYEiTzRWfOVcyoZz6xuyGsYr3hL1lfJiKyxMDM%3D&archive-path=%2F%2Fcuda2%2FCUDA_Practic2.pdf&name=cuda2.rar%2F%2FCUDA_Practic2.pdf&c=552f8ad599a2)