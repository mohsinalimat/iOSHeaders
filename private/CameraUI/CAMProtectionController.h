//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface CAMProtectionController : NSObject
{
    int __nebulaDaemonWriteProtectionFileDescriptor;
    NSObject<OS_dispatch_queue> *__protectionQueue;
    NSCountedSet *__persistenceProtectionInflightRequestsByType;
    NSMutableDictionary *__persistenceProtectionFileDescriptorsByType;
    NSMutableDictionary *__burstProcessingProtectionFileDescriptorsByIdentifier;
    NSMutableSet *__nebulaDaemonWriteProtectionInflightIdentifiers;
}

+ (_Bool)isCameraPerformingHighPriorityDiskActivity;
+ (id)pathForProtectNebulaDaemonWritesIndicator;
@property(readonly, nonatomic) int _nebulaDaemonWriteProtectionFileDescriptor; // @synthesize _nebulaDaemonWriteProtectionFileDescriptor=__nebulaDaemonWriteProtectionFileDescriptor;
@property(readonly, nonatomic) NSMutableSet *_nebulaDaemonWriteProtectionInflightIdentifiers; // @synthesize _nebulaDaemonWriteProtectionInflightIdentifiers=__nebulaDaemonWriteProtectionInflightIdentifiers;
@property(readonly, nonatomic) NSMutableDictionary *_burstProcessingProtectionFileDescriptorsByIdentifier; // @synthesize _burstProcessingProtectionFileDescriptorsByIdentifier=__burstProcessingProtectionFileDescriptorsByIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *_persistenceProtectionFileDescriptorsByType; // @synthesize _persistenceProtectionFileDescriptorsByType=__persistenceProtectionFileDescriptorsByType;
@property(readonly, nonatomic) NSCountedSet *_persistenceProtectionInflightRequestsByType; // @synthesize _persistenceProtectionInflightRequestsByType=__persistenceProtectionInflightRequestsByType;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_protectionQueue; // @synthesize _protectionQueue=__protectionQueue;
- (void).cxx_destruct;
- (void)_protectionQueueAbortProtectionForNebulaDaemonWrites;
- (void)_protectionQueueStopProtectingNebulaDaemonWritesForIdentifier:(id)arg1 closeFile:(_Bool)arg2;
- (void)_protectionQueueStartProtectingNebulaDaemonWritesForIdentifier:(id)arg1;
- (void)stopProtectingNebulaDaemonWritesForIdentifier:(id)arg1;
- (void)startProtectingNebulaDaemonWritesForIdentifier:(id)arg1;
- (void)stopProtectingBurstProcessingForIdentifier:(id)arg1;
- (void)startProtectingBurstProcessingForIdentifier:(id)arg1;
- (void)_protectionQueueAbortProtectionForBurstProcessing;
- (void)_protectionQueueRemoveBurstProcessingProtectionIndicatorForIdentifier:(id)arg1;
- (void)_addBurstProcessingProtectionIndicatorForIdentifier:(id)arg1;
- (int)_burstProcessingProtectionFileDescriptorForIdentifier:(id)arg1;
- (id)_burstProcessingProtectionPathForIdentifier:(id)arg1;
- (void)stopProtectingPersistenceForRequest:(id)arg1;
- (void)startProtectingPersistenceForRequest:(id)arg1;
- (void)_protectionQueueAbortProtectionForProtectionTypes;
- (void)_protectionQueueStopProtectingPersistenceForType:(long long)arg1;
- (void)_protectionQueueStartProtectingPersistenceForType:(long long)arg1;
- (void)_protectionQueueRemovePersistenceProtectionIndicatorForType:(long long)arg1 unlinkFile:(_Bool)arg2;
- (void)_addPersistenceProtectionIndicatorForType:(long long)arg1;
- (int)_persistenceProtectionFileDescriptorForType:(long long)arg1;
- (id)_persistenceProtectionPathForType:(long long)arg1;
- (long long)_persistenceProtectionTypeForRequest:(id)arg1;
- (void)dealloc;
- (id)init;

@end

