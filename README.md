# UnderPigstruction
## 前排声明
由于相关游戏的逆向工程项目在Github上被[Takedown](https://github.com/github/dmca/blob/master/2022/10/2022-10-28-rovio.md)，因此我们不得不将逆向工程文件进行加密处理。

本项目**仅供学习参考用途**，**请勿以任何方式将本项目内的代码以及贴图、音效等资源用到你的项目里**，要是被老R搞了可别怪我。

## 关于本项目
本项目为《????? ????? 2》的中国代理版本（也就是2.5.1版本）的逆向工程，其中包含了反编译出来的脚本、贴图、音效以及着色器（有些没有）等内容，且可以直接在Unity编辑器里游玩。

逆向工程并没有使用任何一行泄露出来的游戏源代码，即使有我们也会进行处理。

由于逆向工程工具的缺陷以及项目版本的升级，可能会出现一些Bug（例如Sprite显示的位置和大小错误，背景音乐随着打到的关卡越来越小等等），但也欢迎人们提出Issue并解决。

我们的QQ讨论群：**1170320450**


## 如何打开
1.下载本项目内的"decrypt.c"文件。

2.在下载好的"decrypt.c"文件中，将"password"替换为"0x739230A3"**（区分大小写）**，并编译。

3.下载**最新Release**内的"project.bin"文件，放到"decrypt.c"编译的文件夹位置中。

4.运行编译好的程序并等待，直到出现"按任意键退出"，将程序释放出来的"project.zip"文件解压。

5.使用**Unity 2020.3及以上的版本**打开解压到的文件夹位置，若出现Package错误可以点Ignore，如果能正常游玩就说明已经打开完成了。

## 使用到的工具

1.[AssetRipper](https://github.com/AssetRipper/AssetRipper)

2.[ILSpy](https://github.com/icsharpcode/ILSpy)

## 开源许可证
前排声明的第二行
