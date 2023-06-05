USE [202111040656]
-- ⑧ 求年龄小于男同学平均年龄的女学生姓名和年龄。 
SELECT SNAME,AGE
FROM S
WHERE SEX = 'F' AND AGE<
(
    SELECT AVG(AGE)
    FROM S
    WHERE SEX = 'M'
);