//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class HMDBackingStoreLocal;

@interface HMDBackingStoreLocalFlushOperation : NSOperation
{
    _Bool _clearCloud;
    HMDBackingStoreLocal *_store;
    CDUnknownBlockType _resultHandler;
}

@property(nonatomic) _Bool clearCloud; // @synthesize clearCloud=_clearCloud;
@property(copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(retain, nonatomic) HMDBackingStoreLocal *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)main;
- (id)initWithStore:(id)arg1 clearCloud:(_Bool)arg2 resultHandler:(CDUnknownBlockType)arg3;

@end

