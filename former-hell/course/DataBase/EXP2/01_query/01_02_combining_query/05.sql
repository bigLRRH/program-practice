USE [202111040656]
-- ⑤ 检索学号比 ZHAO 同学大，且年龄也比他大的学生姓名。 
SELECT SNAME
	FROM S
	WHERE S#>ALL
    (
        SELECT S#
        FROM S
		WHERE SNAME='ZHAO'
    ) 
    AND AGE>ALL
    (
        SELECT AGE
        FROM S
        WHERE SNAME='ZHAO'
    );
