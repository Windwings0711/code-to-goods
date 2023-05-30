# code-to-goods
代码到实物期末课设

# 绿色广告风扇

## 设计过程
初步设计图如下：
![image](https://github.com/Windwings0711/code-to-goods/blob/main/img/QQ%E5%9B%BE%E7%89%8720230530135937.jpg)
设计思路主要有以下几点：

### 1.夏季炎热，出门旅行时便携小风扇可以缓解酷暑。
### 2.夏季蚊虫较多，配备了驱蚊驱虫装置，免除蚊虫纷扰。
### 3.旅行时难免会遇到需要光源的时候，小风扇可以提供小光源缓解燃眉之急。



考虑到风扇造价低廉，我们想到了可以作为一个广告的载体，发挥其商业价值。所以，绿色广告风扇的雏形出现。

我们希望给广告风扇加装一个可拆卸的广告轮播模块，芯片使用esp32C3，连接一块tft_lcd屏幕，尺寸为（160*128),以下为插件设计图


![image](https://github.com/Windwings0711/code-to-goods/blob/main/img/QQ%E5%9B%BE%E7%89%8720230530135951.jpg)


## 设计海报展示
![image](https://github.com/Windwings0711/code-to-goods/blob/main/img/%E8%83%8C%E6%99%AF.jpg)
![image](https://github.com/Windwings0711/code-to-goods/blob/main/img/%E8%AE%BE%E8%AE%A1%E6%80%9D%E8%B7%AF.jpg)
![image](https://github.com/Windwings0711/code-to-goods/blob/main/img/%E8%AE%BE%E8%AE%A1%E8%BF%87%E7%A8%8B%EF%BC%8C%E6%88%90%E6%9E%9C%E5%B1%95%E7%A4%BA.jpg)
![image](https://github.com/Windwings0711/code-to-goods/blob/main/img/4.jpg)
![image](https://github.com/Windwings0711/code-to-goods/blob/main/img/5.jpg)
以下为使用说明：
## 广告轮播功能
picture为存放广告的文件夹，轮训播放的广告图片矩阵存储在此。如果希望增加播放图片，请先使用第三方软件提取图像的矩阵，转化为.h文件后直接调用。

代码为helloworld.ino

## 天气时钟显示功能
在CLOCK文件夹，代码为CLOCK.ino

### 使用注意事项
1.Time-Library.zip是所需要的库文件，Arduino无法直接下载，请下载后解压缩使用。

2.因为天气时钟需要联网，所以请在使用的时候更改CLOCK.ino文件中的SSID与passsword。

## 3D打印
在3D文件夹，主要有手动风扇和esp32C3可拆卸件的展示盒的3D模型文件，格式为stl。

