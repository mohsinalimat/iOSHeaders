//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class NSDate;

@protocol NTKTimeView <NSObject>
@property(nonatomic, getter=isFrozen) _Bool frozen;
- (void)setTimeOffset:(double)arg1;
- (void)setOverrideDate:(NSDate *)arg1 duration:(double)arg2;
@end

