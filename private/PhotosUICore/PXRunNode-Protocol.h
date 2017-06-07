//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray;
@protocol PXRunNodeDelegate;

@protocol PXRunNode <NSObject>
@property(readonly, copy, nonatomic) NSArray *dependencies;
@property(nonatomic) __weak id <PXRunNodeDelegate> delegate;
@property(readonly, getter=isCanceled) _Bool canceled;
@property(readonly, getter=isComplete) _Bool complete;
@property(readonly, getter=isRunning) _Bool running;
@property(readonly, getter=isWaiting) _Bool waiting;
@property(readonly) unsigned long long state;
- (void)cancel;
@end

