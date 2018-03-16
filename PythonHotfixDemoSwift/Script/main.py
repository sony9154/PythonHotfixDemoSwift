#!/usr/bin/env python
# -*- coding: utf-8 -*-

from objc_util import *
from common_objc import *
import ui
import os
from console import hud_alert

# objc的類別要用ObjCClass("類別")去抓
# 想像objc空格就換Dot, 方法換(), 冒號換底線_

def hotfixDemo():
  kw = Application.sharedApplication().keyWindow()
  #rvc = kw.rootViewController()
  #print(rvc)
  #rvc.view().setBackgroundColor_(myColor)
  vc = ViewController.alloc().init()
  myColor = ObjCClass("UIColor").redColor()
  vc.view().setBackgroundColor_(myColor)
  kw.setRootViewController_(vc)


#p = os.getcwd() +



hotfixDemo()






