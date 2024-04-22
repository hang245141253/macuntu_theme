# Macuntu theme

本项目为本人的主题备份，避免下次更新24.04、26.04重装系统忘记以前是如何配置ubuntu美化的，特此备份。

2024/4/22 ：首次上传，保证ubuntu22.04可用。 20.04可能有小bug。

## 1.安装优化、扩展
```bash
sudo apt install gnome-tweaks gnome-shell-extensions
```

![优化、扩展](image.png)


## 2.chrome或者Edge浏览器安装gnome-shell插件
https://chromewebstore.google.com/detail/gnome-shell-%E9%9B%86%E6%88%90/gphhapmejobijbbhgpjhcjognlahblep?pli=1

![gnome-shell](image-1.png)

## 3.打开User Themes
https://extensions.gnome.org/extension/19/user-themes/ 
ON后可以方可配置主题包。

![user-themes](image-2.png)

## 4.下载主题包

主题：
https://github.com/vinceliuice/WhiteSur-gtk-theme

图标：
https://github.com/vinceliuice/WhiteSur-icon-theme

鼠标：
https://github.com/vinceliuice/McMojave-cursors

**通过git clone或者下载Releases(鼠标没有Releases只能clone)**

```bash
cd WhiteSur-gtk-theme/ # 主题文件夹
sudo ./install.sh -d /usr/share/themes/ -m
sudo ./tweaks.sh -g -b "/usr/share/backgrounds/壁纸(需手动修改).png"  

cd WhiteSur-icon-theme/ # 图标文件夹
sudo ./install.sh -d /usr/share/icons/ -b

cd McMojave-cursors/ # 鼠标文件夹
sudo ./install.sh
```

然后按照下图配置：

![主题配置截图](image-3.png)

## 5.根据喜好配置extensions

以下为本人配置的备份：

![alt text](image-4.png)
![alt text](image-5.png)
![alt text](image-6.png)

# 最终成品

![alt text](image-7.png)