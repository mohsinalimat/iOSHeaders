//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _RadioPlayEventStationInformation : NSObject
{
    NSString *_stationHash;
    long long _stationID;
}

@property(nonatomic) long long stationID; // @synthesize stationID=_stationID;
@property(copy, nonatomic) NSString *stationHash; // @synthesize stationHash=_stationHash;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

