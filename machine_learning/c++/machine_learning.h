class machine_learning
{

};


//有监督学习
//从有标记的训练数据中推导出预测函数。
//给定数据，预测标签。
class supervised_learning:public machine_learning
{

};


//无监督学习
// 从无标记的训练数据中推断结论。
// 给定数据，寻找隐藏的结构。
class unsupervised_learning:public machine_learning
{

};


//半监督学习
//让模型不依赖外界进行交互，自动地利用未标记样本提升学习性能。
class semi_supervised_learning:public machine_learning
{

};


//强化学习
//给定数据，学习如何选择一系列行动，以最大化长期收益。
class reinforcement_learning:public machine_learning
{

};