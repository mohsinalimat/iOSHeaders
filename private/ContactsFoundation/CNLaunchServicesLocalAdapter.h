//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ContactsFoundation/CNLaunchServicesAdapter-Protocol.h>

@class LSApplicationWorkspace;

@interface CNLaunchServicesLocalAdapter : NSObject <CNLaunchServicesAdapter>
{
    LSApplicationWorkspace *_workspace;
}

+ (id)lsApplicationWorkspaceForBundleId:(id)arg1;
@property(retain, nonatomic) LSApplicationWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (void)openUserActivityData:(id)arg1 inApplication:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)applicationForBundleIdentifier:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)applicationsAvailableForHandlingURLScheme:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)applicationsForUserActivityType:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (id)initWithApplicationWorkspace:(id)arg1;

@end

