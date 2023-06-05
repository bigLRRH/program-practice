use [202111040656]
-- ③ 检索男学生所学课程的任课教师的工号和姓名。 
SELECT DISTINCT T#,TNAME
FROM T
WHERE T# IN
(
    SELECT T#
    FROM C
    WHERE C# IN
    (
        SELECT DISTINCT C#
        FROM SC
        WHERE S# IN
        (
            SELECT S#
            FROM S
            WHERE SEX = 'M'
        )
    )
);
--验证正确性
SELECT DISTINCT T.T#,TNAME
FROM T,C,SC,S
WHERE S.SEX = 'M' AND SC.S#=S.S# AND C.C#=SC.C# AND T.T#=C.T#;