//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaMiningKit/NSObject-Protocol.h>

@class CLCircularRegion, NSArray;

@protocol CLSQueryPerformerProtocol <NSObject>
+ (unsigned long long)numberOfRegionsPerBatch;
+ (_Bool)shouldQueryItemsForRegion:(CLCircularRegion *)arg1 selectedRegions:(NSArray *)arg2;
+ (id)queryForRegions:(NSArray *)arg1;
@property(readonly) _Bool isCancelled;
- (void)cancel;
- (void)cacheItems:(NSArray *)arg1;
- (NSArray *)regions;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1;
@end

