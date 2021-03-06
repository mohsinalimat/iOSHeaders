//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import <CalDAV/CoreDAVTaskDelegate-Protocol.h>

@class CalDAVPrincipalEmailDetailsResult, NSSet, NSString, NSURL;

@interface CalDAVGetPrincipalEmailDetailsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate>
{
    NSURL *_principalURL;
    CalDAVPrincipalEmailDetailsResult *_principalResult;
}

@property(retain, nonatomic) CalDAVPrincipalEmailDetailsResult *principalResult; // @synthesize principalResult=_principalResult;
@property(retain, nonatomic) NSURL *principalURL; // @synthesize principalURL=_principalURL;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSString *displayName;
@property(readonly, retain, nonatomic) NSSet *addresses;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)_processPropFind:(id)arg1;
- (void)_finishWithError:(id)arg1;
- (void)startTaskGroup;
- (id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

