//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVMLKit/IKApplication-Protocol.h>

@class IKAppDataStorage, NSDictionary, NSString, TVApplicationControllerContext, UIWindow, _TVAppNavigationController, _TVRootMenuBarController;

__attribute__((visibility("hidden")))
@interface _TVMLKitApplication : NSObject <IKApplication>
{
    _Bool _headless;
    TVApplicationControllerContext *_launchContext;
    IKAppDataStorage *_localDataStorage;
    _TVAppNavigationController *_navigationController;
    _TVRootMenuBarController *_menuBarController;
    UIWindow *_keyWindow;
    NSDictionary *_javaScriptLaunchOptions;
}

@property(nonatomic) _Bool headless; // @synthesize headless=_headless;
@property(copy, nonatomic) NSDictionary *javaScriptLaunchOptions; // @synthesize javaScriptLaunchOptions=_javaScriptLaunchOptions;
@property(nonatomic) __weak UIWindow *keyWindow; // @synthesize keyWindow=_keyWindow;
@property(nonatomic) __weak _TVRootMenuBarController *menuBarController; // @synthesize menuBarController=_menuBarController;
@property(nonatomic) __weak _TVAppNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak IKAppDataStorage *localDataStorage; // @synthesize localDataStorage=_localDataStorage;
@property(nonatomic) __weak TVApplicationControllerContext *launchContext; // @synthesize launchContext=_launchContext;
- (void).cxx_destruct;
- (id)appTraitCollection;
- (_Bool)appIsPrivileged;
- (_Bool)appIsTrusted;
- (id)userDefaultsStorage;
- (id)vendorStorage;
- (id)vendorIdentifier;
- (_Bool)shouldIgnoreJSValidation;
- (id)localStorage;
- (id)appLaunchParams;
- (id)appJSCachePath;
- (id)appLocalJSURL;
- (id)appJSURL;
- (id)appIdentifier;
- (id)activeDocument;
- (id)initWithLaunchContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

