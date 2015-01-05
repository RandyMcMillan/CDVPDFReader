// PDFViewer based on ChildBrowser

//  Created by Jesse MacFadyen on 10-05-29.
//  Copyright 2010 Nitobi. All rights reserved.
//
//  ___FILEBASENAME___
//  CDVEmailComposer Template Created Jan 7 2013
//  Copyright 2013 @RandyMcMillan

#import <Cordova/CDVPlugin.h>
#import "___FILEBASENAME___ViewController.h"
#import "ReaderViewController.h"

@interface ___FILEBASENAME___ : CDVPlugin <___FILEBASENAME___Delegate,ReaderViewControllerDelegate>{}

@property (nonatomic, strong) ReaderViewController *pdfViewer;


/*
 *
 *   - (void)myMethod:(CDVInvokedUrlCommand*)command;
 *
 */


- (void)showPDF:(CDVInvokedUrlCommand*)command;
- (void)dismissReaderViewController:(ReaderViewController *)viewController;

@end
