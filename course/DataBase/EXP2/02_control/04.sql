USE [202111040656]
-- ④ 修改 SC 中的约束条件，成绩在 0-120 之间。 
-- 用实验验证当操作违反了完整性约束时，系统如何处理？ 
-- 如：在 SC 中插入一条记录，成绩不在 0-120 之间。 
ALTER TABLE SC
ADD CONSTRAINT C_SCORE 
    CHECK (SCORE BETWEEN 0 AND 120);
--实验
INSERT INTO SC
VALUES
    ('S1','C3',400);