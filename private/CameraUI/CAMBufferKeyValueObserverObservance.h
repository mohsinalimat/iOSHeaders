//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMBufferObservance.h>

@class NSObject, NSString;

@interface CAMBufferKeyValueObserverObservance : CAMBufferObservance
{
    NSObject *_object;
    NSString *_keyPath;
}

@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, nonatomic) __weak NSObject *object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)teardownObservanceForBuffer:(id)arg1;
- (void)setupObservanceForBuffer:(id)arg1;
- (_Bool)shouldBeFulfilledByChange:(id)arg1;
- (id)initWithKeyPath:(id)arg1 ofObject:(id)arg2 withPredicate:(CDUnknownBlockType)arg3 removedOnceEnabled:(_Bool)arg4;

@end

