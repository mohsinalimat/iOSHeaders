//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NSObject-Protocol.h>

@class AVDepthData, NSDictionary, NSString;

@protocol NUDepthProperties <NSObject>
@property(readonly) CDStruct_912cb5d2 size;
@property(readonly) NSString *depthType;
- (NSDictionary *)auxiliaryData:(out id *)arg1;
- (AVDepthData *)depthData:(out id *)arg1;
@end

