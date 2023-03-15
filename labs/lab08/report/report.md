---
## Front matter
title: "Лабораторная работа №8"
subtitle: "Текстовой редактор vi"
author: "Захаренко Анастасия Викторовна"

## Generic otions
lang: ru-RU
toc-title: "Содержание"

## Bibliography
bibliography: bib/cite.bib
csl: pandoc/csl/gost-r-7-0-5-2008-numeric.csl

## Pdf output format
toc: true # Table of contents
toc-depth: 2
lof: true # List of figures
lot: true # List of tables
fontsize: 12pt
linestretch: 1.5
papersize: a4
documentclass: scrreprt
## I18n polyglossia
polyglossia-lang:
  name: russian
  options:
	- spelling=modern
	- babelshorthands=true
polyglossia-otherlangs:
  name: english
## I18n babel
babel-lang: russian
babel-otherlangs: english
## Fonts
mainfont: PT Serif
romanfont: PT Serif
sansfont: PT Sans
monofont: PT Mono
mainfontoptions: Ligatures=TeX
romanfontoptions: Ligatures=TeX
sansfontoptions: Ligatures=TeX,Scale=MatchLowercase
monofontoptions: Scale=MatchLowercase,Scale=0.9
## Biblatex
biblatex: true
biblio-style: "gost-numeric"
biblatexoptions:
  - parentracker=true
  - backend=biber
  - hyperref=auto
  - language=auto
  - autolang=other*
  - citestyle=gost-numeric
## Pandoc-crossref LaTeX customization
figureTitle: "Рис."
tableTitle: "Таблица"
listingTitle: "Листинг"
lofTitle: "Список иллюстраций"
lotTitle: "Список таблиц"
lolTitle: "Листинги"
## Misc options
indent: true
header-includes:
  - \usepackage{indentfirst}
  - \usepackage{float} # keep figures where there are in the text
  - \floatplacement{figure}{H} # keep figures where there are in the text
---

# Цель работы

Познакомиться с операционной системой Linux. Получить практические навыки рабо-
ты с редактором vi, установленным по умолчанию практически во всех дистрибутивах

# Задание

1. Ознакомиться с теоретическим материалом.
2. Ознакомиться с редактором vi.
3. Выполнить упражнения, используя команды vi.

# Теоретическое введение

В большинстве дистрибутивов Linux в качестве текстового редактора по умолчанию
устанавливается интерактивный экранный редактор vi (Visual display editor).
Редактор vi имеет три режима работы:
– командный режим — предназначен для ввода команд редактирования и навигации по
редактируемому файлу;
– режим вставки — предназначен для ввода содержания редактируемого файла;
– режим последней (или командной) строки — используется для записи изменений в файл
и выхода из редактора.
Для вызова редактора vi необходимо указать команду vi и имя редактируемого файла:
vi <имя_файла>
При этом в случае отсутствия файла с указанным именем будет создан такой файл.
Переход в командный режим осуществляется нажатием клавиши Esc . Для выхода из
редактора vi необходимо перейти в режим последней строки: находясь в командном
режиме, нажать Shift-; (по сути символ : — двоеточие), затем:
– набрать символы wq, если перед выходом из редактора требуется записать изменения
в файл;
– набрать символ q (или q!), если требуется выйти из редактора без сохранения

# Выполнение лабораторной работы

Задание 1. Создание нового файла с использованием vi
1. Создаём каталог с именем ~/work/os/lab06.
2. Переходим во вновь созданный каталог.
3. Вызываем vi и создаем файл hello.sh
1 vi hello.sh
4. Нажимаем клавишу i и вводим следующий текст.
1 #!/bin/bash
2 HELL=Hello
3 function hello {
4 LOCAL HELLO=World
5 echo $HELLO
6 }
7 echo $HELLO
8 hello
5. Нажимаем клавишу Esc для перехода в командный режим после завершения ввода
текста.
6. Нажимаем ":" для перехода в режим последней строки и внизу вашего экрана появится приглашение в виде двоеточия.
7. Нажимаем w (записать) и q (выйти), а затем клавишу Enter для сохранения
нашего текста и завершения работы.
8. Сделаем файл исполняемым

![выполнение](image/1.png)

Задание 2. Редактирование существующего файла
1. Вызываем vi на редактирование файла
2. Установим курсор в конец слова HELL второй строки.
3. Перейдем в режим вставки и заменим на HELLO.
4. Установим курсор на четвертую строку и сотрем слово LOCAL.
5. Перейдем в режим вставки и наберем следующий текст: local
6. Установим курсор на последней строке файла. Вставим после неё строку, содержащую
следующий текст: echo $HELLO
7. Удалим последнюю строку.
9. Введем команду отмены изменений u для отмены последней команды.

![текст](image/2.png)

10. Введите символ : для перехода в режим последней строки. Запишите произведённые
изменения и выйдите из vi

![wq](image/4.png)

10. Введите символ : для перехода в режим последней строки. Запишите произведённые
изменения и выйдите из vi

![wq](image/4.png)

# Выводы
Я познакомилась с операционной системой Linux. Получла практические навыки рабо-
ты с редактором vi, установленным по умолчанию практически во всех дистрибутивах

# Список литературы{.unnumbered}

::: {#refs}
:::
