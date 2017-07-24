//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/IDSBatchIDQueryControllerDelegate-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, TUIDSBatchIDQueryController, TUIDSIDQueryController;

@interface TUIDSLookupManager : NSObject <IDSBatchIDQueryControllerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <TUIDSIDQueryController> _queryController;
    NSMutableDictionary *_idsFaceTimeVideoStatuses;
    NSMutableDictionary *_idsFaceTimeAudioStatuses;
    id <TUIDSBatchIDQueryController> _batchQuerySearchVideoController;
    id <TUIDSBatchIDQueryController> _batchQuerySearchAudioController;
    CDUnknownBlockType _batchQueryControllerCreationBlock;
}

+ (_Bool)isAnyDestinationAvailableInDestinations:(id)arg1 usingCache:(id)arg2;
+ (id)sharedManager;
@property(copy, nonatomic) CDUnknownBlockType batchQueryControllerCreationBlock; // @synthesize batchQueryControllerCreationBlock=_batchQueryControllerCreationBlock;
@property(retain, nonatomic) id <TUIDSBatchIDQueryController> batchQuerySearchAudioController; // @synthesize batchQuerySearchAudioController=_batchQuerySearchAudioController;
@property(retain, nonatomic) id <TUIDSBatchIDQueryController> batchQuerySearchVideoController; // @synthesize batchQuerySearchVideoController=_batchQuerySearchVideoController;
@property(readonly, nonatomic) NSMutableDictionary *idsFaceTimeAudioStatuses; // @synthesize idsFaceTimeAudioStatuses=_idsFaceTimeAudioStatuses;
@property(readonly, nonatomic) NSMutableDictionary *idsFaceTimeVideoStatuses; // @synthesize idsFaceTimeVideoStatuses=_idsFaceTimeVideoStatuses;
@property(readonly, nonatomic) id <TUIDSIDQueryController> queryController; // @synthesize queryController=_queryController;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2;
- (void)beginQueryWithDestinations:(id)arg1;
- (void)cancelQueries;
- (_Bool)isFaceTimeAudioAvailableForAnyDestinationInDestinations:(id)arg1;
- (_Bool)isFaceTimeVideoAvailableForAnyDestinationInDestinations:(id)arg1;
- (_Bool)isFaceTimeAudioAvailableForItem:(id)arg1;
- (_Bool)isFaceTimeVideoAvailableForItem:(id)arg1;
- (void)dealloc;
- (id)initWithQueryController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

