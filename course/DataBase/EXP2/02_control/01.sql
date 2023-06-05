USE [202111040656]
-- ① 修改 S 中的约束条件，性别只能取值 M 和 F。 
-- 用实验验证当操作违反了完整性约束时，系统如何处理？ 
-- 如：在 S 中插入一条记录，性别写其他字符。 
ALTER TABLE S 
ADD CONSTRAINT C_SEX CHECK (SEX IN ('M','F'));
--实验
INSERT INTO S
VALUES
	('S12', 'SHUI', 23, 'A');