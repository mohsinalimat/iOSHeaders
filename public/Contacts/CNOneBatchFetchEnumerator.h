//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/CNBatchFetchEnumerator-Protocol.h>

@class CNQueue, NSString;

__attribute__((visibility("hidden")))
@interface CNOneBatchFetchEnumerator : NSObject <CNBatchFetchEnumerator>
{
    CNQueue *_queue;
}

@property(readonly, nonatomic) CNQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)nextContactsAndMatchInfos:(id *)arg1 error:(id *)arg2;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

