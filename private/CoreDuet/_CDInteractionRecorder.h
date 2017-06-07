//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDInteractionDeleting-Protocol.h>
#import <CoreDuet/_CDInteractionQuerying-Protocol.h>
#import <CoreDuet/_CDInteractionRecording-Protocol.h>

@class NSXPCConnection, _CDInteractionPolicies;

@interface _CDInteractionRecorder : NSObject <_CDInteractionDeleting, _CDInteractionQuerying, _CDInteractionRecording>
{
    NSXPCConnection *_connection;
    _CDInteractionPolicies *_policies;
    _Bool _enforceDataLimits;
    _Bool _enforcePrivacy;
}

+ (id)interactionRecorder;
@property _Bool enforcePrivacy; // @synthesize enforcePrivacy=_enforcePrivacy;
@property _Bool enforceDataLimits; // @synthesize enforceDataLimits=_enforceDataLimits;
- (void).cxx_destruct;
- (unsigned long long)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 error:(id *)arg3;
- (unsigned long long)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 error:(id *)arg3;
- (unsigned long long)deleteInteractionsWithBundleId:(id)arg1 error:(id *)arg2;
- (unsigned long long)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id *)arg4;
- (void)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (unsigned long long)countContactsUsingPredicate:(id)arg1 error:(id *)arg2;
- (void)countContactsUsingPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id *)arg4;
- (void)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3;
- (unsigned long long)countInteractionsUsingPredicate:(id)arg1 error:(id *)arg2;
- (void)countInteractionsUsingPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id *)arg4;
- (void)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)recordInteractions:(id)arg1;
- (_Bool)recordInteraction:(id)arg1;
- (void)recordInteractions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1;

@end

