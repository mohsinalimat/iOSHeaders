//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TextInputCore/TIKeyboardAssertionManaging-Protocol.h>

@class NSHashTable, NSString;
@protocol TIKeyboardAssertionManagerDelegate;

@interface TIKeyboardAssertionManager : NSObject <TIKeyboardAssertionManaging>
{
    _Bool _hasAssertions;
    _Bool _pendingUpdate;
    _Bool _hasBackgroundActivityAssertions;
    id <TIKeyboardAssertionManagerDelegate> _delegate;
    NSHashTable *_assertions;
    long long _backgroundActivityAssertions;
}

+ (id)singletonInstance;
+ (id)sharedAssertionManager;
+ (void)setSharedAssertionManager:(id)arg1;
@property(nonatomic) long long backgroundActivityAssertions; // @synthesize backgroundActivityAssertions=_backgroundActivityAssertions;
@property(nonatomic) _Bool hasBackgroundActivityAssertions; // @synthesize hasBackgroundActivityAssertions=_hasBackgroundActivityAssertions;
@property(readonly, nonatomic) NSHashTable *assertions; // @synthesize assertions=_assertions;
@property(nonatomic) _Bool pendingUpdate; // @synthesize pendingUpdate=_pendingUpdate;
@property(nonatomic) _Bool hasAssertions; // @synthesize hasAssertions=_hasAssertions;
@property(nonatomic) id <TIKeyboardAssertionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)releaseBackgroundActivityAssertion;
- (void)retainBackgroundActivityAssertion;
- (void)removeAssertionForObject:(id)arg1;
- (void)addAssertionForObject:(id)arg1;
- (void)performBackgroundActivityUpdate;
- (void)performUpdate;
- (void)scheduleUpdate;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

