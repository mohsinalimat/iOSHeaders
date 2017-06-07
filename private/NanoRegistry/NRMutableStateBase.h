//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NRMutableStateProtocol-Protocol.h>

@class NSMutableSet, NSString;
@protocol NRMutableStateParentDelegate, OS_dispatch_queue;

@interface NRMutableStateBase : NSObject <NRMutableStateProtocol>
{
    NSMutableSet *_observers;
    id <NRMutableStateParentDelegate> _parentDelegate;
}

+ (id)classTypes;
+ (id)enclosedClassTypes;
+ (id)diffFrom:(id)arg1 to:(id)arg2;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) __weak id <NRMutableStateParentDelegate> parentDelegate; // @synthesize parentDelegate=_parentDelegate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)addObserverQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)notifyObserversWithDiff:(id)arg1;
- (void)notifyParentWithDiff:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (id)applyDiff:(id)arg1 upOnly:(_Bool)arg2 notifyParent:(_Bool)arg3 unconditional:(_Bool)arg4;
- (id)applyDiff:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

