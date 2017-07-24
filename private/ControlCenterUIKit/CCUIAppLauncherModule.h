//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ControlCenterUIKit/CCUIContentModule-Protocol.h>

@class CCUIContentModuleContext, NSBundle, NSString, NSURL, UIImage, UIViewController;
@protocol CCUIContentModuleContentViewController;

@interface CCUIAppLauncherModule : NSObject <CCUIContentModule>
{
    NSBundle *_bundle;
    _Bool _supportsApplicationShortcuts;
    NSString *_applicationIdentifier;
    NSString *_displayName;
    CCUIContentModuleContext *_contentModuleContext;
    NSURL *_launchURL;
}

@property(nonatomic) _Bool supportsApplicationShortcuts; // @synthesize supportsApplicationShortcuts=_supportsApplicationShortcuts;
@property(copy, nonatomic) NSURL *launchURL; // @synthesize launchURL=_launchURL;
@property(retain, nonatomic) CCUIContentModuleContext *contentModuleContext; // @synthesize contentModuleContext=_contentModuleContext;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
- (void)handleTapWithTouchType:(long long)arg1;
- (id)launchURLForTouchType:(long long)arg1;
@property(readonly, copy, nonatomic) UIImage *iconGlyph;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) UIViewController *backgroundViewController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

