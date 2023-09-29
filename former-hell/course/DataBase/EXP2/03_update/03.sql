USE [202111040656]
-- ③ 将选 LIU 老师所授课的全体学生的成绩置零。 
UPDATE SC
SET SCORE = 0
WHERE S# IN 
(
    SELECT DISTINCT S#
    FROM SC
    WHERE C# IN 
    (
        SELECT C#
        FROM C
        WHERE T# IN
        (
            SELECT T#
            FROM T
            WHERE TNAME = 'LIU'
        )
    )
);