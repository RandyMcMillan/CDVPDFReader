CDVPDFReader
===

Cordova (iOS) Xcode Plugin Template
---

Updated 07/31/2013 for Cordova iOS 3.0.0

For the template installer [cdv-ios-plugin-templates](https://github.com/RandyMcMillan/cdv-ios-plugin-templates)

    git clone https://github.com/RandyMcMillan/cdv-ios-plugin-templates.git

###Installation:
    $ cd ~/Library/Developer/Xcode/Templates/File\ Templates
    $ git clone https://github.com/RandyMcMillan/CDVPDFReader.git

![image](https://raw.github.com/RandyMcMillan/CDVPDFReader/master/ScreenShot.png)

###Usage:
####Open your Cordova (iOS) Xcode Project

* Press `<COMMAND+n>`    

    ![image](https://raw.github.com/RandyMcMillan/CDVPDFReader/master/ScreenShot2.png)  


    ![image](https://raw.github.com/RandyMcMillan/CDVPDFReader/master/ScreenShot3.png) 

* Copy the CDVPDFReader.js file to your /www folder

    ![image](https://raw.github.com/RandyMcMillan/CDVPDFReader/master/ScreenShot4.png)
    
[Sample index.html is included in the generated plugin](https://raw.github.com/RandyMcMillan/CDVPDFReader/master/CDVPDFReader.xctemplate/index.html)

####Add to www/index.html

`<script type="text/javascript" charset="utf-8" src="CDVPDFReader.js"></script>`




Add Folder Group from 
---
`   `

![image](https://raw.github.com/RandyMcMillan/CDVPDFReader/master/CDVPDFReader.xctemplate/ScreenShot1.png)

#### *Option 

Link or Copy into the Xcode project


![image](https://raw.github.com/RandyMcMillan/CDVPDFReader/master/CDVPDFReader.xctemplate/ScreenShot2.png)
<br>

[Sample index.html is included in the generated plugin](https://raw.github.com/RandyMcMillan/CDVPDFReader/master/CDVPDFReader.xctemplate/index.html)



####Add to www/index.html

`<script type="text/javascript" charset="utf-8" src="CDVPDFReader.js"></script>`

A sample index.html is included in the plugin repository

####Cordova (iOS) 3.0+

#####add to your config.xml 

    <feature name="CDVPDFReader">
        <param name="ios-package" value="CDVPDFReader"/>
    </feature>


![image](https://raw.github.com/RandyMcMillan/CDVPDFReader/master/AddFilesToProject.png)
![image](https://raw.github.com/RandyMcMillan/CDVPDFReader/master/AddProjectsToProject2.png)
###Add files to the project

![image](https://raw.github.com/RandyMcMillan/CDVPDFReader/master/CopyJSToWWW.png)
![image](https://raw.github.com/RandyMcMillan/CDVPDFReader/master/CopyJSToWWW2.png)
###Copy CDVPDFViewer.js to your project's WWW folder
![image](https://raw.github.com/RandyMcMillan/CDVPDFReader/master/EditConfigXML.png)
###Edit the config.xml file

    <feature name="CDVPDFViewer">
        <param name="ios-package" value="CDVPDFViewer"/>
    </feature>

![image](https://raw.github.com/RandyMcMillan/CDVPDFReader/master/IndexHTML.png)
Sample [index.html](https://raw.github.com/RandyMcMillan/PDFViewer/master/index.html)
![image](https://raw.github.com/RandyMcMillan/CDVPDFReader/master/MessageUI.png)
Add MessageUI.framework to your project.



This new version offers a new UI based on original source code here: [https://github.com/vfr/Reader](https://github.com/vfr/Reader)
<br>Reference for additional usage 

![image](https://raw.github.com/RandyMcMillan/CDVPDFReader/master/viewportrait.png)
![image](https://raw.github.com/RandyMcMillan/CDVPDFReader/master/viewportrait2.png)
![image](https://raw.github.com/RandyMcMillan/CDVPDFReader/master/ipadlandscapeview.png)
![image](https://raw.github.com/RandyMcMillan/CDVPDFReader/master/ipadlandscapeview2.png)
![image](https://raw.github.com/RandyMcMillan/CDVPDFReader/master/ipadlandscapeview3.png)
![image](https://raw.github.com/RandyMcMillan/CDVPDFReader/master/ipadlandscapeview4.png)
![image](https://raw.github.com/RandyMcMillan/CDVPDFReader/master/ipadlandscapeview5.png)







<br><br>

 Licensed to the Apache Software Foundation (ASF) under one
 or more contributor license agreements.  See the NOTICE file
 distributed with this work for additional information
 regarding copyright ownership.  The ASF licenses this file
 to you under the Apache License, Version 2.0 (the
 "License"); you may not use this file except in compliance
 with the License.  You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing,
 software distributed under the License is distributed on an
 "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 KIND, either express or implied.  See the License for the
 specific language governing permissions and limitations
 under the License.
 
 
 or 
 
 
 The MIT License

 Copyright (c) 2012 Randy McMillan

 Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.




 ReaderViewController.h
 Reader v2.6.0

 Created by Julius Oklamcak on 2011-07-01.
 Copyright © 2011-2013 Julius Oklamcak. All rights reserved.

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights to
 use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 of the Software, and to permit persons to whom the Software is furnished to
 do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

