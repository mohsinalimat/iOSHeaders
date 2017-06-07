//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import <CoreDAV/CoreDAVPropFindTaskDelegate-Protocol.h>

@class NSMutableSet, NSSet, NSString;
@protocol CoreDAVContainerInfoTaskGroupDelegate;

@interface CoreDAVContainerInfoTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate>
{
    int _phase;
    NSMutableSet *_containerURLs;
    NSMutableSet *_containers;
    int _containerInfoDepth;
    NSString *_appSpecificHomeSetPropNameSpace;
    NSString *_appSpecificHomeSetPropName;
}

@property(readonly, nonatomic) NSSet *containerURLs; // @synthesize containerURLs=_containerURLs;
@property(nonatomic) int containerInfoDepth; // @synthesize containerInfoDepth=_containerInfoDepth;
- (id)_copyContainerParserMappings;
- (id)_copyContainerWithURL:(id)arg1 andProperties:(id)arg2;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)_getContainerTopLevelInfo;
- (void)_getContainerHomeSet;
- (int)containerInfoDepthForURL:(id)arg1;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (void)startTaskGroup;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithAccountInfoProvider:(id)arg1 containerURLs:(id)arg2 taskManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <CoreDAVContainerInfoTaskGroupDelegate> delegate; // @dynamic delegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

