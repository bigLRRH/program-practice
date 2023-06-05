USE [202111040656]
-- ⑧ 检索选修课程包含 ZHOU 老师所授课程的学生学号。（选修至少 1 门 ZHOU 老师的课） 
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
        WHERE TNAME = 'ZHOU'
    )
);
--包含ZHOU老师的全部课程
SELECT  DISTINCT  S#
FROM  SC  AS  X
WHERE  NOT  EXISTS
(
    SELECT  *
    FROM  C, T
    WHERE  TNAME='ZHOU' AND C.T#=T.T# AND NOT EXISTS
    (
        SELECT  *
		FROM  SC  AS  Y
		WHERE  Y.S#=X.S#  AND  Y.C#=C.C#
    )
);