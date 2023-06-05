USE [202111040656]
-- ③ 求 LIU 老师所授课程的每门课程的平均成绩。 
SELECT AVG(SCORE)
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
GROUP BY C#;
--验证正确性
SELECT C.C# ,AVG(SCORE)
	FROM  SC,C,T
	WHERE SC.C#=C.C# AND C.T#=T.T# AND TNAME='LIU'
	GROUP BY C.C#;
