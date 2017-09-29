#debug=0是release包
DEBUG = 1
#iphone的ip地址
THEOS_DEVICE_IP = 192.168.2.24
#当前包支持的cpu架构
ARCHS = armv7 arm64 
#支持的ios版本
TARGET = iphone:latest:8.0  
include $(THEOS)/makefiles/common.mk

TWEAK_NAME = redpocket
redpocket_FILES = Tweak.xm
#需要导入的库
redpocket_FRAMEWORKS = UIKit 
#redpocket_PRIVATE_FRAMEWORKS = AppSupport
include $(THEOS_MAKE_PATH)/Tweak.mk

after-install::
	install.exec "killall -9 WeChat"
clean::
	rm -rf ./packages/*
	rm -rf ./.theos/*
