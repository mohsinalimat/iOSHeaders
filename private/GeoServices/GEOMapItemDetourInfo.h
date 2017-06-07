//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOPDResultDetourInfo, NSData;

@interface GEOMapItemDetourInfo : NSObject
{
    GEOPDResultDetourInfo *_detourInfo;
}

@property(readonly, nonatomic, getter=_detourInfo) GEOPDResultDetourInfo *detourInfo; // @synthesize detourInfo=_detourInfo;
@property(readonly, nonatomic) NSData *detourInfoAsData;
@property(readonly, nonatomic) double distanceToPlace;
@property(readonly, nonatomic) double detourDistance;
@property(readonly, nonatomic) double timeToPlace;
@property(readonly, nonatomic) double detourTime;
- (void)dealloc;
- (id)initWithResultDetourInfo:(id)arg1;
- (id)init;

@end

