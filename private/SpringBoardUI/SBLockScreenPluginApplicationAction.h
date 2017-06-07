//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUI/SBLockScreenPluginAction.h>

@class NSString, NSURL;

@interface SBLockScreenPluginApplicationAction : SBLockScreenPluginAction
{
    NSString *_bundleID;
    NSURL *_url;
    unsigned long long _transitionStyle;
}

+ (id)actionWithBundleID:(id)arg1;
+ (id)actionWithURL:(id)arg1;
@property(nonatomic) unsigned long long transitionStyle; // @synthesize transitionStyle=_transitionStyle;
@property(retain, nonatomic, setter=setURL:) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
- (_Bool)isApplicationAction;

@end

