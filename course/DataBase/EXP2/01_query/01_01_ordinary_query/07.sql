USE [202111040656]
-- ⑦ 检索全部学生都选修的课程的课程号与课程名。 
SELECT C#,CNAME
FROM C
WHERE NOT EXISTS
(
    SELECT *
    FROM S
    WHERE NOT EXISTS
    (
        SELECT *
        FROM SC
        WHERE SC.S# = S.S# AND SC.C# = C.C#
    )
);