@echo off

md semestr1 1>nul 2>nul

md semestr1\algem 1>nul 2>nul
echo практика - Ведякова А.О > semestr1\algem\readme.txt
echo теория - Погожев С.В >> semestr1\algem\readme.txt
echo начало занятий: %DATE% >> semestr1\algem\readme.txt

md semestr1\matan 1>nul 2>nul
echo практика - Евстафьева В.В > semestr1\matan\readme.txt
echo теория - Платонов А.В >> semestr1\matan\readme.txt
echo начало занятий: %DATE% >> semestr1\matan\readme.txt

md semestr1\op 1>nul 2>nul
echo теория - Погожев С.В > semestr1\op\readme.txt
echo начало занятий: %DATE% >> semestr1\op\readme.txt

md semestr1\dm 1>nul 2>nul
echo практика - Максимов А.Ю > semestr1\dm\readme.txt
echo теория - Погожев С.В >> semestr1\dm\readme.txt
echo начало занятий: %DATE% >> semestr1\dm\readme.txt