@echo off

md semestr1 1>nul 2>nul

md semestr1\algem 1>nul 2>nul
echo �������� - �������� �.� > semestr1\algem\readme.txt
echo ������ - ������� �.� >> semestr1\algem\readme.txt
echo ������ �������: %DATE% >> semestr1\algem\readme.txt

md semestr1\matan 1>nul 2>nul
echo �������� - ���������� �.� > semestr1\matan\readme.txt
echo ������ - �������� �.� >> semestr1\matan\readme.txt
echo ������ �������: %DATE% >> semestr1\matan\readme.txt

md semestr1\op 1>nul 2>nul
echo ������ - ������� �.� > semestr1\op\readme.txt
echo ������ �������: %DATE% >> semestr1\op\readme.txt

md semestr1\dm 1>nul 2>nul
echo �������� - �������� �.� > semestr1\dm\readme.txt
echo ������ - ������� �.� >> semestr1\dm\readme.txt
echo ������ �������: %DATE% >> semestr1\dm\readme.txt