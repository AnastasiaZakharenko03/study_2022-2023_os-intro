---
## Front matter
lang: ru-RU
title: Лабораторная работа №9
subtitle: Текстовой редактор emacs
author:
  - Захаренко А.В.
institute:
  - Российский университет дружбы народов, Москва, Россия
date: 16.03.2023

## i18n babel
babel-lang: russian
babel-otherlangs: english

## Formatting pdf
toc: false
toc-title: Содержание
slide_level: 2
aspectratio: 169
section-titles: true
theme: metropolis
header-includes:
 - \metroset{progressbar=frametitle,sectionpage=progressbar,numbering=fraction}
 - '\makeatletter'
 - '\beamer@ignorenonframefalse'
 - '\makeatother'
---

# Информация

## Докладчик

:::::::::::::: {.columns align=center}
::: {.column width="70%"}

  * Захаренко Анастасия Викторовна
  * студентка первого курса бакалавриата
  * направление бизнес-информатика, факультет физико-математических и естественных наук
  * Российский университет дружбы народов

:::
::: {.column width="30%"}



:::
::::::::::::::


# Элементы презентации

## Актуальность

Познакомиться с операционной системой Linux. Получить практические навыки рабо-
ты с редактором Emacs

## Цели и задачи

1. Ознакомиться с теоретическим материалом.
2. Ознакомиться с редактором emacs.
3. Выполнить упражнения.

## Материалы и методы

Определение 1. Буфер — объект, представляющий какой-либо текст.
Буфер может содержать что угодно, например, результаты компиляции программы
или встроенные подсказки. Практически всё взаимодействие с пользователем, в том
числе интерактивное, происходит посредством буферов.
Определение 2. Фрейм соответствует окну в обычном понимании этого слова. Каждый
фрейм содержит область вывода и одно или несколько окон Emacs.

##

Определение 3. Окно — прямоугольная область фрейма, отображающая один из буфе-
ров.
Каждое окно имеет свою строку состояния, в которой выводится следующая информа-
ция: название буфера, его основной режим, изменялся ли текст буфера и как далеко вниз
по буферу расположен курсор. Каждый буфер находится только в одном из возможных
основных режимов. Существующие основные режимы включают режим Fundamental
(наименее специализированный), режим Text, режим Lisp, режим С, режим Texinfo
и другие. Под второстепенными режимами понимается список режимов, которые вклю-
чены в данный момент в буфере выбранного окна.

##

Определение 4. Область вывода — одна или несколько строк внизу фрейма, в которой
Emacs выводит различные сообщения, а также запрашивает подтверждения и дополни-
тельную информацию от пользователя.
Определение 5. Минибуфер используется для ввода дополнительной информации и все-
гда отображается в области вывода.
Определение 6. Точка вставки — место вставки (удаления) данных в буфере.

## Содержание исследования

1. Открываем emacs.

![выполнение1](image/1.png)

##

![выполнение2](image/2.png)

##

2. Создаем файл lab07.sh с помощью комбинации Ctrl-x Ctrl-f (C-x C-f).
3. Набираем текст:
1 #!/bin/bash
2 HELL=Hello
3 function hello {
4 LOCAL HELLO=World
5 echo $HELLO
6 }
7 echo $HELLO
8 hello

##

4. Сохранить файл с помощью комбинации Ctrl-x Ctrl-s (C-x C-s).

![lab07.sh](image/3.png)

##

5. Проделать с текстом стандартные процедуры редактирования, каждое действие долж-
но осуществляться комбинацией клавиш.
5.1. Вырезать одной командой целую строку (С-k).
5.2. Вставить эту строку в конец файла (C-y).
5.3. Выделить область текста (C-space).
5.4. Скопировать область в буфер обмена (M-w).
5.5. Вставить область в конец файла.
5.6. Вновь выделить эту область и на этот раз вырезать её (C-w).
5.7. Отмените последнее действие (C-/).

##

![редактирование1](image/4.png)

##

6. Управление буферами.
6.1. Вывести список активных буферов на экран (C-x C-b)

![управление буферами1](image/5.png)

##

6.2. Переместитесь во вновь открытое окно (C-x) o со списком открытых буферов
и переключитесь на другой буфер.

![управление буферами2](image/6.png)

##

6.3. Закройте это окно (C-x 0).
6.4. Теперь вновь переключайтесь между буферами, но уже без вывода их списка на
экран (C-x b).

![управление буферами3](image/7.png)

##

7. Управление окнами.
7.1. Поделите фрейм на 4 части: разделите фрейм на два окна по вертикали (C-x 3),
а затем каждое из этих окон на две части по горизонтали (C-x 2) 

![управление окнами](image/8.png)

##

8. Режим поиска
8.1. Переключитесь в режим поиска (C-s) и найдите несколько слов, присутствующих
в тексте.

![поиск1](image/9.png)

##

![поиск2](image/10.png)

##

8.2. Переключайтесь между результатами поиска, нажимая C-s.

![поиск3](image/11.png)

##

![поиск4](image/12.png)

##

8.3. Выйдите из режима поиска, нажав C-g.

![поиск5](image/13.png)

##

8.4. Испробуйте другой режим поиска, нажав M-s o. 

![поиск6](image/14.png)

## Результаты

Я познакомилась с операционной системой Linux. Получла практические навыки рабо-
ты с редактором Emacs



