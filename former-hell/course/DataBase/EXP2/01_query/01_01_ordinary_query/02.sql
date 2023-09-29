use [202111040656]
-- ② 检索女学生所学课程的课程名与课程号。 
SELECT CNAME,C#
FROM C
WHERE C# IN
(
    SELECT DISTINCT C#
    FROM SC
    WHERE S# IN
    (
        SELECT S#
        FROM S
        WHERE SEX = 'F'
    )
);
--验证正确性
SELECT DISTINCT CNAME,C.C#
FROM C,SC,S
WHERE S.SEX = 'F' AND SC.S# = S.S# AND C.C#=SC.C#;