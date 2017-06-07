//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import <CoreDAV/CoreDAVACLTaskDelegate-Protocol.h>
#import <CoreDAV/CoreDAVPropFindTaskDelegate-Protocol.h>

@class CoreDAVPropFindTask, NSSet, NSString, NSURL;

@interface CoreDAVUpdateACLTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVACLTaskDelegate>
{
    int _state;
    NSSet *_aceItems;
    NSURL *_url;
    CoreDAVPropFindTask *_fetchTask;
}

@property(retain, nonatomic) CoreDAVPropFindTask *fetchTask; // @synthesize fetchTask=_fetchTask;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSSet *aceItems; // @synthesize aceItems=_aceItems;
@property(nonatomic) int state; // @synthesize state=_state;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (void)startTaskGroup;
- (void)_startSetACLWithAccessControlEntities:(id)arg1;
- (void)_startGetACL;
- (void)dealloc;
- (id)initWithAccountInfoProvider:(id)arg1 aceItems:(id)arg2 url:(id)arg3 taskManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

