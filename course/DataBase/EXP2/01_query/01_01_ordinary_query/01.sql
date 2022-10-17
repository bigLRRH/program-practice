use [202111040656]
-- ① 检索年龄小于 20 岁的女学生的学号和姓名。 
SELECT S#,SNAME
FROM S
WHERE AGE< 20 AND SEX = 'F';