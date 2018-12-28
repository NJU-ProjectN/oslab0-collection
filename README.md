
# oslab0游戏N合一

本仓库收录oslab0中的优秀作品.
游戏借助AM的抽象可运行在各种平台之上, 包括native, x86-nemu, mips32-noop等.

## 编译方式

需要依赖[AM项目](https://github.com/NJU-ProjectN/nexus-am.git)进行编译, 具体请参考AM项目.

## 收录要求

* 兼容AM的TRM和IOE API
* 不含平台相关代码 
* 不含浮点数
* 不要作"屏幕大小固定"的假设
* 分配无需初始化的大数组时尽量使用TRM的`_heap`
* 在native和x86-nemu的AM上游戏体验皆良好
* 好玩

## 代码模糊

收录的游戏代码会经过模糊处理, 我们鼓励大家在oslab0中编写属于自己的精彩游戏.
