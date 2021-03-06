//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import <CalDAV/CoreDAVPropPatchTaskDelegate-Protocol.h>
#import <CalDAV/CoreDAVTaskGroupDelegate-Protocol.h>

@class CalDAVGetGrantedDelegatesTaskGroup, NSSet, NSString;

@interface CalDAVUpdateGrantedDelegatesTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate, CoreDAVTaskGroupDelegate>
{
    int _state;
    NSSet *_addWriteURLs;
    NSSet *_addReadURLs;
    NSSet *_removeURLs;
    NSSet *_updatedWriteURLs;
    NSSet *_updatedReadURLs;
    CalDAVGetGrantedDelegatesTaskGroup *_getGrantedDelegatesTaskGroup;
}

@property(retain, nonatomic) CalDAVGetGrantedDelegatesTaskGroup *getGrantedDelegatesTaskGroup; // @synthesize getGrantedDelegatesTaskGroup=_getGrantedDelegatesTaskGroup;
@property(retain, nonatomic) NSSet *updatedReadURLs; // @synthesize updatedReadURLs=_updatedReadURLs;
@property(retain, nonatomic) NSSet *updatedWriteURLs; // @synthesize updatedWriteURLs=_updatedWriteURLs;
@property(retain, nonatomic) NSSet *removeURLs; // @synthesize removeURLs=_removeURLs;
@property(retain, nonatomic) NSSet *addReadURLs; // @synthesize addReadURLs=_addReadURLs;
@property(retain, nonatomic) NSSet *addWriteURLs; // @synthesize addWriteURLs=_addWriteURLs;
@property(nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;
- (void)startTaskGroup;
- (void)_populateUpdatesFromFetched:(id)arg1 allowWrite:(_Bool)arg2;
- (void)_updateDelegatesWithAllowWrite:(_Bool)arg1;
- (void)_fetchExistingGrantedDelegates;
- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (id)initWithAccountInfoProvider:(id)arg1 addWriteURLs:(id)arg2 addReadURLs:(id)arg3 removeURLs:(id)arg4 taskManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

