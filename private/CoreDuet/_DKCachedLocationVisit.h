//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _DKCachedLocationVisit : NSObject
{
    double _entryTime;
    double _exitTime;
    NSString *_locationId;
}

@property(retain, nonatomic) NSString *locationId; // @synthesize locationId=_locationId;
@property(nonatomic) double exitTime; // @synthesize exitTime=_exitTime;
@property(nonatomic) double entryTime; // @synthesize entryTime=_entryTime;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqualToVisit:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end

